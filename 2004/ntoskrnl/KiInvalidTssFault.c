/*
 * XREFs of KiInvalidTssFault @ 0x1404041C0
 * Callers:
 *     KiInvalidTssFaultShadow @ 0x140A11640 (KiInvalidTssFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403F7620 (KiSaveDebugRegisterState.c)
 *     KiInvalidTssFault @ 0x1404041C0 (KiInvalidTssFault.c)
 *     KiBugCheckDispatch @ 0x140409000 (KiBugCheckDispatch.c)
 */

void __fastcall __noreturn KiInvalidTssFault(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v3; // rcx
  unsigned __int8 BpbKernelSpecCtrl; // al
  __int64 v5; // r9
  unsigned __int64 v6; // r8
  _UNKNOWN *retaddr; // [rsp+160h] [rbp+E0h]
  char v8; // [rsp+170h] [rbp+F0h]
  __int16 v9; // [rsp+178h] [rbp+F8h]

  if ( (v8 & 1) != 0 )
  {
    if ( (KiKvaShadow & 1) == 0 )
      __asm { swapgs }
    _mm_lfence();
    CurrentThread = KeGetCurrentThread();
    v3 = *(_QWORD *)&CurrentThread->Process[2].ActiveProcessors.Count;
    __writegsqword(0x270u, v3);
    __writegsbyte(0x851u, KeGetPcr()->Prcb.BpbRetpolineExitSpecCtrl);
    LOBYTE(v3) = KeGetPcr()->Prcb.BpbState;
    __writegsbyte(0x852u, v3);
    BpbKernelSpecCtrl = KeGetPcr()->Prcb.BpbKernelSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
    {
      __writegsbyte(0x27Au, BpbKernelSpecCtrl);
      v3 = 72LL;
      HIDWORD(a2) = 0;
      __writemsr(0x48u, BpbKernelSpecCtrl);
    }
    LODWORD(a2) = KeGetPcr()->Prcb.BpbState;
    if ( (a2 & 8) != 0 )
    {
      a2 = 0LL;
      v3 = 73LL;
      __writemsr(0x49u, 1uLL);
    }
    else
    {
      if ( (a2 & 2) != 0 && (KeGetPcr()->Prcb.BpbFeatures & 4) == 0 )
        JUMPOUT(0x1404043F4LL);
      _mm_lfence();
    }
    __writegsbyte(0x853u, 0);
    if ( (CurrentThread->Header.Reserved1 & 3) != 0 )
      KiSaveDebugRegisterState(v3, a2);
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
  if ( (_BYTE)KeSmapEnabled && (v8 & 1) != 0 )
    __asm { stac }
  if ( (v9 & 0x200) != 0 )
    _enable();
  v5 = (unsigned int)retaddr;
  v6 = __readcr0();
  KiBugCheckDispatch(127LL, 10LL, v6, v5);
}
