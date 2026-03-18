/*
 * XREFs of SetVisible @ 0x1C00925D0
 * Callers:
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003D1C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003FC4 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxCreateWindowStation @ 0x1C000CF8C (xxxCreateWindowStation.c)
 *     xxxShowOwnedWindows @ 0x1C00187F4 (xxxShowOwnedWindows.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C0093EA8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00CA04C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00D204C (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C00F31AC (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C01045E8 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C012D6C0 (xxxCleanupMotherDesktopWindow.c)
 *     ?xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z @ 0x1C01D25F0 (-xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z.c)
 *     zzzActiveCursorTracking @ 0x1C01E2428 (zzzActiveCursorTracking.c)
 *     xxxMinimizeHungWindow @ 0x1C023ED30 (xxxMinimizeHungWindow.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C0013F00 (PostIAMShellHookMessageEx.c)
 *     ClrFTrueVis @ 0x1C001AE1C (ClrFTrueVis.c)
 *     IsTrayWindow @ 0x1C0058D40 (IsTrayWindow.c)
 *     CalcWindowFullScreen @ 0x1C00906E4 (CalcWindowFullScreen.c)
 *     DecVisWindows @ 0x1C009166C (DecVisWindows.c)
 *     ComposeWindowIfNeeded @ 0x1C00918CC (ComposeWindowIfNeeded.c)
 *     IncVisWindows @ 0x1C00927E4 (IncVisWindows.c)
 *     PostShellHookMessages @ 0x1C00BF140 (PostShellHookMessages.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00C91F8 (zzzSetWindowCompositionCloak.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     _IsWindowVisible @ 0x1C011D574 (_IsWindowVisible.c)
 *     DecrementCompositedCount @ 0x1C01E74AC (DecrementCompositedCount.c)
 *     IncrementCompositedCount @ 0x1C01E76E0 (IncrementCompositedCount.c)
 */

__int64 __fastcall SetVisible(struct tagWND *a1, unsigned int a2)
{
  unsigned int v4; // edi
  int v6; // ebp
  __int64 v7; // rcx
  int v8; // eax

  v4 = 0;
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
    return 0LL;
  if ( (a2 & 1) == 0 )
  {
    if ( (a2 & 2) != 0 )
      ClrFTrueVis((__int64)a1);
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
        PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x16u, *(_QWORD *)a1);
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
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x11u, *(_QWORD *)a1);
    return 1;
  }
  return v4;
}
