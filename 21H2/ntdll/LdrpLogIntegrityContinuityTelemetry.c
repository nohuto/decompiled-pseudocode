/*
 * XREFs of LdrpLogIntegrityContinuityTelemetry @ 0x1800CF790
 * Callers:
 *     LdrpValidateIntegrityContinuity @ 0x180061B68 (LdrpValidateIntegrityContinuity.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180043830 (RtlRunOnceExecuteOnce.c)
 *     _tlgKeywordOn @ 0x1800854F4 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008AEEC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtQuerySystemInformation @ 0x18009DCC0 (NtQuerySystemInformation.c)
 *     RtlCaptureContext @ 0x1800A1760 (RtlCaptureContext.c)
 *     memset @ 0x1800A4740 (memset.c)
 *     RtlReportException @ 0x1800DCA60 (RtlReportException.c)
 */

NTSTATUS __fastcall LdrpLogIntegrityContinuityTelemetry(__int64 a1, int a2, int a3, int a4, char a5)
{
  __int64 v9; // rax
  unsigned __int16 *v10; // rbx
  int v11; // edi
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // ecx
  int v16; // [rsp+38h] [rbp-D0h] BYREF
  int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  int v18; // [rsp+40h] [rbp-C8h] BYREF
  int v19; // [rsp+44h] [rbp-C4h] BYREF
  int v20; // [rsp+48h] [rbp-C0h] BYREF
  int v21; // [rsp+4Ch] [rbp-BCh] BYREF
  int v22; // [rsp+50h] [rbp-B8h] BYREF
  int v23; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v24; // [rsp+58h] [rbp-B0h] BYREF
  __int64 SystemInformation; // [rsp+60h] [rbp-A8h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+68h] [rbp-A0h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+108h] [rbp+0h] BYREF
  _EVENT_DATA_DESCRIPTOR v28; // [rsp+5D8h] [rbp+4D0h] BYREF
  int *v29; // [rsp+5F8h] [rbp+4F0h]
  __int64 v30; // [rsp+600h] [rbp+4F8h]
  __int64 v31; // [rsp+608h] [rbp+500h]
  int v32[2]; // [rsp+610h] [rbp+508h] BYREF
  int *v33; // [rsp+618h] [rbp+510h]
  __int64 v34; // [rsp+620h] [rbp+518h]
  int *v35; // [rsp+628h] [rbp+520h]
  __int64 v36; // [rsp+630h] [rbp+528h]
  int *v37; // [rsp+638h] [rbp+530h]
  __int64 v38; // [rsp+640h] [rbp+538h]
  int *v39; // [rsp+648h] [rbp+540h]
  __int64 v40; // [rsp+650h] [rbp+548h]
  _DWORD *v41; // [rsp+658h] [rbp+550h]
  __int64 v42; // [rsp+660h] [rbp+558h]
  __int64 v43; // [rsp+668h] [rbp+560h]
  _DWORD v44[2]; // [rsp+670h] [rbp+568h] BYREF
  int *v45; // [rsp+678h] [rbp+570h]
  __int64 v46; // [rsp+680h] [rbp+578h]
  int *v47; // [rsp+688h] [rbp+580h]
  __int64 v48; // [rsp+690h] [rbp+588h]
  int *v49; // [rsp+698h] [rbp+590h]
  __int64 v50; // [rsp+6A0h] [rbp+598h]
  __int64 *v51; // [rsp+6A8h] [rbp+5A0h]
  __int64 v52; // [rsp+6B0h] [rbp+5A8h]
  int *v53; // [rsp+6B8h] [rbp+5B0h]
  __int64 v54; // [rsp+6C0h] [rbp+5B8h]

  SystemInformation = 0LL;
  if ( RtlRunOnceExecuteOnce(
         &LibLoaderTelemetryInitRunOnce,
         (PRTL_RUN_ONCE_INIT_FN)LibLoaderTelemetryInitOnce,
         0LL,
         0LL) >= 0 )
  {
    v9 = *(_QWORD *)(a1 + 48);
    v10 = (unsigned __int16 *)(v9 + 72);
    if ( v9 )
    {
      v11 = *(unsigned __int8 *)(v9 + 284);
    }
    else
    {
      v10 = (unsigned __int16 *)&unk_18011E370;
      v11 = -1;
    }
    LODWORD(SystemInformation) = 8;
    NtQuerySystemInformation(SystemCodeIntegrityInformation, &SystemInformation, 8u, 0LL);
    if ( (unsigned int)dword_1801664E8 > 5 && tlgKeywordOn((__int64)&dword_1801664E8, 0x800000000000LL) )
    {
      v13 = *(_QWORD *)(a1 + 56);
      v14 = *(unsigned __int16 *)(v13 + 72);
      v31 = *(_QWORD *)(v13 + 80);
      v32[0] = v14;
      v29 = v32;
      v30 = 2LL;
      v32[1] = 0;
      v17 = *(unsigned __int8 *)(v13 + 284);
      v33 = &v17;
      v18 = *(_DWORD *)(a1 + 32);
      v35 = &v18;
      v19 = *(_DWORD *)(a1 + 36);
      v37 = &v19;
      v39 = &v20;
      v41 = v44;
      v43 = *((_QWORD *)v10 + 1);
      v44[0] = *v10;
      v45 = &v21;
      v47 = &v22;
      v23 = HIDWORD(SystemInformation);
      v49 = &v23;
      v51 = &v24;
      LOBYTE(v16) = a5;
      v53 = &v16;
      v34 = 4LL;
      v36 = 4LL;
      v38 = 4LL;
      v20 = a3;
      v40 = 4LL;
      v42 = 2LL;
      v44[1] = 0;
      v21 = v11;
      v46 = 4LL;
      v22 = a2;
      v48 = 4LL;
      v50 = 4LL;
      LODWORD(v24) = a4;
      v52 = 4LL;
      v54 = 1LL;
      tlgWriteTransfer_EtwEventWriteTransfer(
        (__int64)&dword_1801664E8,
        (unsigned __int8 *)dword_180131BA9,
        (__int64)v32,
        v12,
        0xFu,
        &v28);
    }
  }
  RtlCaptureContext(&ContextRecord);
  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  ExceptionRecord.ExceptionCode = -1073740791;
  ExceptionRecord.ExceptionFlags = 0;
  ExceptionRecord.ExceptionAddress = 0LL;
  ExceptionRecord.NumberParameters = 1;
  ExceptionRecord.ExceptionInformation[0] = 45LL;
  return RtlReportException(&ExceptionRecord, &ContextRecord, 0x1Eu);
}
