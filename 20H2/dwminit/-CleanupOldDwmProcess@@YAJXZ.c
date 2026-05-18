/*
 * XREFs of ?CleanupOldDwmProcess@@YAJXZ @ 0x180002AC8
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002E80 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U1@U?$_tlgWrapperByVal@$01@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@43AEBU?$_tlgWrapperByVal@$01@@5@Z @ 0x18000112C (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@U1@U-$_tlgWrapperByVal@$01@@U3@@.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001310 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ @ 0x180001464 (-ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ.c)
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x1800015EC (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?GetPrimaryDisplayDeviceInfo@@YA_NPEAU_DISPLAY_DEVICEW@@@Z @ 0x1800025F8 (-GetPrimaryDisplayDeviceInfo@@YA_NPEAU_DISPLAY_DEVICEW@@@Z.c)
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x180002660 (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 *     ?ShouldRestartSession@@YA_NU_FILETIME@@@Z @ 0x1800029FC (-ShouldRestartSession@@YA_NU_FILETIME@@@Z.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x180003BD0 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     DwmpSignalSessionShutdown @ 0x180003EB0 (DwmpSignalSessionShutdown.c)
 *     __security_check_cookie @ 0x180004E60 (__security_check_cookie.c)
 *     memset_0 @ 0x18000580A (memset_0.c)
 */

__int64 CleanupOldDwmProcess(void)
{
  char restarted; // di
  int v1; // eax
  unsigned int v2; // ebx
  _unnamed_type_gDwmInitTelemetryAggregator_ *v3; // rcx
  HANDLE v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  wchar_t *v8; // rcx
  int v9; // eax
  wchar_t *v10; // rcx
  unsigned int v11; // edx
  _unnamed_type_gDwmInitTelemetryAggregator_ *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int16 v16; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int16 v17; // [rsp+5Ah] [rbp-AEh] BYREF
  DWORD ExitCode; // [rsp+5Ch] [rbp-ACh] BYREF
  int v19; // [rsp+60h] [rbp-A8h] BYREF
  DWORD v20; // [rsp+64h] [rbp-A4h] BYREF
  GUID *v21; // [rsp+68h] [rbp-A0h] BYREF
  GUID *v22; // [rsp+70h] [rbp-98h] BYREF
  struct _FILETIME ExitTime; // [rsp+78h] [rbp-90h] BYREF
  _DISPLAY_DEVICEW DisplayDevice; // [rsp+88h] [rbp-80h] BYREF
  LPCWSTR Strings[3]; // [rsp+3D8h] [rbp+2D0h] BYREF
  wchar_t Buffer[12]; // [rsp+3F0h] [rbp+2E8h] BYREF
  wchar_t v27[12]; // [rsp+408h] [rbp+300h] BYREF

  ExitCode = 0;
  ExitTime = 0LL;
  restarted = 1;
  v1 = WaitForDwmExit(&ExitCode, &ExitTime);
  v2 = v1;
  if ( v1 < 0 )
  {
    DoStackCaptureDirect(v1, 0x438u);
  }
  else
  {
    restarted = ShouldRestartSession(ExitTime);
    v4 = RegisterEventSourceW(0LL, L"Dwminit");
    if ( v4 )
    {
      memset_0(&DisplayDevice, 0, sizeof(DisplayDevice));
      v7 = StringCchPrintfW(Buffer, 11LL, L"0x%08x", ExitCode);
      v8 = Buffer;
      if ( v7 < 0 )
        v8 = 0LL;
      Strings[0] = v8;
      v9 = StringCchPrintfW(v27, 12LL, L"%i", (unsigned int)gDwmNumRetriesSoFar);
      v10 = v27;
      if ( v9 < 0 )
        v10 = 0LL;
      Strings[1] = v10;
      Strings[2] = (LPCWSTR)((unsigned __int64)DisplayDevice.DeviceString & -(__int64)(GetPrimaryDisplayDeviceInfo(&DisplayDevice) != 0));
      ReportEventW(v4, 2u, 0, 0x80020000, 0LL, 3u, 0, Strings, 0LL);
      DeregisterEventSource(v4);
    }
    ++gDwmInitTelemetryAggregator;
    ++HIDWORD(qword_18000B754);
    if ( SHIDWORD(qword_18000B754) > 10 )
    {
      _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(v3);
      HIDWORD(qword_18000B754) = 0;
    }
    if ( (unsigned int)dword_18000B000 > 5
      && (qword_18000B010 & 0x400000000000LL) != 0
      && (qword_18000B018 & 0x400000000000LL) == qword_18000B018 )
    {
      v16 = gSessionId;
      v17 = gBootId;
      v19 = gDwmNumRetriesSoFar;
      v20 = ExitCode;
      v21 = &gDwmInitTargetAppSessionGuid;
      v22 = &gDwmInitTelemetryActivityId;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
        (__int64)v3,
        byte_180008289,
        v5,
        v6,
        (__int64 *)&v22,
        (__int64)&v20,
        (__int64)&v19,
        (__int64 *)&v21,
        (__int64)&v17,
        (__int64)&v16);
    }
    v11 = (unsigned __int16)ExitCode | 0x80070000;
    if ( (int)ExitCode <= 0 )
      v11 = ExitCode;
    TraceLoggingWriteEtw(0, v11, gDwmNumRetriesSoFar);
  }
  if ( restarted )
  {
    DwmpSignalSessionShutdown();
    v2 = -2147467259;
    ++HIDWORD(qword_18000B74C);
    ++HIDWORD(qword_18000B754);
    if ( SHIDWORD(qword_18000B754) > 10 )
    {
      _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(v12);
      HIDWORD(qword_18000B754) = 0;
    }
    if ( (unsigned int)dword_18000B000 > 5
      && (qword_18000B010 & 0x400000000000LL) != 0
      && (qword_18000B018 & 0x400000000000LL) == qword_18000B018 )
    {
      v17 = gSessionId;
      v16 = gBootId;
      v20 = gDwmNumRetriesSoFar;
      v22 = &gDwmInitTargetAppSessionGuid;
      v19 = -2147467259;
      v21 = &gDwmInitTelemetryActivityId;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
        (__int64)v12,
        byte_1800082F8,
        v13,
        v14,
        (__int64 *)&v21,
        (__int64)&v19,
        (__int64)&v20,
        (__int64 *)&v22,
        (__int64)&v16,
        (__int64)&v17);
    }
    _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(v12);
    TraceLoggingWriteEtw(3, -2147467259, gDwmNumRetriesSoFar);
  }
  return v2;
}
