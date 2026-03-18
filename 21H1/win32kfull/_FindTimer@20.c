/*
 * XREFs of _FindTimer@20 @ 0x92EB2
 * Callers:
 *     ?KillTooltipTimer@@YGXPAUtagTOOLTIPWND@@@Z @ 0x12D78 (-KillTooltipTimer@@YGXPAUtagTOOLTIPWND@@@Z.c)
 *     _xxxCancelMouseMoveTracking@16 @ 0x15E12 (_xxxCancelMouseMoveTracking@16.c)
 *     _NtUserKillTimer@8 @ 0x2C66E (_NtUserKillTimer@8.c)
 *     _zzzUpdateCursorImage@0 @ 0x745FA (_zzzUpdateCursorImage@0.c)
 *     _zzzInternalDestroyCaret@0 @ 0x7DAB2 (_zzzInternalDestroyCaret@0.c)
 *     ?RemoveCaretTimer@@YGXPAUtagWND@@PAUtagQ@@@Z @ 0x7DBAC (-RemoveCaretTimer@@YGXPAUtagWND@@PAUtagQ@@@Z.c)
 *     _TrackMouseEvent@4 @ 0x9A9BE (_TrackMouseEvent@4.c)
 *     _xxxSystemTimerProc@16 @ 0xCA358 (_xxxSystemTimerProc@16.c)
 *     _xxxFlashWindow@12 @ 0xCA4EE (_xxxFlashWindow@12.c)
 *     _SetMouseTrails@4 @ 0xD8942 (_SetMouseTrails@4.c)
 *     _HideAutorunCursor@16 @ 0x143392 (_HideAutorunCursor@16.c)
 *     ?TabletButtonHandler@@YGXPAUDEVICEINFO@@@Z @ 0x147169 (-TabletButtonHandler@@YGXPAUDEVICEINFO@@@Z.c)
 *     ?MiPIdleTimerFunc@@YGXPAUtagWND@@IIJ@Z @ 0x14D4A0 (-MiPIdleTimerFunc@@YGXPAUtagWND@@IIJ@Z.c)
 *     ?RefreshMiPIdleNotificationTimer@@YGXPAUtagWND@@@Z @ 0x14D989 (-RefreshMiPIdleNotificationTimer@@YGXPAUtagWND@@@Z.c)
 *     ?StopMiPIdleNotificationTimer@@YGXPAUtagWND@@@Z @ 0x14DB71 (-StopMiPIdleNotificationTimer@@YGXPAUtagWND@@@Z.c)
 *     _DecrementCompositedCount@8 @ 0x1536D1 (_DecrementCompositedCount@8.c)
 *     _StopFade@0 @ 0x1538B2 (_StopFade@0.c)
 *     __KillSystemTimer@8 @ 0x1562F0 (__KillSystemTimer@8.c)
 *     __KillTimer@8 @ 0x15630A (__KillTimer@8.c)
 *     ?ResizeTimerFunc@@YGXPAUtagWND@@IIJ@Z @ 0x172059 (-ResizeTimerFunc@@YGXPAUtagWND@@IIJ@Z.c)
 *     _HandleAsyncResizeComplete@4 @ 0x17649B (_HandleAsyncResizeComplete@4.c)
 *     _xxxDrawDragRectEx@16 @ 0x176775 (_xxxDrawDragRectEx@16.c)
 *     ?SoundSentryTimer@@YGXPAUtagWND@@IIJ@Z @ 0x178139 (-SoundSentryTimer@@YGXPAUtagWND@@IIJ@Z.c)
 *     _EditionKillAccessibilityTimer@8 @ 0x178254 (_EditionKillAccessibilityTimer@8.c)
 *     ?xxxMNDestroyHandler@@YGXPAUtagMENUWND@@@Z @ 0x196B8D (-xxxMNDestroyHandler@@YGXPAUtagMENUWND@@@Z.c)
 *     ?xxxMNDoScroll@@YGHABV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x196E88 (-xxxMNDoScroll@@YGHABV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     _xxxMNCloseHierarchy@8 @ 0x1981C8 (_xxxMNCloseHierarchy@8.c)
 *     _xxxMNOpenHierarchy@8 @ 0x199664 (_xxxMNOpenHierarchy@8.c)
 *     _xxxMNSelectItem@12 @ 0x19A1F9 (_xxxMNSelectItem@12.c)
 *     _xxxEndScroll@8 @ 0x1A391B (_xxxEndScroll@8.c)
 *     _UserKillTimer@4 @ 0x1A5A1D (_UserKillTimer@4.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 *     _MNAnimate@8 @ 0x1A9493 (_MNAnimate@8.c)
 *     ?Deinitialize@InteractiveControlDevice@@QAEXXZ @ 0x1B1A87 (-Deinitialize@InteractiveControlDevice@@QAEXXZ.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QAEXPAVInteractiveControlInput@@I@Z @ 0x1B1BC0 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QAEXPAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     _FreeTimer@4 @ 0x92F66 (_FreeTimer@4.c)
 */

int __fastcall FindTimer(unsigned int a1, int a2, unsigned __int8 a3, int a4, _DWORD *a5)
{
  _DWORD *v5; // edi
  int v6; // ebx
  _DWORD **v7; // edx
  _DWORD *v8; // esi
  _DWORD **v11; // [esp+10h] [ebp-8h]
  unsigned int v12; // [esp+14h] [ebp-4h]

  v12 = a1;
  v5 = 0;
  v6 = 0;
  v7 = (_DWORD **)((char *)&_gTimerHashTable + 8 * (((_BYTE)a2 + (unsigned __int8)(a1 >> 4)) & 0x3F));
  v8 = *v7;
  v11 = v7;
  while ( v8 != v7 )
  {
    v5 = v8 - 16;
    if ( *(v8 - 3) == a1 && v5[14] == a2 )
    {
      if ( ((a3 ^ *((_BYTE *)v5 + 28)) & 6) != 0 )
      {
        a1 = v12;
      }
      else
      {
        if ( (v5[7] & 0x40) != 0
          || PsGetCurrentProcessWin32Process() == *(_DWORD *)(v5[3] + 232)
          || (a1 = v12) == 0 && ((a3 ^ *((_BYTE *)v5 + 28)) & 4) == 0 )
        {
          if ( a4 )
            FreeTimer(v5);
          v6 = 1;
          v5 = a4 == 0 ? v5 : 0;
          break;
        }
        v7 = v11;
      }
    }
    v8 = (_DWORD *)*v8;
  }
  if ( a5 )
    *a5 = v6 == 1 ? v5 : 0;
  return v6;
}
