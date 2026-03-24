/*
 * XREFs of MmChangeKernelCfgBitmap @ 0x1408D7958
 * Callers:
 *     PsDispatchIumService @ 0x140582CF4 (PsDispatchIumService.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiGetPteAddress @ 0x140318100 (MiGetPteAddress.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 */

char __fastcall MmChangeKernelCfgBitmap(unsigned __int64 a1)
{
  __int64 v1; // rdx
  _QWORD *PteAddress; // rdi
  unsigned __int64 v3; // rcx
  char v4; // r8
  unsigned __int64 ValidPte; // rbx
  int v6; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r8
  bool v9; // zf

  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  v3 = (unsigned __int64)PteAddress;
  if ( v4 )
  {
    ValidPte = MiMakeValidPte((unsigned __int64)PteAddress, v1, 536870913);
    v3 = (unsigned __int64)PteAddress;
  }
  else
  {
    ValidPte = ZeroPte;
  }
  v6 = 0;
  LODWORD(CurrentThread) = MiPteInShadowRange(v3);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v6 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_12;
      v9 = (ValidPte & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_12;
      v9 = (ValidPte & 1) == 0;
    }
    if ( !v9 )
    {
      LOBYTE(CurrentThread) = 0;
      ValidPte |= 0x8000000000000000uLL;
    }
  }
LABEL_12:
  *PteAddress = ValidPte;
  if ( v6 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)PteAddress, ValidPte, v8);
  return (char)CurrentThread;
}
