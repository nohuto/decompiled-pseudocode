/*
 * XREFs of _NtUserNavigateFocus@8 @ 0x16716A
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0x26218 (-GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendNotifyMessage@20 @ 0x4823C (_xxxSendNotifyMessage@20.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?IsPwndComponentWebview@@YG_NPBUtagWND@@@Z @ 0xC42C2 (-IsPwndComponentWebview@@YG_NPBUtagWND@@@Z.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0xC7072 (-CompositeAppHasForeground@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YG_NPAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x14183D (-xxxForceForegroundWindowNoRestoreFocus@@YG_NPAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
_DWORD *__stdcall NtUserNavigateFocus(int a1, int a2)
{
  size_t *v2; // eax
  size_t *v3; // edi
  int v4; // eax
  _DWORD *v5; // esi
  struct tagWND *TopLevelHostForComponent; // eax
  int TopLevelWindow; // eax
  int v8; // edx
  size_t v9; // eax
  int v10; // eax
  size_t *v11; // ebx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD v15[3]; // [esp+8h] [ebp-18h] BYREF
  int v16; // [esp+14h] [ebp-Ch] BYREF
  size_t *v17; // [esp+18h] [ebp-8h]
  int v18; // [esp+1Ch] [ebp-4h]

  v16 = 0;
  v17 = 0;
  v18 = 0;
  EnterCrit(0, 1);
  _gbValidateHandleForIL = 0;
  v2 = (size_t *)ValidateHwnd(a1);
  v3 = v2;
  if ( !v2 || (v4 = *(_WORD *)(v2[5] + 30) & 0x3FFF, v4 == 669) || v4 == 671 )
  {
    v5 = 0;
    goto LABEL_35;
  }
  v16 = *(_DWORD *)(_gptiCurrent + 228);
  *(_DWORD *)(_gptiCurrent + 228) = &v16;
  v17 = v3;
  HMLockObject(v3);
  v5 = 0;
  if ( _gpqForeground && !CoreWindowProp::CompositeAppHasForeground(v3) )
    goto LABEL_6;
  TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent();
  TopLevelWindow = _GetTopLevelWindow((int)TopLevelHostForComponent);
  if ( !TopLevelWindow )
    TopLevelWindow = (int)v3;
  v8 = *(_DWORD *)(TopLevelWindow + 8);
  if ( *(_DWORD *)(v8 + 236) == _gpqForeground )
  {
    if ( *(_DWORD *)(v8 + 368) )
      goto LABEL_6;
  }
  v9 = v3[2];
  if ( v9 == _gptiCurrent )
  {
    if ( IsImmersiveAppRestricted(*(_DWORD *)(v9 + 232)) && (*(_BYTE *)(v3[5] + 147) & 1) != 0 )
    {
LABEL_22:
      v11 = (size_t *)_GetTopLevelWindow((int)v3);
      if ( _gpqForeground && *(size_t **)(_gpqForeground + 64) == v11 )
      {
        v5 = *(_DWORD **)(*(_DWORD *)(_gptiCurrent + 236) + 60);
        if ( v5 )
          v5 = (_DWORD *)*v5;
        if ( IsPwndComponentWebview(v3) )
          xxxSendNotifyMessage((int)v3, 6u, (struct tagWND *)1, *v11, 0);
      }
      else if ( v11 == v3 )
      {
        xxxForceForegroundWindowNoRestoreFocus((int)v11, 8);
      }
      else
      {
        v15[2] = 0;
        CurrentThread = KeGetCurrentThread();
        ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
        v15[0] = *(_DWORD *)(ThreadWin32Thread + 228);
        *(_DWORD *)(ThreadWin32Thread + 228) = v15;
        v15[1] = v11;
        if ( v11 )
          HMLockObject(v11);
        xxxForceForegroundWindowNoRestoreFocus((int)v11, 8);
        ThreadUnlock1();
      }
      goto LABEL_33;
    }
  }
  else
  {
    if ( IsImmersiveBroker(*(_DWORD *)(_gptiCurrent + 232)) )
    {
      v10 = IsImmersiveAppRestricted(*(_DWORD *)(v3[2] + 232));
    }
    else
    {
      if ( !IsImmersiveAppRestricted(*(_DWORD *)(_gptiCurrent + 232)) )
        goto LABEL_6;
      v10 = IsImmersiveBroker(*(_DWORD *)(v3[2] + 232));
    }
    if ( v10 )
    {
      v5 = *(_DWORD **)(*(_DWORD *)(_gptiCurrent + 236) + 60);
      if ( v5 )
        v5 = (_DWORD *)*v5;
      goto LABEL_22;
    }
  }
LABEL_6:
  v5 = 0;
  UserSetLastError((struct _NT_TIB *)5);
LABEL_33:
  ThreadUnlock1();
LABEL_35:
  UserSessionSwitchLeaveCrit();
  return v5;
}
