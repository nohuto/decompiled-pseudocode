/*
 * XREFs of PostIAMShellHookMessageEx @ 0x1C0058320
 * Callers:
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0004124 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     SetVisible @ 0x1C0020760 (SetVisible.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002C0BC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C00328D0 (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C0037E18 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     HandleDisplayChangeForInactiveDesktops @ 0x1C0056F80 (HandleDisplayChangeForInactiveDesktops.c)
 *     xxxMinMaximizeEx @ 0x1C005A998 (xxxMinMaximizeEx.c)
 *     xxxNotifyMonitorChanged @ 0x1C006B018 (xxxNotifyMonitorChanged.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006DEE0 (xxxEndDeferWindowPosEx.c)
 *     ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C006F74C (-PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     xxxFreeWindow @ 0x1C008B600 (xxxFreeWindow.c)
 *     xxxSetWindowStyle @ 0x1C009C710 (xxxSetWindowStyle.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     NtUserLayoutCompleted @ 0x1C0112FE0 (NtUserLayoutCompleted.c)
 *     SetWindowCompositionFreezeSWR @ 0x1C011AF44 (SetWindowCompositionFreezeSWR.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C011B4E4 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x1C012B600 (-PostUnownedNotification@@YAXPEAUtagWND@@@Z.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01EB168 (-RequestModernAppClose@@YAHXZ.c)
 *     _lambda_3029ce1d0d0873684df583e6396a0ba0_::operator() @ 0x1C02408DC (_lambda_3029ce1d0d0873684df583e6396a0ba0_--operator().c)
 * Callees:
 *     _PostMessage @ 0x1C0058410 (_PostMessage.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00675A4 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

void __fastcall PostIAMShellHookMessageEx(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // rbx
  struct tagWND *CompositeAppFrameWindowOrSelf; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx

  if ( a1 )
  {
    v3 = a3;
    v4 = a2;
    if ( (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
    {
      if ( *(_QWORD *)(a1 + 288) )
      {
        if ( a2 != 35 )
        {
          CompositeAppFrameWindowOrSelf = (struct tagWND *)_HMObjectFromHandle(a3);
          v7 = *((_QWORD *)CompositeAppFrameWindowOrSelf + 5);
          if ( (_DWORD)v4 == 18 )
          {
            *(_BYTE *)(v7 + 234) &= ~2u;
          }
          else
          {
            *(_BYTE *)(v7 + 234) |= 2u;
            if ( (((_DWORD)v4 - 19) & 0xFFFFFFFB) == 0
              && (!gpqForeground || *(struct tagWND **)(gpqForeground + 120LL) != CompositeAppFrameWindowOrSelf) )
            {
              return;
            }
            if ( (_DWORD)v4 == 19 )
              CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(CompositeAppFrameWindowOrSelf);
          }
          if ( CompositeAppFrameWindowOrSelf )
            v3 = *(_QWORD *)CompositeAppFrameWindowOrSelf;
          else
            v3 = 0LL;
        }
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 192LL);
        if ( v8 )
          PostMessage(v8, *(unsigned int *)(gpsi + 928LL), v4, v3);
      }
    }
  }
}
