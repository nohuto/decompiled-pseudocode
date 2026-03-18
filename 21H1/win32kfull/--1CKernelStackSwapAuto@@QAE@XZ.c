/*
 * XREFs of ??1CKernelStackSwapAuto@@QAE@XZ @ 0xF3B14
 * Callers:
 *     _xxxInterSendMsgEx@36 @ 0x43A56 (_xxxInterSendMsgEx@36.c)
 * Callees:
 *     ?TryEnableStackSwap@CKernelStackSwap@@QAEXXZ @ 0x450C6 (-TryEnableStackSwap@CKernelStackSwap@@QAEXXZ.c)
 */

void __thiscall CKernelStackSwapAuto::~CKernelStackSwapAuto(CKernelStackSwapAuto *this)
{
  if ( *((_DWORD *)this + 1) )
    CKernelStackSwap::TryEnableStackSwap(this);
}
