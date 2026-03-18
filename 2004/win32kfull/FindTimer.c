/*
 * XREFs of FindTimer @ 0x1C00C0ABC
 * Callers:
 *     SetMouseTrails @ 0x1C004C4B8 (SetMouseTrails.c)
 *     ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C0057110 (-KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00581CC (xxxCancelMouseMoveTracking.c)
 *     TrackMouseEvent @ 0x1C005B8A0 (TrackMouseEvent.c)
 *     zzzInternalDestroyCaret @ 0x1C005FD5C (zzzInternalDestroyCaret.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C005FED0 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     zzzUpdateCursorImage @ 0x1C0087670 (zzzUpdateCursorImage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxSystemTimerProc @ 0x1C01137F0 (xxxSystemTimerProc.c)
 *     xxxFlashWindow @ 0x1C0113948 (xxxFlashWindow.c)
 *     HideAutorunCursor @ 0x1C01D4A60 (HideAutorunCursor.c)
 *     ?TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01D96D0 (-TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z.c)
 *     ?MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E10D0 (-MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01E15D4 (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01E1838 (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     DecrementCompositedCount @ 0x1C01E816C (DecrementCompositedCount.c)
 *     StopFade @ 0x1C01E84B0 (StopFade.c)
 *     _KillSystemTimer @ 0x1C01EB830 (_KillSystemTimer.c)
 *     ?ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C020CAC0 (-ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     HandleAsyncResizeComplete @ 0x1C0211AD8 (HandleAsyncResizeComplete.c)
 *     xxxDrawDragRectEx @ 0x1C0211F54 (xxxDrawDragRectEx.c)
 *     ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0213BD0 (-SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     EditionKillAccessibilityTimer @ 0x1C0213D50 (EditionKillAccessibilityTimer.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C02366A8 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0236B80 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     xxxMNCloseHierarchy @ 0x1C02386F0 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C023A484 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C023B54C (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 *     xxxEndScroll @ 0x1C02466C4 (xxxEndScroll.c)
 *     UserKillTimer @ 0x1C0249214 (UserKillTimer.c)
 *     xxxTrackPopupMenuEx @ 0x1C024BC18 (xxxTrackPopupMenuEx.c)
 *     MNAnimate @ 0x1C024D454 (MNAnimate.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C0257E44 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C0257FE0 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     FreeTimer @ 0x1C00C0BD0 (FreeTimer.c)
 */

__int64 __fastcall FindTimer(__int64 a1, __int64 a2, unsigned __int8 a3, int a4, _QWORD *a5)
{
  _QWORD *v5; // rbx
  __int64 v8; // rax
  _QWORD **v10; // rsi
  _QWORD *v11; // rdi
  unsigned int v12; // ebp
  _QWORD *i; // r14
  __int64 v14; // rcx
  _QWORD *v15; // rcx

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
      v14 = *((unsigned int *)v11 + 12);
      if ( ((a3 ^ *((_BYTE *)v11 + 48)) & 6) == 0
        && ((v14 & 0x40) != 0
         || PsGetCurrentProcessWin32Process(v14) == *(_QWORD *)(v11[3] + 416LL)
         || !a1 && ((a3 ^ *((_BYTE *)v11 + 48)) & 4) == 0) )
      {
        if ( a4 )
          FreeTimer((struct tagTIMER *)(i - 14));
        v15 = 0LL;
        v12 = 1;
        if ( !a4 )
          v15 = i - 14;
        v11 = v15;
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
