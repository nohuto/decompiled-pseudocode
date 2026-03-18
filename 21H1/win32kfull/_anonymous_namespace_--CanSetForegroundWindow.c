/*
 * XREFs of _anonymous_namespace_::CanSetForegroundWindow @ 0x1965E
 * Callers:
 *     ?xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x19168 (-xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroun.c)
 * Callees:
 *     ?CheckCanonicalForegroundAccess@@YG_NW4ForegroundChangeAllowPolicy@@@Z @ 0x19546 (-CheckCanonicalForegroundAccess@@YG_NW4ForegroundChangeAllowPolicy@@@Z.c)
 *     _IsForegroundLocked@0 @ 0x195B8 (_IsForegroundLocked@0.c)
 *     _WPP_RECORDER_SF_s@24 @ 0x195D4 (_WPP_RECORDER_SF_s@24.c)
 *     _IsDebuggerAttached@4 @ 0x197BE (_IsDebuggerAttached@4.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1A052 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _IAMThreadAccessGranted@4 @ 0x26140 (_IAMThreadAccessGranted@4.c)
 *     _IsNonImmersiveBand@4 @ 0x2D3DC (_IsNonImmersiveBand@4.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _IsGhostWindowClass@4 @ 0x72C42 (_IsGhostWindowClass@4.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __fastcall anonymous_namespace_::CanSetForegroundWindow(int a1, int a2)
{
  int CurrentProcess; // eax
  int v4; // ecx
  struct tagTHREADINFO *PtiLastWokenHotKey; // eax
  char v6; // al
  char v7; // bl
  const char *v8; // ecx
  int v10; // eax
  int v11; // edx
  int v13; // [esp+14h] [ebp-4h]

  v13 = *(_DWORD *)(_gptiCurrent + 232);
  if ( *(_DWORD *)(*(_DWORD *)(a1 + 20) + 148) == 15 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(2, 24, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
    return 1;
  }
  if ( *(int *)(*(_DWORD *)(_gptiCurrent + 232) + 8) < 0 )
  {
    _gppiLockSFW = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(2, 25, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
    return 2;
  }
  if ( *(_DWORD *)(_gptiCurrent + 248) == _grpdeskRitInput && (a2 == 31 || IAMThreadAccessGranted(_gptiCurrent)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(2, 26, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
    _gppiLockSFW = 0;
    return 2;
  }
  CurrentProcess = PsGetCurrentProcess();
  if ( IsProcessDwm(CurrentProcess) && !IsGhostWindowClass(a1) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(2, 27, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
    return 2;
  }
  if ( !WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink )
  {
    if ( IsDebuggerAttached(v13) && IsNonImmersiveBand(a1) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(2, 28, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
      return 2;
    }
    if ( _gpqForeground )
    {
      v4 = *(_DWORD *)(_gpqForeground + 64);
      if ( v4 )
      {
        if ( IsDebuggerAttached(*(_DWORD *)(*(_DWORD *)(v4 + 8) + 232)) && IsNonImmersiveBand(a1) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(2, 29, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
          return 2;
        }
      }
    }
  }
  if ( _gptiCurrent == _GetProp(1) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(2, 30, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
    return 2;
  }
  if ( v13 == _gppiScreenSaver )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(2, 31, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
    return 2;
  }
  PtiLastWokenHotKey = CInputGlobals::GetPtiLastWokenHotKey(_gpInputGlobals);
  if ( PtiLastWokenHotKey )
  {
    if ( *((_DWORD *)PtiLastWokenHotKey + 58) == *(_DWORD *)(_gptiCurrent + 232) )
    {
      v10 = IsForegroundLocked();
      if ( !v10 && IsDesktopApp(v11) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(2, 32, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
        return 2;
      }
    }
  }
  if ( !(unsigned __int8)anonymous_namespace_::CheckImmersiveForegroundAccess(a1, a2) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(2, 33, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
    return 1;
  }
  v6 = CheckCanonicalForegroundAccess(a2);
  v7 = v6;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = "HasRight";
    if ( !v6 )
      v8 = "NoRights";
    WPP_RECORDER_SF_s(2u, 34, (int)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids, v8);
  }
  return v7 != 0 ? 2 : 0;
}
