/*
 * XREFs of ?DisableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C015CAEC
 * Callers:
 *     ??0CKernelStackSwapAuto@@QEAA@XZ @ 0x1C015CAA8 (--0CKernelStackSwapAuto@@QEAA@XZ.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C020D1FC (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020DB00 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CKernelStackSwap::DisableStackSwap(CKernelStackSwap *this)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *((_QWORD *)this + 1) = ThreadWin32Thread;
  if ( *(int *)(ThreadWin32Thread + 1508) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5, v6);
  if ( !*(_DWORD *)(*((_QWORD *)this + 1) + 1508LL) )
  {
    *(_DWORD *)(*((_QWORD *)this + 1) + 1232LL) |= 0x80000000;
    *(_BYTE *)this = KeSetKernelStackSwapEnable(0);
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 1) + 1508LL));
}
