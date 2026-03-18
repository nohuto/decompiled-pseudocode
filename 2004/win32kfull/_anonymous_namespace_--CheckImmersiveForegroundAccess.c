/*
 * XREFs of _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C002FDD8
 * Callers:
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C002FFBC (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C003045C (_anonymous_namespace_--FAllowForegroundActivate.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C0022AB4 (IsNonImmersiveBand.c)
 *     WPP_RECORDER_SF_q @ 0x1C0026920 (WPP_RECORDER_SF_q.c)
 *     PtiKbdFromQ @ 0x1C00B04B8 (PtiKbdFromQ.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall anonymous_namespace_::CheckImmersiveForegroundAccess(__int64 a1, char a2)
{
  __int64 CurrentProcessWin32Process; // rdi
  int v5; // edx
  bool v6; // bp
  __int64 v7; // rcx
  int v9; // r9d
  char v10; // cl
  char v11; // al
  char v12; // bl
  __int64 v13; // rax
  __int64 v14; // rcx

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v6 = (unsigned int)IsDesktopApp(CurrentProcessWin32Process) != 0;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 820) & 0x100) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_q(
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        v5,
        2,
        12,
        (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids,
        CurrentProcessWin32Process);
    }
    return 1;
  }
  if ( *(_DWORD *)(CurrentProcessWin32Process + 884) )
  {
    if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
    {
      v10 = a2;
      v11 = a2 | 1;
      v12 = a2 & 0xFE;
      if ( (v10 & 8) != 0 )
        v12 = v11;
      if ( (v12 & 0x10) != 0 )
        a2 = v12 | 2;
      else
        a2 = v12 & 0xFD;
    }
    if ( (a2 & 1) == 0 )
    {
      v5 = *(_DWORD *)(CurrentProcessWin32Process + 884);
      if ( v5 != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 884LL)
        && !(unsigned __int8)SeIsParentOfChildAppContainer((unsigned int)gSessionId) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 0;
        v9 = 13;
        goto LABEL_12;
      }
    }
    if ( (a2 & 2) != 0 )
    {
      if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v6 = 1;
    }
    else if ( gpqForeground )
    {
      v13 = PtiKbdFromQ(gpqForeground);
      if ( *(_DWORD *)(*(_QWORD *)(v13 + 416) + 884LL) != v5 )
      {
        PtiKbdFromQ(v14);
        if ( !(unsigned __int8)SeIsParentOfChildAppContainer((unsigned int)gSessionId) )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 0;
          v9 = 14;
          goto LABEL_12;
        }
      }
    }
  }
  if ( !v6 || !gpqForeground || (v7 = *(_QWORD *)(gpqForeground + 120LL)) == 0 || IsNonImmersiveBand(v7) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_(
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        v5,
        2,
        16,
        (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
    }
    return 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = 15;
LABEL_12:
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_q(
      (unsigned int)&WPP_RECORDER_INITIALIZED,
      v5,
      2,
      v9,
      (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids,
      CurrentProcessWin32Process);
  }
  return 0;
}
