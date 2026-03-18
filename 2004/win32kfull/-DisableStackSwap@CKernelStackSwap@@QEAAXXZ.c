/*
 * XREFs of ?DisableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C0159114
 * Callers:
 *     ??0CKernelStackSwapAuto@@QEAA@XZ @ 0x1C01590D0 (--0CKernelStackSwapAuto@@QEAA@XZ.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C020E07C (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020E980 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CKernelStackSwap::DisableStackSwap(CKernelStackSwap *this)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *((_QWORD *)this + 1) = ThreadWin32Thread;
  if ( *(int *)(ThreadWin32Thread + 1500) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3);
  if ( !*(_DWORD *)(*((_QWORD *)this + 1) + 1500LL) )
  {
    *(_DWORD *)(*((_QWORD *)this + 1) + 1224LL) |= 0x80000000;
    *(_BYTE *)this = KeSetKernelStackSwapEnable(0);
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 1) + 1500LL));
}
