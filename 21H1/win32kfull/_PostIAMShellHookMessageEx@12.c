/*
 * XREFs of _PostIAMShellHookMessageEx@12 @ 0x9ABEE
 * Callers:
 *     ?xxxDeactivate@@YGXPAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x17292 (-xxxDeactivate@@YGXPAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x19168 (-xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroun.c)
 *     ?xxxUpdateTray@@YGXPAUtagWND@@@Z @ 0x19ED6 (-xxxUpdateTray@@YGXPAUtagWND@@@Z.c)
 *     _SetVisible@8 @ 0x1C9DC (_SetVisible@8.c)
 *     _xxxNotifyMonitorChanged@16 @ 0x26F18 (_xxxNotifyMonitorChanged@16.c)
 *     _xxxEndDeferWindowPosEx@8 @ 0x34486 (_xxxEndDeferWindowPosEx@8.c)
 *     ?PostIAMPosChangedNotification@@YGXPAUtagCVR@@PAUtagWND@@@Z @ 0x3871C (-PostIAMPosChangedNotification@@YGXPAUtagCVR@@PAUtagWND@@@Z.c)
 *     _xxxSetWindowStyle@12 @ 0x3FA70 (_xxxSetWindowStyle@12.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _HandleDisplayChangeForInactiveDesktops@8 @ 0x9ABB2 (_HandleDisplayChangeForInactiveDesktops@8.c)
 *     _NtUserLayoutCompleted@4 @ 0xA8C00 (_NtUserLayoutCompleted@4.c)
 *     _SetWindowCompositionFreezeSWR@8 @ 0xAC91A (_SetWindowCompositionFreezeSWR@8.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     ?PostUnownedNotification@@YGXPAUtagWND@@@Z @ 0xC545E (-PostUnownedNotification@@YGXPAUtagWND@@@Z.c)
 *     _lambda_8f4b63029e330354df5e58e7f72e89f8_::operator() @ 0xF5008 (_lambda_8f4b63029e330354df5e58e7f72e89f8_--operator().c)
 *     _PostIAMShellHookMessage@8 @ 0x145C2C (_PostIAMShellHookMessage@8.c)
 *     ?RequestModernAppClose@@YGHXZ @ 0x155E98 (-RequestModernAppClose@@YGHXZ.c)
 *     ?xxxHideGhostWindow@@YGXPAUtagWND@@0@Z @ 0x16FE15 (-xxxHideGhostWindow@@YGXPAUtagWND@@0@Z.c)
 *     ?xxxHandleOwnerSwitch@@YGXPAUtagWND@@00@Z @ 0x1A5A84 (-xxxHandleOwnerSwitch@@YGXPAUtagWND@@00@Z.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0x26218 (-GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 */

void __stdcall PostIAMShellHookMessageEx(int a1, int a2, int a3)
{
  int v3; // edi
  int *v4; // esi
  int v5; // ecx
  struct tagWND *TopLevelHostForComponent; // eax
  int TopLevelWindow; // eax

  if ( a1 )
  {
    if ( (*(_BYTE *)(_gpsi + 1720) & 8) != 0 )
    {
      v3 = 0;
      if ( *(_DWORD *)(a1 + 176) )
      {
        if ( a2 == 35 )
        {
          v3 = a3;
LABEL_10:
          v5 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 96);
          if ( v5 )
            _PostMessage(v5, *(_DWORD *)(_gpsi + 528), a2, v3);
          return;
        }
        v4 = (int *)_HMObjectFromHandle(a3);
        SetOrClrWF(a2 != 18, (int)v4, 0x8A02u, 0);
        if ( a2 != 19 && a2 != 23 || _gpqForeground && *(int **)(_gpqForeground + 64) == v4 )
        {
          if ( a2 == 19 )
          {
            TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent();
            TopLevelWindow = _GetTopLevelWindow((int)TopLevelHostForComponent);
            if ( TopLevelWindow )
              v4 = (int *)TopLevelWindow;
          }
          if ( v4 )
            v3 = *v4;
          goto LABEL_10;
        }
      }
    }
  }
}
