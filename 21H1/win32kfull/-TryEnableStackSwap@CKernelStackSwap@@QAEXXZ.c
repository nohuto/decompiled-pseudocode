/*
 * XREFs of ?TryEnableStackSwap@CKernelStackSwap@@QAEXXZ @ 0x450C6
 * Callers:
 *     ??1CKernelStackSwapAuto@@QAE@XZ @ 0xF3B14 (--1CKernelStackSwapAuto@@QAE@XZ.c)
 *     ?xxxArrangeWindow@@YGXPAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x173243 (-xxxArrangeWindow@@YGXPAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z @ 0x1739DF (-xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z.c)
 * Callees:
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

void __thiscall CKernelStackSwap::TryEnableStackSwap(CKernelStackSwap *this)
{
  if ( *(int *)(*((_DWORD *)this + 1) + 860) <= 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(*((_DWORD *)this + 1) + 860), 0xFFFFFFFF) )
  {
    KeSetKernelStackSwapEnable(*(_BYTE *)this);
    *(_DWORD *)(*((_DWORD *)this + 1) + 688) &= ~0x80000000;
  }
  *((_DWORD *)this + 1) = 0;
}
