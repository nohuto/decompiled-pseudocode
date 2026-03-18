/*
 * XREFs of _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C002CF0C
 * Callers:
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C002B96C (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C002CB24 (_anonymous_namespace_--CanSetForegroundWindow.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C003EC50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0040298 (WPP_RECORDER_SF_.c)
 *     PtiKbdFromQ @ 0x1C00BEA34 (PtiKbdFromQ.c)
 *     IsNonImmersiveBand @ 0x1C00C9C04 (IsNonImmersiveBand.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall anonymous_namespace_::CheckImmersiveForegroundAccess(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  __int64 CurrentProcessWin32Process; // rdi
  __int64 v6; // rdx
  bool v7; // bp
  __int64 v8; // rcx
  int v10; // r9d
  char v11; // cl
  char v12; // al
  char v13; // bl
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9

  v3 = a2;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3);
  v7 = (unsigned int)IsDesktopApp(CurrentProcessWin32Process) != 0;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 820) & 0x100) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_q(
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        v6,
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
      v11 = v3;
      v12 = v3 | 1;
      v13 = v3 & 0xFE;
      if ( (v11 & 8) != 0 )
        v13 = v12;
      if ( (v13 & 0x10) != 0 )
        v3 = v13 | 2;
      else
        v3 = v13 & 0xFD;
    }
    if ( (v3 & 1) == 0 )
    {
      LODWORD(v6) = *(_DWORD *)(CurrentProcessWin32Process + 884);
      if ( (_DWORD)v6 != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 884LL)
        && !(unsigned __int8)SeIsParentOfChildAppContainer((unsigned int)gSessionId) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 0;
        v10 = 13;
        goto LABEL_12;
      }
    }
    if ( (v3 & 2) != 0 )
    {
      if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v6, v17, v18);
      v7 = 1;
    }
    else if ( gpqForeground )
    {
      v14 = PtiKbdFromQ(gpqForeground);
      if ( *(_DWORD *)(*(_QWORD *)(v14 + 424) + 884LL) != (_DWORD)v6 )
      {
        PtiKbdFromQ(v15);
        if ( !(unsigned __int8)SeIsParentOfChildAppContainer((unsigned int)gSessionId) )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 0;
          v10 = 14;
          goto LABEL_12;
        }
      }
    }
  }
  if ( !v7 || !gpqForeground || (v8 = *(_QWORD *)(gpqForeground + 120LL)) == 0 || (unsigned int)IsNonImmersiveBand(v8) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_(
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        v6,
        2,
        16,
        (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
    }
    return 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = 15;
LABEL_12:
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_q(
      (unsigned int)&WPP_RECORDER_INITIALIZED,
      v6,
      2,
      v10,
      (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids,
      CurrentProcessWin32Process);
  }
  return 0;
}
