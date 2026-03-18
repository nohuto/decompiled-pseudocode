/*
 * XREFs of ?DisableStackSwap@CKernelStackSwap@@QAEXXZ @ 0x4505C
 * Callers:
 *     ??0CKernelStackSwapAuto@@QAE@XZ @ 0xF3AFF (--0CKernelStackSwapAuto@@QAE@XZ.c)
 *     ?xxxArrangeWindow@@YGXPAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x173243 (-xxxArrangeWindow@@YGXPAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z @ 0x1739DF (-xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z.c)
 * Callees:
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

void __thiscall CKernelStackSwap::DisableStackSwap(CKernelStackSwap *this)
{
  PKTHREAD CurrentThread; // ebx
  int v3; // edi
  int *ThreadWin32Thread; // eax

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  *((_DWORD *)this + 1) = v3;
  if ( *(int *)(v3 + 860) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( !*(_DWORD *)(*((_DWORD *)this + 1) + 860) )
  {
    *(_DWORD *)(*((_DWORD *)this + 1) + 688) |= 0x80000000;
    *(_BYTE *)this = KeSetKernelStackSwapEnable(0);
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_DWORD *)this + 1) + 860));
}
