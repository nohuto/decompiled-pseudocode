/*
 * XREFs of RIMActivatePointerDeviceDeadzone @ 0x1C015A9C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     ?ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z @ 0x1C016D898 (-ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMActivatePointerDeviceDeadzone(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  unsigned int v5; // ebx
  __int64 v7; // rbp
  unsigned int v8; // ebx
  _DWORD *v9; // rdi

  v4 = a3;
  v5 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 36, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
  }
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
  {
    v8 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v8;
    LOBYTE(a2) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 37, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
  }
  else if ( v5 < 5 && (_mm_lfence(), v7 = v5, v8 = 0, (v9 = *(_DWORD **)(a1 + 8 * v7 + 416)) != 0LL) )
  {
    if ( v9[2] )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    if ( v9[4] )
      v9[10] = v4;
    else
      v8 = -1073741823;
    RIMDeadzone::ActivateTelemetrySession(*(RIMDeadzone **)(a1 + 8 * v7 + 416), v4);
  }
  else
  {
    v8 = -1073741811;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, a2, 1, 38, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids, v8);
  }
  return v8;
}
