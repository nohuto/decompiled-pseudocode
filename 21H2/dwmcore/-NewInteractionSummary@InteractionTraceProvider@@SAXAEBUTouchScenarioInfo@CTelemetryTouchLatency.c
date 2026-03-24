/*
 * XREFs of ?NewInteractionSummary@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@_N@Z @ 0x18016021C
 * Callers:
 *     ?SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEBUTouchScenarioInfo@1@_N@Z @ 0x180160C7C (-SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEBUTouchScenarioInfo@1@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180152D40 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

void __fastcall InteractionTraceProvider::NewInteractionSummary(
        const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a1,
        char a2)
{
  char v2; // [rsp+30h] [rbp-39h] BYREF
  int v3; // [rsp+34h] [rbp-35h] BYREF
  __int64 v4; // [rsp+38h] [rbp-31h] BYREF
  const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v5; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+50h] [rbp-19h] BYREF
  const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo **v7; // [rsp+70h] [rbp+7h]
  __int64 v8; // [rsp+78h] [rbp+Fh]
  __int64 *v9; // [rsp+80h] [rbp+17h]
  __int64 v10; // [rsp+88h] [rbp+1Fh]
  int *v11; // [rsp+90h] [rbp+27h]
  __int64 v12; // [rsp+98h] [rbp+2Fh]
  char *v13; // [rsp+A0h] [rbp+37h]
  __int64 v14; // [rsp+A8h] [rbp+3Fh]

  if ( (unsigned int)dword_180344E48 > 5 && (qword_180344E58 & 8) != 0 && (qword_180344E60 & 8) == qword_180344E60 )
  {
    v3 = *((_DWORD *)a1 + 38);
    v4 = *((_QWORD *)a1 + 1);
    v13 = &v2;
    v11 = &v3;
    v9 = &v4;
    v7 = &v5;
    v2 = a2;
    v5 = a1;
    v14 = 1LL;
    v12 = 4LL;
    v10 = 8LL;
    v8 = 8LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_180344E48,
      (unsigned __int8 *)dword_1802E6B1A,
      0LL,
      0LL,
      6u,
      &v6);
  }
}
