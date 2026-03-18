/*
 * XREFs of RIMValidatePTPProperties @ 0x1C0182578
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C015E948 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C01627C8 (RIMVirtCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMValidatePTPProperties(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  int v5; // esi
  unsigned int v6; // edi

  v4 = a2;
  v5 = a1;
  v6 = -1073741668;
  if ( *(_DWORD *)(a2 + 24) != 7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( v5 == 3 && (*(_DWORD *)(v4 + 312) & 0x80u) != 0 && *(_DWORD *)(v4 + 720) <= 6u )
  {
    return 0;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 10, (__int64)&WPP_09f3a69173bf3f521b10e986f86340e6_Traceguids);
  }
  return v6;
}
