/*
 * XREFs of KiInvalidTssFault @ 0x14040A740
 * Callers:
 *     KiInvalidTssFaultShadow @ 0x140A17640 (KiInvalidTssFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FC1F0 (KiSaveDebugRegisterState.c)
 *     KiInvalidTssFault @ 0x14040A740 (KiInvalidTssFault.c)
 *     KiBugCheckDispatch @ 0x14040FCC0 (KiBugCheckDispatch.c)
 */

void __noreturn KiInvalidTssFault()
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v1; // rcx
  unsigned __int8 BpbKernelSpecCtrl; // al
  unsigned __int8 BpbState; // dl
  __int64 v4; // r9
  unsigned __int64 v5; // r8
  _UNKNOWN *retaddr; // [rsp+160h] [rbp+E0h]
  char v7; // [rsp+170h] [rbp+F0h]
  __int16 v8; // [rsp+178h] [rbp+F8h]

  if ( (v7 & 1) != 0 )
  {
    if ( (KiKvaShadow & 1) == 0 )
      __asm { swapgs }
    _mm_lfence();
    CurrentThread = KeGetCurrentThread();
    v1 = *(_QWORD *)&CurrentThread->Process[2].ActiveProcessors.Count;
    __writegsqword(0x270u, v1);
    __writegsbyte(0x851u, KeGetPcr()->Prcb.BpbRetpolineExitSpecCtrl);
    LOBYTE(v1) = KeGetPcr()->Prcb.BpbState;
    __writegsbyte(0x852u, v1);
    BpbKernelSpecCtrl = KeGetPcr()->Prcb.BpbKernelSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
    {
      __writegsbyte(0x27Au, BpbKernelSpecCtrl);
      v1 = 72LL;
      __writemsr(0x48u, BpbKernelSpecCtrl);
    }
    BpbState = KeGetPcr()->Prcb.BpbState;
    if ( (BpbState & 8) != 0 )
    {
      v1 = 73LL;
      __writemsr(0x49u, 1uLL);
      BpbState = KeGetPcr()->Prcb.BpbState;
    }
    if ( (BpbState & 2) != 0 )
      JUMPOUT(0x14040A969LL);
    _mm_lfence();
    __writegsbyte(0x853u, 0);
    if ( (CurrentThread->Header.Reserved1 & 3) != 0 )
      KiSaveDebugRegisterState(v1);
  }
  else
  {
    _mm_lfence();
    if ( (KeGetPcr()->Prcb.BpbState & 1) != 0 )
      __writemsr(0x48u, KeGetPcr()->Prcb.BpbCurrentSpecCtrl);
    else
      _mm_lfence();
  }
  _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  if ( (_BYTE)KeSmapEnabled && (v7 & 1) != 0 )
    __asm { stac }
  if ( (v8 & 0x200) != 0 )
    _enable();
  v4 = (unsigned int)retaddr;
  v5 = __readcr0();
  KiBugCheckDispatch(127LL, 10LL, v5, v4);
}
