/*
 * XREFs of ?ForceRetireScenario@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@@Z @ 0x18015F94C
 * Callers:
 *     ?AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ @ 0x180013098 (-AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIAEBU_LUID@@2PEAPEAUTouchUpdateInfo@1@@Z @ 0x180013E2C (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 *     ?UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@PEAUTouchUpdateInfo@1@_K@Z @ 0x180163034 (-UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@P.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1801506E8 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

void __fastcall InteractionTraceProvider::ForceRetireScenario(
        const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a1)
{
  int v1; // [rsp+30h] [rbp-39h] BYREF
  int v2; // [rsp+34h] [rbp-35h] BYREF
  __int64 v3; // [rsp+38h] [rbp-31h] BYREF
  const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v4; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+50h] [rbp-19h] BYREF
  int *v6; // [rsp+70h] [rbp+7h]
  __int64 v7; // [rsp+78h] [rbp+Fh]
  const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo **v8; // [rsp+80h] [rbp+17h]
  __int64 v9; // [rsp+88h] [rbp+1Fh]
  __int64 *v10; // [rsp+90h] [rbp+27h]
  __int64 v11; // [rsp+98h] [rbp+2Fh]
  int *v12; // [rsp+A0h] [rbp+37h]
  __int64 v13; // [rsp+A8h] [rbp+3Fh]

  if ( (unsigned int)dword_180342E48 > 5 && (qword_180342E58 & 8) != 0 && (qword_180342E60 & 8) == qword_180342E60 )
  {
    v1 = *((_DWORD *)a1 + 38);
    v3 = *((_QWORD *)a1 + 1);
    v12 = &v1;
    v10 = &v3;
    v8 = &v4;
    v6 = &v2;
    v4 = a1;
    v2 = 5;
    v13 = 4LL;
    v11 = 8LL;
    v9 = 8LL;
    v7 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_180342E48,
      (unsigned __int8 *)dword_1802E372C,
      0LL,
      0LL,
      6u,
      &v5);
  }
}
