/*
 * XREFs of ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002E80
 * Callers:
 *     DwmpCreateSessionProcess @ 0x180003360 (DwmpCreateSessionProcess.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001090 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ @ 0x180001464 (-ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ.c)
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x1800015EC (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?WaitForLsa@@YAJXZ @ 0x180001B38 (-WaitForLsa@@YAJXZ.c)
 *     ?MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ @ 0x180001CFC (-MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ.c)
 *     ?LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z @ 0x18000205C (-LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x180002AC8 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x180003BD0 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     DwmpSignalSessionShutdown @ 0x180003EB0 (DwmpSignalSessionShutdown.c)
 *     __security_check_cookie @ 0x180004E60 (__security_check_cookie.c)
 *     memset_0 @ 0x18000580A (memset_0.c)
 *     IsWaitForInputIdlePresent @ 0x1800059A8 (IsWaitForInputIdlePresent.c)
 *     IsDwmLockScreenUpdatesPresent @ 0x180005B68 (IsDwmLockScreenUpdatesPresent.c)
 *     IsDwmMonitorExtDwmProcessCreatedPresent @ 0x180005CD4 (IsDwmMonitorExtDwmProcessCreatedPresent.c)
 */

__int64 __fastcall DwmpCreateSessionProcessWorker(PVOID Parameter)
{
  int v1; // esi
  HANDLE v2; // rdi
  signed int v3; // ebx
  int v4; // eax
  unsigned int v5; // edx
  int v6; // eax
  signed int LastError; // eax
  int v8; // ecx
  _unnamed_type_gDwmInitTelemetryAggregator_ *v9; // rcx
  unsigned __int16 v11; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 v12; // [rsp+62h] [rbp-9Eh] BYREF
  HANDLE hToken; // [rsp+68h] [rbp-98h] BYREF
  struct _PROCESS_INFORMATION ProcessInformation; // [rsp+70h] [rbp-90h] BYREF
  struct _STARTUPINFOW StartupInfo; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+100h] [rbp+0h] BYREF
  GUID *v17; // [rsp+120h] [rbp+20h]
  __int64 v18; // [rsp+128h] [rbp+28h]
  HANDLE *p_hToken; // [rsp+130h] [rbp+30h]
  __int64 v20; // [rsp+138h] [rbp+38h]
  GUID *v21; // [rsp+140h] [rbp+40h]
  __int64 v22; // [rsp+148h] [rbp+48h]
  unsigned __int16 *v23; // [rsp+150h] [rbp+50h]
  __int64 v24; // [rsp+158h] [rbp+58h]
  unsigned __int16 *v25; // [rsp+160h] [rbp+60h]
  __int64 v26; // [rsp+168h] [rbp+68h]

  v1 = (int)Parameter;
  memset(&ProcessInformation, 0, sizeof(ProcessInformation));
  memset_0(&StartupInfo, 0, sizeof(StartupInfo));
  StartupInfo.cb = 104;
  StartupInfo.lpDesktop = L"Winsta0\\Default";
  hToken = 0LL;
  v2 = 0LL;
  AcquireSRWLockExclusive(&gDwmStateLock);
  dword_18000B768 = GetCurrentThreadId();
  if ( v1 && (!ghDwmProcess || GetProcessId(ghDwmProcess) != v1) )
  {
    v3 = 1;
    goto LABEL_34;
  }
  if ( ghDwmProcess )
  {
    v4 = CleanupOldDwmProcess();
    v3 = v4;
    if ( v4 < 0 )
    {
      v5 = 1220;
LABEL_32:
      v8 = v4;
LABEL_33:
      DoStackCaptureDirect(v8, v5);
      goto LABEL_34;
    }
  }
  if ( gDwmFirstLaunch )
  {
    v4 = WaitForLsa();
    v3 = v4;
    if ( v4 < 0 )
    {
      v5 = 1235;
      goto LABEL_32;
    }
    if ( (unsigned __int8)IsDwmMonitorExtDwmProcessCreatedPresent() )
      DwmMonitorExtInitialize();
  }
  if ( (unsigned __int8)IsDwmLockScreenUpdatesPresent() )
    DwmLockScreenUpdates(1LL);
  v4 = MapDwmVirtualAccountAndAdjustPrivileges();
  v3 = v4;
  if ( v4 < 0 )
  {
    v5 = 1253;
    goto LABEL_32;
  }
  v6 = LogonDwmAccountAndSetTokenIntegrityLevel(&hToken);
  v3 = v6;
  if ( v6 < 0 )
  {
    DoStackCaptureDirect(v6, 0x4E8u);
    v2 = hToken;
    goto LABEL_34;
  }
  SetLastError(0);
  v2 = hToken;
  if ( !CreateProcessAsUserW(
          hToken,
          L"dwm.exe",
          0LL,
          0LL,
          0LL,
          0,
          0x4000420u,
          0LL,
          0LL,
          &StartupInfo,
          &ProcessInformation) )
  {
    LastError = GetLastError();
    v5 = 1276;
    v3 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v3 = LastError;
    if ( v3 >= 0 )
      v3 = -2003304445;
    v8 = v3;
    goto LABEL_33;
  }
  if ( ProcessInformation.hProcess )
  {
    if ( (unsigned __int8)IsWaitForInputIdlePresent() )
      WaitForInputIdle(ProcessInformation.hProcess, 0xFFFFFFFF);
    if ( WaitForSingleObject(ProcessInformation.hProcess, 0) )
    {
      ghDwmProcess = ProcessInformation.hProcess;
      ProcessInformation.hProcess = 0LL;
      if ( (unsigned __int8)IsDwmMonitorExtDwmProcessCreatedPresent() )
        DwmMonitorExtDwmProcessCreated(ghDwmProcess);
    }
    else
    {
      v3 = -2147467259;
      TraceLoggingWriteEtw(4, -2147467259, 0);
      DwmpSignalSessionShutdown();
    }
  }
LABEL_34:
  gDwmFirstLaunch = 0;
  if ( ProcessInformation.hProcess )
  {
    CloseHandle(ProcessInformation.hProcess);
    ProcessInformation.hProcess = 0LL;
  }
  if ( ProcessInformation.hThread )
  {
    CloseHandle(ProcessInformation.hThread);
    ProcessInformation.hThread = 0LL;
  }
  if ( v2 )
    CloseHandle(v2);
  if ( (unsigned __int8)IsDwmLockScreenUpdatesPresent() )
    DwmLockScreenUpdates(0LL);
  if ( v3 < 0 )
  {
    LODWORD(qword_18000B754) = qword_18000B754 + 1;
    ++HIDWORD(qword_18000B754);
    if ( SHIDWORD(qword_18000B754) > 10 )
    {
      _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(v9);
      HIDWORD(qword_18000B754) = 0;
    }
    if ( (unsigned int)dword_18000B000 > 5
      && (qword_18000B010 & 0x400000000000LL) != 0
      && (qword_18000B018 & 0x400000000000LL) == qword_18000B018 )
    {
      v11 = gSessionId;
      v12 = gBootId;
      LODWORD(hToken) = v3;
      v25 = &v11;
      v23 = &v12;
      v21 = &gDwmInitTargetAppSessionGuid;
      p_hToken = &hToken;
      v17 = &gDwmInitTelemetryActivityId;
      v26 = 2LL;
      v24 = 2LL;
      v22 = 16LL;
      v20 = 4LL;
      v18 = 16LL;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_18000B000,
        (unsigned __int8 *)dword_18000861C,
        0LL,
        0LL,
        7u,
        &v16);
    }
    _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(v9);
    TraceLoggingWriteEtw(2, v3, 0);
  }
  dword_18000B768 = 0;
  ReleaseSRWLockExclusive(&gDwmStateLock);
  if ( v3 < 0 )
  {
    DwmpSignalSessionShutdown();
    DoStackCaptureDirect(v3, 0x58Du);
  }
  TraceLoggingWriteEtw(10, v3, v1);
  return 0LL;
}
