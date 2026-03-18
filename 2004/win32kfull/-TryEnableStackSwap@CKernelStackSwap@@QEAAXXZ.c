/*
 * XREFs of ?TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C0159180
 * Callers:
 *     ??1CKernelStackSwapAuto@@QEAA@XZ @ 0x1C01590F8 (--1CKernelStackSwapAuto@@QEAA@XZ.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C020E07C (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020E980 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CKernelStackSwap::TryEnableStackSwap(CKernelStackSwap *this)
{
  __int64 v2; // rdx

  v2 = *(unsigned int *)(*((_QWORD *)this + 1) + 1500LL);
  if ( (int)v2 <= 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, v2);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)this + 1) + 1500LL), 0xFFFFFFFF) == 1 )
  {
    KeSetKernelStackSwapEnable(*(_BYTE *)this);
    *(_DWORD *)(*((_QWORD *)this + 1) + 1224LL) &= ~0x80000000;
  }
  *((_QWORD *)this + 1) = 0LL;
}
