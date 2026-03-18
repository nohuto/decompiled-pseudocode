/*
 * XREFs of _SetVisible@8 @ 0x1C9DC
 * Callers:
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     ?xxxFW_DestroyAllChildren@@YGXPAUtagWND@@@Z @ 0x716C8 (-xxxFW_DestroyAllChildren@@YGXPAUtagWND@@@Z.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     _xxxCreateWindowStation@40 @ 0x8199E (_xxxCreateWindowStation@40.c)
 *     _NtUserCallHwndParam@12 @ 0xA7482 (_NtUserCallHwndParam@12.c)
 *     _xxxShowOwnedWindows@12 @ 0xB4B0A (_xxxShowOwnedWindows@12.c)
 *     ?xxxShowGhostWindow@@YGXPAUtagWND@@0@Z @ 0xC22F2 (-xxxShowGhostWindow@@YGXPAUtagWND@@0@Z.c)
 *     ?xxxDWP_SetRedraw@@YGXPAUtagWND@@H@Z @ 0xC3D5A (-xxxDWP_SetRedraw@@YGXPAUtagWND@@H@Z.c)
 *     _xxxCleanupMotherDesktopWindow@4 @ 0xD4B02 (_xxxCleanupMotherDesktopWindow@4.c)
 *     ?xxxShowWindowEx@@YGHPAUtagWND@@EK@Z @ 0xF511E (-xxxShowWindowEx@@YGHPAUtagWND@@EK@Z.c)
 *     ?xxxProcessMinimizeHungThreadEvent@@YGXPAUtagWND@@@Z @ 0x141BD2 (-xxxProcessMinimizeHungThreadEvent@@YGXPAUtagWND@@@Z.c)
 *     _zzzActiveCursorTracking@4 @ 0x14ED7B (_zzzActiveCursorTracking@4.c)
 *     ?xxxHideGhostWindow@@YGXPAUtagWND@@0@Z @ 0x16FE15 (-xxxHideGhostWindow@@YGXPAUtagWND@@0@Z.c)
 *     _xxxMinimizeHungWindow@4 @ 0x19E29E (_xxxMinimizeHungWindow@4.c)
 *     ?xxxDWPPrint@@YGHPAUtagWND@@PAUHDC__@@J@Z @ 0x1A17E9 (-xxxDWPPrint@@YGHPAUtagWND@@PAUHDC__@@J@Z.c)
 * Callees:
 *     _PostShellHookMessages@8 @ 0x17142 (_PostShellHookMessages@8.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _zzzSetWindowCompositionCloak@12 @ 0x1C5F8 (_zzzSetWindowCompositionCloak@12.c)
 *     _IncVisWindows@4 @ 0x1CB86 (_IncVisWindows@4.c)
 *     _DecVisWindows@4 @ 0x1CC58 (_DecVisWindows@4.c)
 *     _ComposeWindowIfNeeded@8 @ 0x1CD56 (_ComposeWindowIfNeeded@8.c)
 *     _ClrFTrueVis@4 @ 0x1CDFA (_ClrFTrueVis@4.c)
 *     _CalcWindowFullScreen@4 @ 0x34B60 (_CalcWindowFullScreen@4.c)
 *     _IsTrayWindow@4 @ 0x40204 (_IsTrayWindow@4.c)
 *     _PostIAMShellHookMessageEx@12 @ 0x9ABEE (_PostIAMShellHookMessageEx@12.c)
 *     __IsWindowVisible@4 @ 0xAB3AC (__IsWindowVisible@4.c)
 *     _DecrementCompositedCount@8 @ 0x1536D1 (_DecrementCompositedCount@8.c)
 *     _IncrementCompositedCount@4 @ 0x1537FA (_IncrementCompositedCount@4.c)
 */

int __stdcall SetVisible(_DWORD *a1, unsigned int a2)
{
  int v2; // edi
  int v4; // ecx
  int v5; // eax
  int v6; // [esp+Ch] [ebp-4h]

  v2 = 0;
  v6 = 0;
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 13) & 1) != 0 )
    return 0;
  if ( (a2 & 1) != 0 )
  {
    if ( (*(_BYTE *)(a1[5] + 23) & 0x10) == 0 )
    {
      if ( (a1[49] & 4) != 0 )
      {
        zzzSetWindowCompositionCloak(a1, 0, 2);
        a1[49] &= ~4u;
      }
      v2 = 1;
      SetOrClrWF(1, (int)a1, 0xF10u, 1);
      SetOrClrWF(((a2 >> 4) & 1) == 0, (int)a1, 0x908u, 1);
      IncVisWindows(a1);
      if ( (*(_BYTE *)(a1[5] + 19) & 2) != 0 )
        IncrementCompositedCount(a1);
      if ( (a2 & 4) == 0 && (*(_BYTE *)(a1[5] + 18) & 8) == 0 )
        ComposeWindowIfNeeded(a1, 0);
      if ( (a2 & 8) == 0 )
        CalcWindowFullScreen(a1);
      if ( IsTrayWindow(a1) )
        PostIAMShellHookMessageEx(*(_DWORD *)(_gptiCurrent + 248), 17, *a1);
    }
  }
  else
  {
    if ( (a2 & 2) != 0 )
      ClrFTrueVis(a1);
    if ( (*(_BYTE *)(a1[5] + 23) & 0x10) != 0 )
    {
      v2 = 1;
      if ( IsTrayWindow(a1) && _IsWindowVisible(a1) )
        v6 = 1;
      SetOrClrWF(0, (int)a1, 0xF10u, 1);
      if ( (a2 & 0x10) != 0 )
      {
        SetOrClrWF(1, (int)a1, 0x908u, 1);
      }
      else
      {
        SetOrClrWF(0, (int)a1, 0x908u, 1);
        if ( v6 )
          PostIAMShellHookMessageEx(*(_DWORD *)(_gptiCurrent + 248), 22, *a1);
      }
      if ( (*(_BYTE *)(a1[5] + 19) & 2) != 0 )
        DecrementCompositedCount();
      DecVisWindows(a1);
      if ( (a2 & 8) == 0 )
      {
        v4 = a1[5];
        v5 = *(_DWORD *)(v4 + 144);
        if ( (v5 & 0x8000) != 0 )
        {
          *(_DWORD *)(v4 + 144) = v5 & 0xFFFF7FFF;
          PostShellHookMessages();
        }
      }
    }
  }
  return v2;
}
