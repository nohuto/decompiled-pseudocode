/*
 * XREFs of _FreeHwndList@4 @ 0x2D2D0
 * Callers:
 *     __SetDeferredDpiStateForWindowAndChildren@12 @ 0x25A48 (__SetDeferredDpiStateForWindowAndChildren@12.c)
 *     ?xxxSendDpiChangedMsgs@@YGHPAUtagWND@@PAUtagRECT@@PAUtagBWL@@G@Z @ 0x26CC0 (-xxxSendDpiChangedMsgs@@YGHPAUtagWND@@PAUtagRECT@@PAUtagBWL@@G@Z.c)
 *     _xxxNotifyMonitorChanged@16 @ 0x26F18 (_xxxNotifyMonitorChanged@16.c)
 *     _NtUserBuildHwndList@32 @ 0x2A632 (_NtUserBuildHwndList@32.c)
 *     _UpdateMonitorForWindowAndChildren@16 @ 0x2A86E (_UpdateMonitorForWindowAndChildren@16.c)
 *     _BuildWindowListWithDpiBoundaryInfo@16 @ 0x2AC94 (_BuildWindowListWithDpiBoundaryInfo@16.c)
 *     ?xxxImeWindowPosChanged@@YGXPAUtagSMWP@@@Z @ 0x2C440 (-xxxImeWindowPosChanged@@YGXPAUtagSMWP@@@Z.c)
 *     __FindWindowEx@20 @ 0x2D034 (__FindWindowEx@20.c)
 *     ?xxxSendActivateAppMessage@@YGXABUtagAAS@@@Z @ 0x3C394 (-xxxSendActivateAppMessage@@YGXABUtagAAS@@@Z.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _xxxBroadcastMessageEx@32 @ 0x48942 (_xxxBroadcastMessageEx@32.c)
 *     ?xxxSendBSMtoDesktop@@YGHPAUtagWND@@IIJPAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x7F518 (-xxxSendBSMtoDesktop@@YGHPAUtagWND@@IIJPAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     ?xxxCheckImeShowStatus@@YGHPAUtagWND@@PAUtagTHREADINFO@@@Z @ 0x92932 (-xxxCheckImeShowStatus@@YGHPAUtagWND@@PAUtagTHREADINFO@@@Z.c)
 *     _xxxDWP_UpdateUIState@12 @ 0xA50F8 (_xxxDWP_UpdateUIState@12.c)
 *     _AssociateInputContextEx@12 @ 0xAE640 (_AssociateInputContextEx@12.c)
 *     _xxxDesktopRecalc@8 @ 0xB04BC (_xxxDesktopRecalc@8.c)
 *     _xxxShowOwnedWindows@12 @ 0xB4B0A (_xxxShowOwnedWindows@12.c)
 *     _xxxClientShutdown@8 @ 0xD0CA6 (_xxxClientShutdown@8.c)
 *     ?DwmNotifyChildrenLinkUnlink@@YGHPBUtagDESKTOP@@H@Z @ 0xE1784 (-DwmNotifyChildrenLinkUnlink@@YGHPBUtagDESKTOP@@H@Z.c)
 *     ?ChangeWindowTreeProtection@@YGHPAUtagWND@@K@Z @ 0xF55F4 (-ChangeWindowTreeProtection@@YGHPAUtagWND@@K@Z.c)
 *     _xxxInternalEnumWindow@16 @ 0x141598 (_xxxInternalEnumWindow@16.c)
 *     ?FixupOverlayWindowAttributes@@YGHPAUtagWND@@@Z @ 0x144E9E (-FixupOverlayWindowAttributes@@YGHPAUtagWND@@@Z.c)
 *     _SnapshotWindowRects@8 @ 0x145D44 (_SnapshotWindowRects@8.c)
 *     _xxxMetricsRecalc@28 @ 0x145FE4 (_xxxMetricsRecalc@28.c)
 *     _DestroyInputContext@4 @ 0x14F099 (_DestroyInputContext@4.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YGHPAUtagWND@@PAUtagBWL@@@Z @ 0x150504 (-xxxSendGDIScaledDpiChangedMsgs@@YGHPAUtagWND@@PAUtagBWL@@@Z.c)
 *     _xxxForceUpdateProcessDpiAwarenessContext@8 @ 0x1523FE (_xxxForceUpdateProcessDpiAwarenessContext@8.c)
 *     ?InitSwitchWndInfo@@YGPAUtagWND@@PAPAUtagSwitchWndInfo@@PAU1@H@Z @ 0x15C30E (-InitSwitchWndInfo@@YGPAUtagWND@@PAPAUtagSwitchWndInfo@@PAU1@H@Z.c)
 *     ?SwitchWndCleanup@@YGXPAPAUtagSwitchWndInfo@@@Z @ 0x15C6A6 (-SwitchWndCleanup@@YGXPAPAUtagSwitchWndInfo@@@Z.c)
 *     ?xxxDWPPrint@@YGHPAUtagWND@@PAUHDC__@@J@Z @ 0x1A17E9 (-xxxDWPPrint@@YGHPAUtagWND@@PAUHDC__@@J@Z.c)
 *     _xxxArrangeIconicWindows@4 @ 0x1AEB2A (_xxxArrangeIconicWindows@4.c)
 * Callees:
 *     <none>
 */

struct tagBWL *__stdcall FreeHwndList(struct tagBWL *a1)
{
  struct tagBWL *v1; // esi
  struct tagBWL *v2; // ecx
  struct tagBWL *result; // eax
  struct tagBWL *v4; // esi

  v1 = (struct tagBWL *)_gpbwlList;
  v2 = (struct tagBWL *)_gpbwlList;
  if ( _gpbwlList )
  {
    while ( v2 != a1 )
    {
      result = *(struct tagBWL **)v2;
      v1 = v2;
      v2 = result;
      if ( !result )
        return result;
    }
    result = *(struct tagBWL **)a1;
    *(_DWORD *)v1 = *(_DWORD *)a1;
    v4 = pbwlCache;
    if ( pbwlCache )
    {
      if ( (int)((*((_DWORD *)a1 + 2) - (_DWORD)a1 - 16) & 0xFFFFFFFC) <= (int)((*((_DWORD *)pbwlCache + 2)
                                                                               - (_DWORD)pbwlCache
                                                                               - 16) & 0xFFFFFFFC) )
      {
        return (struct tagBWL *)Win32FreePool(a1);
      }
      else
      {
        pbwlCache = a1;
        return (struct tagBWL *)Win32FreePool(v4);
      }
    }
    else
    {
      pbwlCache = a1;
    }
  }
  return result;
}
