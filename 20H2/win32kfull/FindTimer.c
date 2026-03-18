/*
 * XREFs of FindTimer @ 0x1C000BFEC
 * Callers:
 *     TrackMouseEvent @ 0x1C00178E0 (TrackMouseEvent.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C0018DCC (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     xxxSystemTimerProc @ 0x1C00190C0 (xxxSystemTimerProc.c)
 *     xxxFlashWindow @ 0x1C0019218 (xxxFlashWindow.c)
 *     ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C001B654 (-KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     SetMouseTrails @ 0x1C002AC88 (SetMouseTrails.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00BD088 (xxxCancelMouseMoveTracking.c)
 *     zzzUpdateCursorImage @ 0x1C00CD0D0 (zzzUpdateCursorImage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     zzzInternalDestroyCaret @ 0x1C010A9B0 (zzzInternalDestroyCaret.c)
 *     HideAutorunCursor @ 0x1C01D3C50 (HideAutorunCursor.c)
 *     ?TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01D8A10 (-TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z.c)
 *     ?MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E0410 (-MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01E0914 (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01E0B78 (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     DecrementCompositedCount @ 0x1C01E74AC (DecrementCompositedCount.c)
 *     StopFade @ 0x1C01E77F0 (StopFade.c)
 *     _KillSystemTimer @ 0x1C01EABC0 (_KillSystemTimer.c)
 *     ?ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C020BC40 (-ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     HandleAsyncResizeComplete @ 0x1C0210C58 (HandleAsyncResizeComplete.c)
 *     xxxDrawDragRectEx @ 0x1C02110D4 (xxxDrawDragRectEx.c)
 *     ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0212D50 (-SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     EditionKillAccessibilityTimer @ 0x1C0212ED0 (EditionKillAccessibilityTimer.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0235818 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0235CF0 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     xxxMNCloseHierarchy @ 0x1C0237860 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C02395F8 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C023A6BC (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 *     xxxEndScroll @ 0x1C0245424 (xxxEndScroll.c)
 *     UserKillTimer @ 0x1C0247C64 (UserKillTimer.c)
 *     xxxTrackPopupMenuEx @ 0x1C024A610 (xxxTrackPopupMenuEx.c)
 *     MNAnimate @ 0x1C024BE4C (MNAnimate.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C0256834 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C02569D0 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     FreeTimer @ 0x1C000C100 (FreeTimer.c)
 */

__int64 __fastcall FindTimer(__int64 a1, __int64 a2, unsigned __int8 a3, int a4, _QWORD *a5)
{
  _QWORD *v5; // rbx
  __int64 v8; // rax
  _QWORD **v10; // rsi
  _QWORD *v11; // rdi
  unsigned int v12; // ebp
  _QWORD *i; // r14
  _QWORD *v14; // rcx

  v5 = 0LL;
  v8 = a2;
  v10 = (_QWORD **)((char *)&gTimerHashTable + 16 * (((unsigned __int8)a2 + BYTE1(a1)) & 0x3F));
  v11 = 0LL;
  v12 = 0;
  for ( i = *v10; i != v10; i = (_QWORD *)*i )
  {
    v11 = i - 14;
    if ( *(i - 3) == a1 && v11[12] == v8 )
    {
      if ( ((a3 ^ *((_BYTE *)v11 + 48)) & 6) == 0
        && ((v11[6] & 0x40) != 0
         || PsGetCurrentProcessWin32Process() == *(_QWORD *)(v11[3] + 424LL)
         || !a1 && ((a3 ^ *((_BYTE *)v11 + 48)) & 4) == 0) )
      {
        if ( a4 )
          FreeTimer((struct tagTIMER *)(i - 14));
        v14 = 0LL;
        v12 = 1;
        if ( !a4 )
          v14 = i - 14;
        v11 = v14;
        break;
      }
      v8 = a2;
    }
  }
  if ( a5 )
  {
    if ( v12 == 1 )
      v5 = v11;
    *a5 = v5;
  }
  return v12;
}
