/*
 * XREFs of MiInitializeSlowPte @ 0x140539AAC
 * Callers:
 *     MiSlowRotateCopy @ 0x140539CFC (MiSlowRotateCopy.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x14023B9BC (MiMakeProtectionPfnCompatible.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 */

char __fastcall MiInitializeSlowPte(unsigned __int64 *a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // r10
  int ProtectionPfnCompatible; // r8d
  unsigned __int64 ValidPte; // rbx
  int v8; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // r8
  bool v11; // zf

  v4 = a2;
  ProtectionPfnCompatible = 4;
  if ( a2 <= 0xFFFFFFFFFLL && ((*(_QWORD *)(48 * a2 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
  {
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * a2 - 0x58000000000LL);
  }
  else if ( a3 )
  {
    if ( a3 == 2 )
      ProtectionPfnCompatible = 28;
  }
  else
  {
    ProtectionPfnCompatible = 12;
  }
  ValidPte = MiMakeValidPte((unsigned __int64)a1, v4, ProtectionPfnCompatible | 0xA0000000);
  v8 = 0;
  LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)a1);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v8 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_16;
      v11 = (ValidPte & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_16;
      v11 = (ValidPte & 1) == 0;
    }
    if ( !v11 )
    {
      LOBYTE(CurrentThread) = 0;
      ValidPte |= 0x8000000000000000uLL;
    }
  }
LABEL_16:
  *a1 = ValidPte;
  if ( v8 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)a1, ValidPte, v10);
  return (char)CurrentThread;
}
