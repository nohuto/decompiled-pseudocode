/*
 * XREFs of ?ConvertHostTimeToContainerTimeline@CTelemetryTouchLatencyAnalysis@@CA_K_K0@Z @ 0x180161780
 * Callers:
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIAEBU_LUID@@2PEAPEAUTouchUpdateInfo@1@@Z @ 0x180023E4C (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 *     ?UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@PEAUTouchUpdateInfo@1@_K@Z @ 0x180165B94 (-UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@P.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x180218C48 (MicrosoftTelemetryAssertTriggeredArgs.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180218C78 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::ConvertHostTimeToContainerTimeline(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rcx
  unsigned int MultiTimePrecise; // esi
  unsigned int v7; // eax
  unsigned int v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+28h] [rbp-30h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h]

  v2 = 0LL;
  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredNoArgs(0LL, a2);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgs(a1, a2);
  v9 = 0;
  v11 = 0LL;
  v10 = 0LL;
  MultiTimePrecise = RtlGetMultiTimePrecise(&v10, 3LL, &v9);
  v7 = v9;
  if ( v9 != 3 )
  {
    MicrosoftTelemetryAssertTriggeredArgs(v5, 3LL, v9);
    v7 = v9;
  }
  if ( MultiTimePrecise )
  {
    MicrosoftTelemetryAssertTriggeredArgs(v5, MultiTimePrecise, 0LL);
  }
  else if ( v7 == 3 && a2 )
  {
    return v10 - g_qpcFrequency.QuadPart * (*((_QWORD *)&v10 + 1) - a1) / a2;
  }
  return v2;
}
