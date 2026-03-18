/*
 * XREFs of xxxNotifyMonitorChanged @ 0x1C004A38C
 * Callers:
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C0018668 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C003A14C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0047E74 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C004A0B0 (xxxInheritWindowMonitor.c)
 *     NtUserUpdateLayeredWindow @ 0x1C00C7E50 (NtUserUpdateLayeredWindow.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00F9644 (xxxEnableChildWindowDpiMessageX.c)
 *     xxxForceWindowToDpiForTest @ 0x1C01E5EE4 (xxxForceWindowToDpiForTest.c)
 * Callees:
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C00133EC (_SetDeferredDpiStateForWindowAndChildren.c)
 *     PostIAMShellHookMessageEx @ 0x1C0013F00 (PostIAMShellHookMessageEx.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 *     FreeHwndList @ 0x1C0049620 (FreeHwndList.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0055B10 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     IsTrayWindow @ 0x1C0058D40 (IsTrayWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     PostShellHookMessages @ 0x1C00BF140 (PostShellHookMessages.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C00BF418 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C0101ED0 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01E417C (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 */

void __fastcall xxxNotifyMonitorChanged(struct tagWND *a1, struct tagRECT *a2, struct tagBWL *a3, unsigned __int16 a4)
{
  BOOL v8; // ebp
  __int64 DesktopWindow; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int16 ScaledLogPixels; // bx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9

  v8 = 0;
  if ( *((_QWORD *)a1 + 13) )
  {
    DesktopWindow = GetDesktopWindow((__int64)a1);
    v8 = v10 == DesktopWindow;
  }
  v11 = *((_QWORD *)a1 + 5);
  if ( (*(_DWORD *)(v11 + 288) & 0xF) == 2 && v8 )
  {
    SetDeferredDpiStateForWindowAndChildren(a1, 0, 0);
    v11 = *((_QWORD *)a1 + 5);
  }
  if ( (*(_DWORD *)(v11 + 288) & 0xF) != 2 || (*(_DWORD *)(*((_QWORD *)a1 + 2) + 648LL) & 0x2000000) != 0 )
  {
    if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 8LL) + 64LL) & 1) != 0 )
        {
          v12 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
          if ( (v12 & 0xF) == 0 && (v12 & 0x40000000) != 0 )
          {
            if ( (unsigned int)IsTopLevelWindow((__int64)a1) )
            {
              if ( !a4
                || (ScaledLogPixels = GreGetScaledLogPixels(*(unsigned __int16 *)(v15 + 284), v13, v14, v15),
                    (unsigned __int16)GreGetScaledLogPixels(a4, v17, v18, v19) != ScaledLogPixels) )
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
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x18u, *(_QWORD *)a1);
    }
    else if ( (unsigned int)IsTrayWindow(a1) )
    {
      PostShellHookMessages(16LL, *(_QWORD *)a1);
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x14u, *(_QWORD *)a1);
      xxxCallHook(16, *(_QWORD *)a1, 0LL, 10);
    }
  }
  if ( a3 )
    FreeHwndList(a3);
}
