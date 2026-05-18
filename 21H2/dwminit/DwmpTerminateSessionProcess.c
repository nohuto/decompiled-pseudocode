/*
 * XREFs of DwmpTerminateSessionProcess @ 0x18000A560
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$01@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$01@@6@Z @ 0x1800011F0 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U1@U-$_.c)
 *     ?ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ @ 0x1800081DC (-ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ.c)
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x180008364 (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?IsRunningInWininit@@YA_NXZ @ 0x180008464 (-IsRunningInWininit@@YA_NXZ.c)
 *     ?UnmapDwmVirtualAccount@@YAJXZ @ 0x180008D20 (-UnmapDwmVirtualAccount@@YAJXZ.c)
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x1800093D8 (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000AA7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     DwmpRequestProcessShutdown @ 0x18000AB90 (DwmpRequestProcessShutdown.c)
 *     IsDwmMonitorExtDwmProcessCreatedPresent @ 0x18000D570 (IsDwmMonitorExtDwmProcessCreatedPresent.c)
 */

__int64 __fastcall DwmpTerminateSessionProcess(int a1)
{
  int v2; // eax
  unsigned int v3; // ecx
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _unnamed_type_gDwmInitTelemetryAggregator_ *v10; // rcx
  void *v12; // [rsp+28h] [rbp-58h]
  DWORD ExitCode; // [rsp+60h] [rbp-20h] BYREF
  int v14; // [rsp+64h] [rbp-1Ch] BYREF
  unsigned int v15; // [rsp+68h] [rbp-18h] BYREF
  GUID *v16; // [rsp+70h] [rbp-10h] BYREF
  GUID *v17; // [rsp+78h] [rbp-8h] BYREF
  bool v18; // [rsp+A8h] [rbp+28h] BYREF
  unsigned __int16 v19; // [rsp+B0h] [rbp+30h] BYREF
  unsigned __int16 v20; // [rsp+B8h] [rbp+38h] BYREF

  ExitCode = 0;
  AcquireSRWLockExclusive(&gDwmStateLock);
  dword_180014B68 = GetCurrentThreadId();
  if ( ghDwmProcess )
  {
    v2 = DwmpRequestProcessShutdown();
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_180010828, 2u, v2, 0x692u, v12);
    WaitForDwmExit(&ExitCode, 0LL);
  }
  v4 = UnmapDwmVirtualAccount();
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_180010828, 2u, v4, 0x697u, v12);
  }
  else if ( (unsigned __int8)IsDwmMonitorExtDwmProcessCreatedPresent() )
  {
    DwmMonitorExtCleanup();
  }
  dword_180014B68 = 0;
  ReleaseSRWLockExclusive(&gDwmStateLock);
  if ( (unsigned int)dword_180014000 > 5
    && (qword_180014010 & 0x400000000000LL) != 0
    && (qword_180014018 & 0x400000000000LL) == qword_180014018 )
  {
    v19 = gSessionId;
    v20 = gBootId;
    v16 = &gDwmInitTargetAppSessionGuid;
    v18 = IsRunningInWininit();
    v14 = a1;
    v17 = &gDwmInitTelemetryActivityId;
    v15 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
      v7,
      byte_18001104F,
      v8,
      v9,
      (__int64 *)&v17,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v18,
      (__int64 *)&v16,
      (__int64)&v20,
      (__int64)&v19);
  }
  TraceLoggingWriteEtw(9, v6, 0);
  _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(v10);
  return v6;
}
