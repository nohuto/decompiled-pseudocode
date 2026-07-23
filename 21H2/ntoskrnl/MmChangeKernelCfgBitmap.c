/*
 * XREFs of MmChangeKernelCfgBitmap @ 0x1408D7AB8
 * Callers:
 *     PsDispatchIumService @ 0x140582F24 (PsDispatchIumService.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
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
  bool v8; // zf

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
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_12;
      v8 = (ValidPte & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_12;
      v8 = (ValidPte & 1) == 0;
    }
    if ( !v8 )
    {
      LOBYTE(CurrentThread) = 0;
      ValidPte |= 0x8000000000000000uLL;
    }
  }
LABEL_12:
  *PteAddress = ValidPte;
  if ( v6 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)PteAddress, ValidPte);
  return (char)CurrentThread;
}
