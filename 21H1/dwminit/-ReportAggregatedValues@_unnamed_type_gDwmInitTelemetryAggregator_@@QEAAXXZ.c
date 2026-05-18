/*
 * XREFs of ?ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ @ 0x180001464
 * Callers:
 *     ?FallBackToBDD@@YA_NXZ @ 0x180002808 (-FallBackToBDD@@YA_NXZ.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x180002AC8 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002E80 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     DwmpTerminateSessionProcess @ 0x1800037E0 (DwmpTerminateSessionProcess.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001090 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180004E60 (__security_check_cookie.c)
 */

void __fastcall _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(
        _unnamed_type_gDwmInitTelemetryAggregator_ *this)
{
  unsigned __int16 v1; // [rsp+30h] [rbp-79h] BYREF
  unsigned __int16 v2; // [rsp+32h] [rbp-77h] BYREF
  int v3; // [rsp+34h] [rbp-75h] BYREF
  int v4; // [rsp+38h] [rbp-71h] BYREF
  int v5; // [rsp+3Ch] [rbp-6Dh] BYREF
  int v6; // [rsp+40h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+50h] [rbp-59h] BYREF
  GUID *v8; // [rsp+70h] [rbp-39h]
  __int64 v9; // [rsp+78h] [rbp-31h]
  int *v10; // [rsp+80h] [rbp-29h]
  __int64 v11; // [rsp+88h] [rbp-21h]
  int *v12; // [rsp+90h] [rbp-19h]
  __int64 v13; // [rsp+98h] [rbp-11h]
  int *v14; // [rsp+A0h] [rbp-9h]
  __int64 v15; // [rsp+A8h] [rbp-1h]
  int *v16; // [rsp+B0h] [rbp+7h]
  __int64 v17; // [rsp+B8h] [rbp+Fh]
  GUID *v18; // [rsp+C0h] [rbp+17h]
  __int64 v19; // [rsp+C8h] [rbp+1Fh]
  unsigned __int16 *v20; // [rsp+D0h] [rbp+27h]
  __int64 v21; // [rsp+D8h] [rbp+2Fh]
  unsigned __int16 *v22; // [rsp+E0h] [rbp+37h]
  __int64 v23; // [rsp+E8h] [rbp+3Fh]

  if ( (gDwmInitTelemetryAggregator
     || (_DWORD)qword_18000B74C
     || __PAIR64__(HIDWORD(qword_18000B74C), 0) != (unsigned int)qword_18000B754)
    && (unsigned int)dword_18000B000 > 5
    && (qword_18000B010 & 0x400000000000LL) != 0
    && (qword_18000B018 & 0x400000000000LL) == qword_18000B018 )
  {
    v1 = gSessionId;
    v2 = gBootId;
    v22 = &v1;
    v20 = &v2;
    v18 = &gDwmInitTargetAppSessionGuid;
    v16 = &v3;
    v14 = &v4;
    v12 = &v5;
    v10 = &v6;
    v8 = &gDwmInitTelemetryActivityId;
    v3 = qword_18000B754;
    v4 = HIDWORD(qword_18000B74C);
    v5 = qword_18000B74C;
    v6 = gDwmInitTelemetryAggregator;
    v23 = 2LL;
    v21 = 2LL;
    v19 = 16LL;
    v17 = 4LL;
    v15 = 4LL;
    v13 = 4LL;
    v11 = 4LL;
    v9 = 16LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_18000B000,
      (unsigned __int8 *)dword_1800084D2,
      0LL,
      0LL,
      0xAu,
      &v7);
  }
}
