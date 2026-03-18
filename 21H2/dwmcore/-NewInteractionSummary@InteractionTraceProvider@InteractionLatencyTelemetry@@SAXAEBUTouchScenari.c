/*
 * XREFs of ?NewInteractionSummary@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo@2@_N@Z @ 0x1801D52DC
 * Callers:
 *     ?SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAHPEBUTouchScenarioInfo@2@_N@Z @ 0x1801D5950 (-SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAHPEB.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180025194 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

void __fastcall InteractionLatencyTelemetry::InteractionTraceProvider::NewInteractionSummary(
        const struct InteractionLatencyTelemetry::TouchScenarioInfo *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r9
  char v4; // r10
  char v5; // [rsp+30h] [rbp-39h] BYREF
  int v6; // [rsp+34h] [rbp-35h] BYREF
  __int64 v7; // [rsp+38h] [rbp-31h] BYREF
  __int64 v8; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v10; // [rsp+70h] [rbp+7h]
  __int64 v11; // [rsp+78h] [rbp+Fh]
  __int64 *v12; // [rsp+80h] [rbp+17h]
  __int64 v13; // [rsp+88h] [rbp+1Fh]
  int *v14; // [rsp+90h] [rbp+27h]
  __int64 v15; // [rsp+98h] [rbp+2Fh]
  char *v16; // [rsp+A0h] [rbp+37h]
  __int64 v17; // [rsp+A8h] [rbp+3Fh]

  if ( (unsigned int)dword_1803D0EB8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1803D0EB8, 8LL) )
    {
      v6 = *(_DWORD *)(v3 + 152);
      v7 = *(_QWORD *)(v3 + 8);
      v16 = &v5;
      v14 = &v6;
      v12 = &v7;
      v10 = &v8;
      v8 = v3;
      v13 = v1;
      v11 = v1;
      v5 = v4;
      v17 = 1LL;
      v15 = 4LL;
      tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_18036F29E, 0LL, 0LL, 6u, &v9);
    }
  }
}
