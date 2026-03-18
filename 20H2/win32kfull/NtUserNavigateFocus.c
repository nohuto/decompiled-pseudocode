/*
 * XREFs of NtUserNavigateFocus @ 0x1C00077C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z @ 0x1C0005074 (-IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C000796C (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00142B0 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     xxxSendNotifyMessage @ 0x1C00399D0 (xxxSendNotifyMessage.c)
 *     _GetTopLevelWindow @ 0x1C0046FE0 (_GetTopLevelWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C0128F9C (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
_QWORD *__fastcall NtUserNavigateFocus(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *TopLevelWindow; // rsi
  int v9; // eax
  __int64 ThreadWin32Thread; // rax
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-28h]
  _QWORD v13[4]; // [rsp+48h] [rbp-20h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v2 = ValidateHwnd(a1);
  v3 = v2;
  if ( !v2 || (((*(_WORD *)(*(_QWORD *)(v2 + 40) + 42LL) & 0x2FFF) - 669) & 0xFFFFFFFD) == 0 )
  {
    v4 = 0LL;
    goto LABEL_15;
  }
  *(_QWORD *)&v11 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v11;
  *((_QWORD *)&v11 + 1) = v2;
  HMLockObject(v2);
  v4 = 0LL;
  if ( gpqForeground && !(unsigned int)CoreWindowProp::CompositeAppHasForeground((const struct tagWND *)v3) )
    goto LABEL_16;
  v5 = *((_QWORD *)CoreWindowProp::GetCompositeAppFrameWindowOrSelf((const struct tagWND *)v3) + 2);
  if ( *(_QWORD *)(v5 + 432) == gpqForeground )
  {
    if ( *(_QWORD *)(v5 + 672) )
      goto LABEL_16;
  }
  v6 = *(_QWORD *)(v3 + 16);
  if ( v6 == gptiCurrent )
  {
    if ( (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(v6 + 424))
      && (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 235LL) & 1) != 0 )
    {
LABEL_10:
      TopLevelWindow = (_QWORD *)GetTopLevelWindow(v3);
      if ( gpqForeground && *(_QWORD **)(gpqForeground + 120LL) == TopLevelWindow )
      {
        v4 = *(_QWORD **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL);
        if ( v4 )
          v4 = (_QWORD *)*v4;
        if ( IsPwndComponentWebview((const struct tagWND *)v3) )
          xxxSendNotifyMessage(v3, 6LL, 1LL, *TopLevelWindow, 0);
      }
      else if ( TopLevelWindow == (_QWORD *)v3 )
      {
        xxxForceForegroundWindowNoRestoreFocus(TopLevelWindow, 8LL);
      }
      else
      {
        v13[2] = 0LL;
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        v13[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v13;
        v13[1] = TopLevelWindow;
        if ( TopLevelWindow )
          HMLockObject(TopLevelWindow);
        xxxForceForegroundWindowNoRestoreFocus(TopLevelWindow, 8LL);
        ThreadUnlock1();
      }
      goto LABEL_14;
    }
  }
  else
  {
    if ( (unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 424LL)) )
    {
      v9 = IsImmersiveAppRestricted(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 424LL));
    }
    else
    {
      if ( !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(gptiCurrent + 424LL)) )
        goto LABEL_16;
      v9 = IsImmersiveBroker(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 424LL));
    }
    if ( v9 )
    {
      v4 = *(_QWORD **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL);
      if ( v4 )
        v4 = (_QWORD *)*v4;
      goto LABEL_10;
    }
  }
LABEL_16:
  UserSetLastError(5LL);
LABEL_14:
  ThreadUnlock1();
LABEL_15:
  UserSessionSwitchLeaveCrit();
  return v4;
}
