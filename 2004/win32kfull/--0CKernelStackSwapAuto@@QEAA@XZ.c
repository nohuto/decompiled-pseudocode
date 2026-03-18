/*
 * XREFs of ??0CKernelStackSwapAuto@@QEAA@XZ @ 0x1C01590D0
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C0098820 (xxxInterSendMsgEx.c)
 * Callees:
 *     ?DisableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C0159114 (-DisableStackSwap@CKernelStackSwap@@QEAAXXZ.c)
 */

CKernelStackSwapAuto *__fastcall CKernelStackSwapAuto::CKernelStackSwapAuto(CKernelStackSwapAuto *this)
{
  *((_QWORD *)this + 1) = 0LL;
  *(_BYTE *)this = 0;
  CKernelStackSwap::DisableStackSwap(this);
  return this;
}
