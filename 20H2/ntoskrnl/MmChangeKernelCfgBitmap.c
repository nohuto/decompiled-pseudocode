/*
 * XREFs of MmChangeKernelCfgBitmap @ 0x1408DA198
 * Callers:
 *     PsDispatchIumService @ 0x1405812E4 (PsDispatchIumService.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetPteAddress @ 0x140230160 (MiGetPteAddress.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 */

char __fastcall MmChangeKernelCfgBitmap(unsigned __int64 a1)
{
  __int64 v1; // rdx
  _QWORD *PteAddress; // rdi
  __int64 v3; // r9
  unsigned __int64 v4; // rcx
  char v5; // r8
  unsigned __int64 ValidPte; // rbx
  int v7; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // r8
  bool v10; // zf

  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  v4 = (unsigned __int64)PteAddress;
  if ( v5 )
  {
    ValidPte = MiMakeValidPte((unsigned __int64)PteAddress, v1, 536870913LL, v3);
    v4 = (unsigned __int64)PteAddress;
  }
  else
  {
    ValidPte = ZeroPte;
  }
  v7 = 0;
  LODWORD(CurrentThread) = MiPteInShadowRange(v4);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v7 = 1;
      if ( HIBYTE(word_140C4DE88) )
        goto LABEL_12;
      v10 = (ValidPte & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_12;
      v10 = (ValidPte & 1) == 0;
    }
    if ( !v10 )
    {
      LOBYTE(CurrentThread) = 0;
      ValidPte |= 0x8000000000000000uLL;
    }
  }
LABEL_12:
  *PteAddress = ValidPte;
  if ( v7 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)PteAddress, ValidPte, v9);
  return (char)CurrentThread;
}
