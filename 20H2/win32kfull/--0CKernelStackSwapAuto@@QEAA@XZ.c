/*
 * XREFs of ??0CKernelStackSwapAuto@@QEAA@XZ @ 0x1C015CAA8
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C0054500 (xxxInterSendMsgEx.c)
 * Callees:
 *     ?DisableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C015CAEC (-DisableStackSwap@CKernelStackSwap@@QEAAXXZ.c)
 */

CKernelStackSwapAuto *__fastcall CKernelStackSwapAuto::CKernelStackSwapAuto(CKernelStackSwapAuto *this)
{
  *((_QWORD *)this + 1) = 0LL;
  *(_BYTE *)this = 0;
  CKernelStackSwap::DisableStackSwap(this);
  return this;
}
