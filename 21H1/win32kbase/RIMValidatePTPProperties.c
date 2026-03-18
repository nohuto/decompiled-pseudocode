/*
 * XREFs of RIMValidatePTPProperties @ 0x1C0188278
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0164C98 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0168B18 (RIMVirtCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMValidatePTPProperties(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // esi
  unsigned int v4; // edi

  v2 = a2;
  v3 = a1;
  v4 = -1073741668;
  if ( *(_DWORD *)(a2 + 24) != 7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( v3 == 3 && (*(_DWORD *)(v2 + 312) & 0x80u) != 0 && *(_DWORD *)(v2 + 720) <= 6u )
  {
    return 0;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 10, (__int64)&WPP_09f3a69173bf3f521b10e986f86340e6_Traceguids);
  }
  return v4;
}
