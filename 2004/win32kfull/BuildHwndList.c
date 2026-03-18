/*
 * XREFs of BuildHwndList @ 0x1C006B520
 * Callers:
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C000E4A8 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C00336A4 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     xxxBroadcastMessageEx @ 0x1C0035B10 (xxxBroadcastMessageEx.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C0036D38 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C003BDB8 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C0051470 (UpdateMonitorForWindowAndChildren.c)
 *     xxxShowOwnedWindows @ 0x1C005B430 (xxxShowOwnedWindows.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C005BCE4 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxDWP_UpdateUIState @ 0x1C00603D8 (xxxDWP_UpdateUIState.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C006A1D8 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C006B23C (xxxInheritWindowMonitor.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C006CE1C (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C006E75C (BuildWindowListWithDpiBoundaryInfo.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     xxxClientShutdown @ 0x1C00C07DC (xxxClientShutdown.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00F2718 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxDesktopRecalc @ 0x1C01057D8 (xxxDesktopRecalc.c)
 *     AssociateInputContextEx @ 0x1C010F810 (AssociateInputContextEx.c)
 *     DestroyInputContext @ 0x1C014A8AC (DestroyInputContext.c)
 *     xxxArrangeIconicWindows @ 0x1C01505E0 (xxxArrangeIconicWindows.c)
 *     xxxInternalEnumWindow @ 0x1C01D2AE4 (xxxInternalEnumWindow.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01D6A70 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     SnapshotWindowRects @ 0x1C01D7EF8 (SnapshotWindowRects.c)
 *     xxxMetricsRecalc @ 0x1C01D8204 (xxxMetricsRecalc.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01E4E3C (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E69BC (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     xxxForceWindowToDpiForTest @ 0x1C01E6BA4 (xxxForceWindowToDpiForTest.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F35D0 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x1C0248E20 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C0022AB4 (IsNonImmersiveBand.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C006C710 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C00AE030 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     _anonymous_namespace_::EligibleWindow @ 0x1C00AEC34 (_anonymous_namespace_--EligibleWindow.c)
 *     ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z @ 0x1C01D29D0 (-InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagBWL *__fastcall BuildHwndList(struct tagWND *a1, char a2, __int64 a3)
{
  struct tagBWL *v3; // r14
  __int64 v7; // rdi
  _QWORD *v8; // rax
  struct tagBWL *result; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdi
  struct tagWND *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx

  v3 = pbwlCache;
  if ( pbwlCache )
  {
    pbwlCache = 0LL;
  }
  else
  {
    v15 = Win32AllocPool(296LL, 1819767637LL);
    v3 = (struct tagBWL *)v15;
    if ( !v15 )
      return 0LL;
    *(_QWORD *)(v15 + 16) = v15 + 280;
  }
  *((_QWORD *)v3 + 3) = a3;
  for ( *((_QWORD *)v3 + 1) = (char *)v3 + 32; a1; a1 = (struct tagWND *)*((_QWORD *)a1 + 11) )
  {
    v7 = *((_QWORD *)v3 + 3);
    if ( (a2 & 0x20) == 0
      || IsNonImmersiveBand((__int64)a1)
      || (a2 & 0x10) != 0 && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x1000000) != 0 )
    {
      if ( (a2 & 0x40) == 0
        || (v16 = *((_QWORD *)a1 + 5), (*(_BYTE *)(v16 + 31) & 0x11) != 0x10)
        || (*(_BYTE *)(v16 + 20) & 0x40) != 0
        || !ShellWindowManagement::BehaviorEnabled(
              *((ShellWindowManagement **)a1 + 3),
              (const struct tagDESKTOP *)0xFF,
              a3)
        || !(unsigned __int8)anonymous_namespace_::EligibleWindow(a1) )
      {
        if ( !v7 || v7 == *((_QWORD *)a1 + 2) )
        {
          **((_QWORD **)v3 + 1) = *(_QWORD *)a1;
          *((_QWORD *)v3 + 1) += 8LL;
          v10 = *((_QWORD *)v3 + 1);
          if ( v10 == *((_QWORD *)v3 + 2) )
          {
            v11 = v10 - (_QWORD)v3;
            v12 = UserReAllocPool(v3, (unsigned int)v11 + 8LL, (unsigned int)v11 + 72LL, 1819767637LL);
            if ( !v12 )
              break;
            v13 = v12 + v11;
            v3 = (struct tagBWL *)v12;
            *(_QWORD *)(v12 + 8) = v13;
            *(_QWORD *)(v12 + 16) = v13 + 64;
          }
        }
      }
    }
    if ( (a2 & 1) != 0 )
    {
      v14 = (struct tagWND *)*((_QWORD *)a1 + 14);
      if ( v14 )
      {
        v3 = InternalBuildHwndList(v3, v14, 3u);
        if ( *((_QWORD *)v3 + 1) >= *((_QWORD *)v3 + 2) )
          break;
      }
    }
    if ( (a2 & 2) == 0 )
      break;
  }
  v8 = (_QWORD *)*((_QWORD *)v3 + 1);
  if ( (unsigned __int64)v8 >= *((_QWORD *)v3 + 2) )
  {
    Win32FreePool(v3);
    return 0LL;
  }
  *v8 = 1LL;
  if ( (a2 & 8) != 0 )
    v3 = InternalRebuildHwndListForIMEClass(v3);
  result = v3;
  *((_QWORD *)v3 + 3) = gptiCurrent;
  *(_QWORD *)v3 = gpbwlList;
  gpbwlList = v3;
  return result;
}
