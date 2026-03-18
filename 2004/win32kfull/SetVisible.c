/*
 * XREFs of SetVisible @ 0x1C0020760
 * Callers:
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003E7C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0004124 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxShowOwnedWindows @ 0x1C005B430 (xxxShowOwnedWindows.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C005BCE4 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068320 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C008CD2C (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C00AE7F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C00BA988 (xxxCleanupMotherDesktopWindow.c)
 *     xxxCreateWindowStation @ 0x1C00C1C7C (xxxCreateWindowStation.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C00F76E0 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     ?xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z @ 0x1C01D3400 (-xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z.c)
 *     zzzActiveCursorTracking @ 0x1C01E30E8 (zzzActiveCursorTracking.c)
 *     xxxMinimizeHungWindow @ 0x1C023FFD0 (xxxMinimizeHungWindow.c)
 * Callees:
 *     DecVisWindows @ 0x1C00205C0 (DecVisWindows.c)
 *     IncVisWindows @ 0x1C0020974 (IncVisWindows.c)
 *     ComposeWindowIfNeeded @ 0x1C0020B9C (ComposeWindowIfNeeded.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0022188 (zzzSetWindowCompositionCloak.c)
 *     CalcWindowFullScreen @ 0x1C00239C8 (CalcWindowFullScreen.c)
 *     PostShellHookMessages @ 0x1C0033A70 (PostShellHookMessages.c)
 *     PostIAMShellHookMessageEx @ 0x1C0058320 (PostIAMShellHookMessageEx.c)
 *     IsTrayWindow @ 0x1C009D060 (IsTrayWindow.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     ClrFTrueVis @ 0x1C00F0060 (ClrFTrueVis.c)
 *     _IsWindowVisible @ 0x1C011C5B4 (_IsWindowVisible.c)
 *     DecrementCompositedCount @ 0x1C01E816C (DecrementCompositedCount.c)
 *     IncrementCompositedCount @ 0x1C01E83A0 (IncrementCompositedCount.c)
 */

__int64 __fastcall SetVisible(struct tagWND *a1, unsigned int a2)
{
  unsigned int v4; // edi
  int v6; // ebp
  __int64 v7; // rcx
  int v8; // eax

  v4 = 0;
  if ( (*(_BYTE *)(_HMPheFromObject() + 25) & 1) != 0 )
    return 0LL;
  if ( (a2 & 1) == 0 )
  {
    if ( (a2 & 2) != 0 )
      ClrFTrueVis(a1);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) == 0 )
      return v4;
    if ( !(unsigned int)IsTrayWindow(a1) || (v6 = 1, !(unsigned int)IsWindowVisible(a1)) )
      v6 = 0;
    SetOrClrWF(0LL, a1, 3856LL, 1LL);
    if ( (a2 & 0x10) != 0 )
    {
      SetOrClrWF(1LL, a1, 2312LL, 1LL);
    }
    else
    {
      SetOrClrWF(0LL, a1, 2312LL, 1LL);
      if ( v6 )
        PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 22LL, *(_QWORD *)a1);
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 2) != 0 )
      DecrementCompositedCount();
    DecVisWindows((__int64)a1);
    if ( (a2 & 8) == 0 )
    {
      v7 = *((_QWORD *)a1 + 5);
      v8 = *(_DWORD *)(v7 + 232);
      if ( (v8 & 0x8000) != 0 )
      {
        *(_DWORD *)(v7 + 232) = v8 & 0xFFFF7FFF;
        PostShellHookMessages(54LL, *(_QWORD *)a1);
      }
    }
    return 1;
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) == 0 )
  {
    if ( (*((_DWORD *)a1 + 81) & 4) != 0 )
    {
      zzzSetWindowCompositionCloak(a1, 0LL, 2LL);
      *((_DWORD *)a1 + 81) &= ~4u;
    }
    SetOrClrWF(1LL, a1, 3856LL, 1LL);
    SetOrClrWF(((a2 >> 4) & 1) == 0, a1, 2312LL, 1LL);
    IncVisWindows(a1);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 2) != 0 )
      IncrementCompositedCount(a1);
    if ( (a2 & 4) == 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 )
      ComposeWindowIfNeeded(a1);
    if ( (a2 & 8) == 0 )
      CalcWindowFullScreen(a1);
    if ( (unsigned int)IsTrayWindow(a1) )
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 17LL, *(_QWORD *)a1);
    return 1;
  }
  return v4;
}
