/*
 * XREFs of ?TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C015CB58
 * Callers:
 *     ??1CKernelStackSwapAuto@@QEAA@XZ @ 0x1C015CAD0 (--1CKernelStackSwapAuto@@QEAA@XZ.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C020D1FC (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020DB00 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CKernelStackSwap::TryEnableStackSwap(CKernelStackSwap *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx

  v5 = *(unsigned int *)(*((_QWORD *)this + 1) + 1508LL);
  if ( (int)v5 <= 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, v5, a3, a4);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)this + 1) + 1508LL), 0xFFFFFFFF) == 1 )
  {
    KeSetKernelStackSwapEnable(*(_BYTE *)this);
    *(_DWORD *)(*((_QWORD *)this + 1) + 1232LL) &= ~0x80000000;
  }
  *((_QWORD *)this + 1) = 0LL;
}
