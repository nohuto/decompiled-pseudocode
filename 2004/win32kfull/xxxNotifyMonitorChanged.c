/*
 * XREFs of xxxNotifyMonitorChanged @ 0x1C006B018
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x1C00252C0 (NtUserUpdateLayeredWindow.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C002AA5C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00510B4 (xxxEnableChildWindowDpiMessageX.c)
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C005B2A4 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     xxxInheritWindowMonitor @ 0x1C006B23C (xxxInheritWindowMonitor.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006F48C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxForceWindowToDpiForTest @ 0x1C01E6BA4 (xxxForceWindowToDpiForTest.c)
 * Callees:
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C00311A4 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     PostShellHookMessages @ 0x1C0033A70 (PostShellHookMessages.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C003BDB8 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     PostIAMShellHookMessageEx @ 0x1C0058320 (PostIAMShellHookMessageEx.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C006A1D8 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     FreeHwndList @ 0x1C006CD90 (FreeHwndList.c)
 *     _IsTopLevelWindow @ 0x1C006EA50 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0099E30 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     IsTrayWindow @ 0x1C009D060 (IsTrayWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01E4E3C (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 */

void __fastcall xxxNotifyMonitorChanged(struct tagWND *a1, struct tagRECT *a2, struct tagBWL *a3, unsigned __int16 a4)
{
  BOOL v8; // ebp
  __int64 DesktopWindow; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // r9
  __int16 ScaledLogPixels; // bx

  v8 = 0;
  if ( *((_QWORD *)a1 + 13) )
  {
    DesktopWindow = GetDesktopWindow(a1);
    v8 = v10 == DesktopWindow;
  }
  v11 = *((_QWORD *)a1 + 5);
  if ( (*(_DWORD *)(v11 + 288) & 0xF) == 2 && v8 )
  {
    SetDeferredDpiStateForWindowAndChildren(a1, 0, 0);
    v11 = *((_QWORD *)a1 + 5);
  }
  if ( (*(_DWORD *)(v11 + 288) & 0xF) != 2 || (*(_DWORD *)(*((_QWORD *)a1 + 2) + 640LL) & 0x2000000) != 0 )
  {
    if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) + 8LL) + 64LL) & 1) != 0 )
        {
          v12 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
          if ( (v12 & 0xF) == 0 && (v12 & 0x40000000) != 0 )
          {
            if ( (unsigned int)IsTopLevelWindow(a1) )
            {
              if ( !a4
                || (ScaledLogPixels = GreGetScaledLogPixels(*(unsigned __int16 *)(v13 + 284)),
                    (unsigned __int16)GreGetScaledLogPixels(a4) != ScaledLogPixels) )
              {
                xxxSendGDIScaledDpiChangedMsgs(a1, a3);
              }
            }
          }
        }
      }
    }
  }
  else
  {
    xxxSendDpiChangedMsgs(a1, a2, a3, a4);
  }
  if ( v8 )
  {
    TraceLoggingProcessMonitorInfoUpdateHelper(a1, 1);
    if ( *((_QWORD *)a1 + 15) )
    {
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x18u, *(_QWORD *)a1);
    }
    else if ( (unsigned int)IsTrayWindow(a1) )
    {
      PostShellHookMessages(0x10uLL, *(_QWORD *)a1);
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x14u, *(_QWORD *)a1);
      xxxCallHook(16, *(_QWORD *)a1, 0LL, 10);
    }
  }
  if ( a3 )
    FreeHwndList(a3);
}
