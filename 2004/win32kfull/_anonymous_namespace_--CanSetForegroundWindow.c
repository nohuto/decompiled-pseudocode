/*
 * XREFs of _anonymous_namespace_::CanSetForegroundWindow @ 0x1C002FFBC
 * Callers:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002C0BC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C0022AB4 (IsNonImmersiveBand.c)
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 *     WPP_RECORDER_SF_s @ 0x1C002A128 (WPP_RECORDER_SF_s.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C002FDD8 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     IsDebuggerAttached @ 0x1C0030344 (IsDebuggerAttached.c)
 *     ?CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z @ 0x1C00303A4 (-CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z.c)
 *     IsForegroundLocked @ 0x1C0030434 (IsForegroundLocked.c)
 *     IAMThreadAccessGranted @ 0x1C0066514 (IAMThreadAccessGranted.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall anonymous_namespace_::CanSetForegroundWindow(__int64 a1, _WORD *a2)
{
  unsigned int v2; // r14d
  __int64 v3; // rdi
  __int64 v4; // rbp
  int v5; // ecx
  __int64 CurrentProcess; // rax
  __int64 v7; // rcx
  struct tagTHREADINFO *PtiLastWokenHotKey; // rax
  int v9; // edx
  char v10; // di
  const char *v11; // rcx
  int v13; // r9d
  __int64 v14; // rdx
  int v15; // r9d

  v2 = (unsigned int)a2;
  v3 = a1;
  v4 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) == 15 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 1LL;
    v13 = 24;
    goto LABEL_23;
  }
  if ( *(int *)(v4 + 12) < 0 )
  {
    gppiLockSFW = 0LL;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 2LL;
    v15 = 25;
    goto LABEL_32;
  }
  v5 = grpdeskRitInput;
  if ( *(_QWORD *)(gptiCurrent + 448LL) == grpdeskRitInput
    && ((_DWORD)a2 == 31 || (unsigned int)IAMThreadAccessGranted(gptiCurrent)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(v5, (_DWORD)a2, 2, 26, (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
    }
    gppiLockSFW = 0LL;
    return 2LL;
  }
  CurrentProcess = PsGetCurrentProcess();
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    a2 = *(_WORD **)(*(_QWORD *)(v3 + 136) + 8LL);
    LODWORD(a1) = gpsi;
    if ( *a2 != *(_WORD *)(gpsi + 900LL) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 2LL;
      v15 = 27;
LABEL_32:
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(a1, (_DWORD)a2, 2, v15, (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
      return 2LL;
    }
  }
  if ( !gfDebugForegroundIgnoreDebugPort )
  {
    if ( (unsigned int)IsDebuggerAttached(v4) && IsNonImmersiveBand(v3) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 2LL;
      v15 = 28;
      goto LABEL_32;
    }
    if ( gpqForeground )
    {
      v7 = *(_QWORD *)(gpqForeground + 120LL);
      if ( v7 )
      {
        if ( (unsigned int)IsDebuggerAttached(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 416LL)) && IsNonImmersiveBand(v3) )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 2LL;
          v15 = 29;
          goto LABEL_32;
        }
      }
    }
  }
  if ( gptiCurrent == GetProp(v3, *(unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Busy, 1LL) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 2LL;
    v15 = 30;
    goto LABEL_32;
  }
  if ( v4 == gppiScreenSaver )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 2LL;
    v15 = 31;
    goto LABEL_32;
  }
  PtiLastWokenHotKey = CInputGlobals::GetPtiLastWokenHotKey(gpInputGlobals);
  if ( PtiLastWokenHotKey
    && *((_QWORD *)PtiLastWokenHotKey + 52) == *(_QWORD *)(gptiCurrent + 416LL)
    && !(unsigned int)IsForegroundLocked()
    && (unsigned int)IsDesktopApp(v14) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 2LL;
    v15 = 32;
    goto LABEL_32;
  }
  if ( !anonymous_namespace_::CheckImmersiveForegroundAccess(v3, v2) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 1LL;
    v13 = 33;
LABEL_23:
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(a1, (_DWORD)a2, 2, v13, (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
    return 1LL;
  }
  v10 = CheckCanonicalForegroundAccess(v2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = "HasRight";
    if ( !v10 )
      v11 = "NoRights";
    WPP_RECORDER_SF_s((_DWORD)v11, v9, 2, 34, (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids, (__int64)v11);
  }
  return v10 != 0 ? 2 : 0;
}
