/*
 * XREFs of ?FallBackToBDD@@YA_NXZ @ 0x180002808
 * Callers:
 *     ?ShouldRestartSession@@YA_NU_FILETIME@@@Z @ 0x1800029FC (-ShouldRestartSession@@YA_NU_FILETIME@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001090 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ @ 0x180001464 (-ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ.c)
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x1800015EC (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     __security_check_cookie @ 0x180004E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180006350 (_guard_dispatch_icall_nop.c)
 */

bool FallBackToBDD(void)
{
  int v0; // ebx
  HMODULE LibraryW; // rax
  HMODULE v2; // rdi
  FARPROC ProcAddress; // rax
  _unnamed_type_gDwmInitTelemetryAggregator_ *v4; // rcx
  unsigned __int16 v6; // [rsp+38h] [rbp-69h] BYREF
  int v7; // [rsp+3Ch] [rbp-65h] BYREF
  int v8; // [rsp+40h] [rbp-61h] BYREF
  _QWORD v9[4]; // [rsp+48h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+68h] [rbp-39h] BYREF
  GUID *v11; // [rsp+88h] [rbp-19h]
  __int64 v12; // [rsp+90h] [rbp-11h]
  int *v13; // [rsp+98h] [rbp-9h]
  __int64 v14; // [rsp+A0h] [rbp-1h]
  int *v15; // [rsp+A8h] [rbp+7h]
  __int64 v16; // [rsp+B0h] [rbp+Fh]
  GUID *v17; // [rsp+B8h] [rbp+17h]
  __int64 v18; // [rsp+C0h] [rbp+1Fh]
  GUID *v19; // [rsp+C8h] [rbp+27h]
  __int64 v20; // [rsp+D0h] [rbp+2Fh]
  unsigned __int16 *v21; // [rsp+D8h] [rbp+37h]
  __int64 v22; // [rsp+E0h] [rbp+3Fh]

  v0 = -1073741823;
  LibraryW = LoadLibraryW(L"gdi32.dll");
  v2 = LibraryW;
  if ( LibraryW )
  {
    ProcAddress = GetProcAddress(LibraryW, "D3DKMTEscape");
    if ( ProcAddress )
    {
      v9[1] = 1029LL;
      v9[3] = 0LL;
      v9[0] = 0LL;
      v9[2] = 0LL;
      v0 = ((__int64 (__fastcall *)(_QWORD *))ProcAddress)(v9);
      if ( v0 >= 0 )
      {
        LODWORD(qword_18000B74C) = qword_18000B74C + 1;
        v4 = (_unnamed_type_gDwmInitTelemetryAggregator_ *)(unsigned int)(HIDWORD(qword_18000B754) + 1);
        HIDWORD(qword_18000B754) = (_DWORD)v4;
        if ( (int)v4 > 10 )
        {
          _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(v4);
          HIDWORD(qword_18000B754) = 0;
        }
        if ( (unsigned int)dword_18000B000 > 5
          && (qword_18000B010 & 0x400000000000LL) != 0
          && (qword_18000B018 & 0x400000000000LL) == qword_18000B018 )
        {
          v6 = gSessionId;
          v7 = gDwmNumRetriesSoFar;
          v8 = v0;
          v21 = &v6;
          v19 = &gDwmInitTargetAppSessionGuid;
          v17 = &gDwmInitTargetAppSessionGuid;
          v15 = &v7;
          v13 = &v8;
          v11 = &gDwmInitTelemetryActivityId;
          v22 = 2LL;
          v20 = 16LL;
          v18 = 16LL;
          v16 = 4LL;
          v14 = 4LL;
          v12 = 16LL;
          tlgWriteTransfer_EventWriteTransfer(
            (__int64)&dword_18000B000,
            (unsigned __int8 *)dword_18000845D,
            0LL,
            0LL,
            8u,
            &v10);
        }
        TraceLoggingWriteEtw(1, v0 | 0x10000000, gDwmNumRetriesSoFar);
      }
    }
    FreeLibrary(v2);
  }
  return v0 >= 0;
}
