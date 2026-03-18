/*
 * XREFs of ??0CKernelStackSwapAuto@@QAE@XZ @ 0xF3AFF
 * Callers:
 *     _xxxInterSendMsgEx@36 @ 0x43A56 (_xxxInterSendMsgEx@36.c)
 * Callees:
 *     ?DisableStackSwap@CKernelStackSwap@@QAEXXZ @ 0x4505C (-DisableStackSwap@CKernelStackSwap@@QAEXXZ.c)
 */

CKernelStackSwapAuto *__thiscall CKernelStackSwapAuto::CKernelStackSwapAuto(CKernelStackSwapAuto *this)
{
  *((_DWORD *)this + 1) = 0;
  *(_BYTE *)this = 0;
  CKernelStackSwap::DisableStackSwap(this);
  return this;
}
