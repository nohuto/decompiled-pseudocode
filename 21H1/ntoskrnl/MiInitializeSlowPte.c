/*
 * XREFs of MiInitializeSlowPte @ 0x140533F8C
 * Callers:
 *     MiSlowRotateCopy @ 0x1405341DC (MiSlowRotateCopy.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x1402827DC (MiMakeProtectionPfnCompatible.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 */

char __fastcall MiInitializeSlowPte(unsigned __int64 *a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  int ProtectionPfnCompatible; // r8d
  unsigned __int64 ValidPte; // rbx
  int v8; // esi
  struct _KTHREAD *CurrentThread; // rax
  bool v10; // zf

  v3 = a3;
  v4 = a2;
  ProtectionPfnCompatible = 4;
  if ( a2 <= 0xFFFFFFFFFLL && ((*(_QWORD *)(48 * a2 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
  {
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * a2 - 0x58000000000LL);
  }
  else if ( (_DWORD)v3 )
  {
    if ( (_DWORD)v3 == 2 )
      ProtectionPfnCompatible = 28;
  }
  else
  {
    ProtectionPfnCompatible = 12;
  }
  ValidPte = MiMakeValidPte((unsigned __int64)a1, v4, ProtectionPfnCompatible | 0xA0000000, v3);
  v8 = 0;
  LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)a1);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v8 = 1;
      if ( HIBYTE(word_140C4DF48) )
        goto LABEL_16;
      v10 = (ValidPte & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_16;
      v10 = (ValidPte & 1) == 0;
    }
    if ( !v10 )
    {
      LOBYTE(CurrentThread) = 0;
      ValidPte |= 0x8000000000000000uLL;
    }
  }
LABEL_16:
  *a1 = ValidPte;
  if ( v8 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)a1, ValidPte);
  return (char)CurrentThread;
}
