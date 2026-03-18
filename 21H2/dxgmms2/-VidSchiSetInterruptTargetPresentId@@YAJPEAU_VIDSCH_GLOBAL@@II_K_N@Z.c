/*
 * XREFs of ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_N@Z @ 0x1C0045F30
 * Callers:
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x1C000F520 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C0011E34 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 *     VidSchiControlVSync @ 0x1C00A3788 (VidSchiControlVSync.c)
 *     VidSchiEnsureHwFlipQueueLog @ 0x1C00F60EC (VidSchiEnsureHwFlipQueueLog.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0014690 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0014924 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z @ 0x1C00151AC (-NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     ?VSyncStateChange@VSYNC_TIME_STATS@@QEAAXW4_DXGK_CRTC_VSYNC_STATE@@0@Z @ 0x1C0045418 (-VSyncStateChange@VSYNC_TIME_STATS@@QEAAXW4_DXGK_CRTC_VSYNC_STATE@@0@Z.c)
 */

__int64 __fastcall VidSchiSetInterruptTargetPresentId(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        bool a5)
{
  unsigned int v5; // ebx
  __int64 v7; // r12
  __int64 v8; // r9
  __int64 v10; // rsi
  __int64 v11; // r15
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  enum _DXGK_CRTC_VSYNC_STATE v14; // edx
  int v15; // r8d
  int v16; // r15d
  __int64 v17; // r9
  __int64 v18; // rcx
  unsigned int v19; // eax
  char v21[4]; // [rsp+40h] [rbp-51h] BYREF
  unsigned int v22; // [rsp+44h] [rbp-4Dh]
  __int64 v23; // [rsp+48h] [rbp-49h]
  _QWORD v24[4]; // [rsp+50h] [rbp-41h] BYREF
  __int16 v25; // [rsp+70h] [rbp-21h]
  struct _VIDSCH_GLOBAL *v26; // [rsp+78h] [rbp-19h] BYREF
  int v27; // [rsp+80h] [rbp-11h]
  unsigned int v28; // [rsp+84h] [rbp-Dh]
  unsigned __int64 v29; // [rsp+88h] [rbp-9h]
  __int64 v30; // [rsp+90h] [rbp-1h]

  v5 = 0;
  v7 = a2;
  v8 = 280LL * a3;
  v10 = *((_QWORD *)a1 + a2 + 400);
  v22 = a3;
  v23 = v8;
  v11 = a3;
  v24[0] = (char *)a1 + 1728;
  v25 = 0;
  if ( a5 )
  {
    AcquireSpinLock::Acquire((Acquire *)v24);
    v8 = v23;
  }
  if ( a4 > *(_QWORD *)(v10 + 8 * v11 + 3008) )
  {
    if ( (unsigned int)DXGADAPTER::NumberOfVSyncWaiter(*((DXGADAPTER **)a1 + 2), v7) || *((_DWORD *)a1 + 5 * v7 + 475) )
      a4 = 0LL;
    else
      a4 = *(_QWORD *)(v10 + 8 * v11 + 3008) + 1LL;
  }
  v12 = *(_QWORD *)(v8 + v10 + 408);
  if ( v12 != a4 )
  {
    v13 = *(_QWORD *)(v10 + 8 * v11 + 3008);
    v14 = v13 < v12 ? DXGK_VSYNC_DISABLE_NO_PHASE : DXGK_VSYNC_ENABLE;
    v15 = v13 >= a4 ? 2 : 0;
    if ( v15 != v14 )
      VSYNC_TIME_STATS::VSyncStateChange((VSYNC_TIME_STATS *)(v10 + 78400), v14, v15);
    v16 = v22;
    v17 = *((unsigned int *)a1 + 8);
    v18 = *((_QWORD *)a1 + 3);
    v30 = 0LL;
    v26 = a1;
    v27 = v7;
    v28 = v22;
    v29 = a4;
    v21[0] = 0;
    DpSynchronizeExecution(v18, VidSchiSetInterruptTargetPresentIdAtISR, &v26, v17, v21);
    v19 = v30;
    if ( (int)v30 < 0 )
    {
      if ( g_BreakOnSetInterruptTargetPresentIdErrors && !KdRefreshDebuggerNotPresent() )
      {
        DbgPrintEx(
          0x65u,
          0,
          "\n"
          "The GPU Scheduler detected driver failing to set interrupt target PresentId.\n"
          "We broke into the debugger to allow a chance for debugging this issue.\n"
          "VidPnSourceId = %d.\n"
          "Plane = %d.\n"
          "InterruptTargetPresentId = 0x%I64x.\n"
          "We broke into the debugger to allow a chance for debugging this issue.\n"
          "To disable debug breaks on these failures, run \"?? dxgmms2!g_BreakOnSetInterruptTargetPresentIdErrors=0\" com"
          "mand,\n"
          "or \"ed 0x%p 0\"\n"
          "\n",
          v7,
          v16,
          a4,
          (const void *)&g_BreakOnSetInterruptTargetPresentIdErrors);
        __debugbreak();
      }
      v19 = 0;
    }
    v5 = v19;
    *(_QWORD *)(v23 + v10 + 408) = a4;
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v24);
  return v5;
}
