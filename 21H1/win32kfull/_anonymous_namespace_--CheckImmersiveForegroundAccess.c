/*
 * XREFs of _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1A052
 * Callers:
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1770E (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1965E (_anonymous_namespace_--CanSetForegroundWindow.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     _IsNonImmersiveBand@4 @ 0x2D3DC (_IsNonImmersiveBand@4.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

char __fastcall anonymous_namespace_::CheckImmersiveForegroundAccess(int a1, char a2)
{
  int CurrentProcessWin32Process; // esi
  bool v4; // al
  int v5; // ecx
  char v7; // bl
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // edi
  int v12; // eax
  bool v14; // [esp+17h] [ebp-1h]

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  v4 = IsDesktopApp(CurrentProcessWin32Process) != 0;
  v14 = v4;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 464) & 0x100) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(2, 12, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids, CurrentProcessWin32Process);
    return 1;
  }
  if ( *(_DWORD *)(CurrentProcessWin32Process + 500) )
  {
    if ( IsImmersiveAppRestricted(CurrentProcessWin32Process) )
    {
      if ( (a2 & 8) != 0 )
        v7 = a2 | 1;
      else
        v7 = a2 & 0xFE;
      if ( (v7 & 0x10) != 0 )
        a2 = v7 | 2;
      else
        a2 = v7 & 0xFD;
    }
    if ( (a2 & 1) == 0 )
    {
      v8 = *(_DWORD *)(CurrentProcessWin32Process + 500);
      if ( v8 != *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 232) + 500)
        && !(unsigned __int8)SeIsParentOfChildAppContainer(
                               _gSessionId,
                               v8,
                               *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 232) + 500)) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(2, 13, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids, CurrentProcessWin32Process);
        return 0;
      }
    }
    if ( (a2 & 2) != 0 )
    {
      if ( IsImmersiveAppRestricted(CurrentProcessWin32Process) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v4 = 1;
    }
    else
    {
      if ( _gpqForeground )
      {
        v9 = *(_DWORD *)(_gpqForeground + 64);
        v10 = v9 ? *(_DWORD *)(v9 + 8) : *(_DWORD *)(_gpqForeground + 52);
        v11 = *(_DWORD *)(CurrentProcessWin32Process + 500);
        if ( *(_DWORD *)(*(_DWORD *)(v10 + 232) + 500) != v11 )
        {
          v12 = v9 ? *(_DWORD *)(v9 + 8) : *(_DWORD *)(_gpqForeground + 52);
          if ( !(unsigned __int8)SeIsParentOfChildAppContainer(
                                   _gSessionId,
                                   v11,
                                   *(_DWORD *)(*(_DWORD *)(v12 + 232) + 500)) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_q(2, 14, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids, CurrentProcessWin32Process);
            return 0;
          }
        }
      }
      v4 = v14;
    }
  }
  if ( !v4 || !_gpqForeground || (v5 = *(_DWORD *)(_gpqForeground + 64)) == 0 || IsNonImmersiveBand(v5) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(2, 16, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
    return 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(2, 15, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids, CurrentProcessWin32Process);
  return 0;
}
