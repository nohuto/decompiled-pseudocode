/*
 * XREFs of ?xxxSetFocus@@YGPAUtagWND@@PAU1@@Z @ 0x17FFC
 * Callers:
 *     _NtUserSetFocus@4 @ 0x17F7A (_NtUserSetFocus@4.c)
 *     ?xxxEnableWindowWorker@@YGHPAUtagWND@@H@Z @ 0x18A7C (-xxxEnableWindowWorker@@YGHPAUtagWND@@H@Z.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     ?xxxMoveFocusAway@@YGXPBUtagWND@@@Z @ 0x72D9A (-xxxMoveFocusAway@@YGXPBUtagWND@@@Z.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     ?xxxCloseApplication@WindowManagementExtended@@YGXPAUtagTHREADINFO@@@Z @ 0x19F8FE (-xxxCloseApplication@WindowManagementExtended@@YGXPAUtagTHREADINFO@@@Z.c)
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 * Callees:
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1770E (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x18278 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x197E0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?IsHostOrComponentThreadOf@CoreWindowProp@@SGHPBUtagTHREADINFO@@PBUtagWND@@@Z @ 0xC317E (-IsHostOrComponentThreadOf@CoreWindowProp@@SGHPBUtagTHREADINFO@@PBUtagWND@@@Z.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YG_NPAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x14183D (-xxxForceForegroundWindowNoRestoreFocus@@YG_NPAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 */

struct tagWND *__thiscall xxxSetFocus(int *this)
{
  int *v1; // edx
  int *v2; // edi
  char v3; // al
  int v4; // eax
  int v5; // ecx
  int *v6; // ebx
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // ecx
  int v15; // ebx
  _DWORD *v16; // eax
  int v17; // eax
  int *v18; // eax
  const struct tagTHREADINFO *v19; // [esp+0h] [ebp-20h]
  const struct tagWND *v20; // [esp+4h] [ebp-1Ch]
  int v22; // [esp+10h] [ebp-10h]
  int v23; // [esp+14h] [ebp-Ch] BYREF
  int *v24; // [esp+18h] [ebp-8h]
  int v25; // [esp+1Ch] [ebp-4h]

  v1 = this;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  if ( !this )
  {
    v15 = 0;
    if ( ((*(_BYTE *)(_gptiCurrent + 372) | *(_BYTE *)(**(_DWORD **)(_gptiCurrent + 252) + 8)) & 0x40) != 0 )
    {
      v16 = *(_DWORD **)(*(_DWORD *)(_gptiCurrent + 236) + 60);
      v17 = v16 ? *v16 : 0;
      if ( xxxCallHook(v17, 5u, (int)v19, (int)v20) )
        return 0;
    }
    v18 = *(int **)(*(_DWORD *)(_gptiCurrent + 236) + 60);
    if ( v18 )
      v15 = *v18;
    anonymous_namespace_::xxxSendFocusMessages(_gptiCurrent, 0);
    v13 = v15;
LABEL_23:
    LOBYTE(v12) = 1;
    return (struct tagWND *)HMValidateHandleNoSecure(v13, v12);
  }
  if ( *(_DWORD *)(this[2] + 236) == *(_DWORD *)(_gptiCurrent + 236) )
  {
LABEL_3:
    v2 = v1;
    do
    {
      v3 = *(_BYTE *)(v2[5] + 23);
      if ( (v3 & 0x28) != 0 )
      {
        UserSetLastError(87);
        return 0;
      }
      if ( (v3 & 0xC0) != 0x40 )
        break;
      v2 = (int *)v2[14];
    }
    while ( v2 );
    v23 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v23;
    v24 = v2;
    if ( v2 )
    {
      HMLockObject(v2);
      v1 = this;
    }
    v4 = *(_DWORD *)(_gptiCurrent + 236);
    v5 = 0;
    v22 = 0;
    v6 = *(int **)(v4 + 60);
    if ( v1 == v6 )
      goto LABEL_14;
    if ( ((*(_BYTE *)(_gptiCurrent + 372) | *(_BYTE *)(**(_DWORD **)(_gptiCurrent + 252) + 8)) & 0x40) != 0 )
    {
      if ( v6 )
        v5 = *v6;
      if ( xxxCallHook(v5, 5u, (int)v19, (int)v20) )
      {
        UserSetLastError(5);
LABEL_46:
        ThreadUnlock1();
        return 0;
      }
    }
    v7 = *(_DWORD *)(_gptiCurrent + 236);
    if ( v2 == *(int **)(v7 + 64) )
    {
LABEL_11:
      v6 = *(int **)(*(_DWORD *)(_gptiCurrent + 236) + 60);
      ThreadUnlock1();
      v23 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v23;
      v24 = v6;
      if ( v6 )
        HMLockObject(v6);
      anonymous_namespace_::xxxSendFocusMessages(_gptiCurrent, this);
      v4 = *(_DWORD *)(_gptiCurrent + 236);
LABEL_14:
      v8 = *(_DWORD *)(v4 + 60);
      if ( v8 )
        v9 = *(_DWORD *)(v8 + 8);
      else
        v9 = _gptiCurrent;
      v10 = *(_DWORD *)(v9 + 240);
      if ( v10 )
      {
        v11 = *(_DWORD *)(v10 + 20);
        if ( gLCIDSentToShell != v11
          && ((*(_DWORD *)(_gptiCurrent + 372) | *(_DWORD *)(**(_DWORD **)(_gptiCurrent + 252) + 8)) & 0x800) != 0 )
        {
          gLCIDSentToShell = v11;
          xxxCallHook(v11, 0xAu, (int)v19, (int)v20);
        }
      }
      if ( v6 )
        v22 = *v6;
      ThreadUnlock1();
      v13 = v22;
      goto LABEL_23;
    }
    if ( v7 == _gpqForeground )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(2, 44, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
    }
    else if ( anonymous_namespace_::FAllowForegroundActivate(v2) )
    {
      if ( (*(_BYTE *)(v2[5] + 23) & 0x10) == 0 )
        *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 8) |= 0x100u;
      if ( !(unsigned __int8)xxxForceForegroundWindowNoRestoreFocus(v2, 8) )
        goto LABEL_45;
    }
    if ( v2 == *(int **)(*(_DWORD *)(_gptiCurrent + 236) + 64)
      || (unsigned __int8)anonymous_namespace_::xxxLocalActivateWindow(0) )
    {
      goto LABEL_11;
    }
LABEL_45:
    UserSetLastError(87);
    goto LABEL_46;
  }
  if ( CoreWindowProp::IsHostOrComponentThreadOf(v19, v20) )
  {
    v1 = this;
    goto LABEL_3;
  }
  UserSetLastError(5);
  return 0;
}
