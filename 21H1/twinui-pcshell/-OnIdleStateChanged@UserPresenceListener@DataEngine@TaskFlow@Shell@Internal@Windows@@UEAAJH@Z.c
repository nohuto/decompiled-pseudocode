/*
 * XREFs of ?OnIdleStateChanged@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJH@Z @ 0x180218700
 * Callers:
 *     <none>
 * Callees:
 *     ??1ListenerTelemetrySignalTracker@@QEAA@XZ @ 0x1800872FC (--1ListenerTelemetrySignalTracker@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@UIUserPresenceDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIUserPresenceDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180217E9C (--$GetActivationFactory@UIUserPresenceDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@w.c)
 *     ??$UserPresenceDataCreated@AEAW4UserPresenceState@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_J@TaskFlowDataEngineTelemetry@@SAXAEAW4UserPresenceState@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_J@Z @ 0x1802180B0 (--$UserPresenceDataCreated@AEAW4UserPresenceState@DataEngine@TaskFlow@Shell@Internal@Windows@@AE.c)
 *     ??$UserPresenceIdleState@AEAH@TaskFlowDataEngineTelemetry@@SAXAEAH@Z @ 0x1802182D4 (--$UserPresenceIdleState@AEAH@TaskFlowDataEngineTelemetry@@SAXAEAH@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::OnIdleStateChanged(
        Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener *this,
        int a2)
{
  __int64 v4; // rdx
  unsigned int v5; // r8d
  struct _FILETIME v6; // rdi
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  const char *v10; // r9
  __int64 result; // rax
  __int64 v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v13; // [rsp+38h] [rbp-30h] BYREF
  struct _FILETIME v14; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v16; // [rsp+78h] [rbp+10h] BYREF
  int v17; // [rsp+80h] [rbp+18h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+88h] [rbp+20h] BYREF

  v16 = a2;
  LOWORD(v17) = 0;
  TaskFlowDataEngineTelemetry::UserPresenceIdleState<int &>(&v16);
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v6 = SystemTimeAsFileTime;
  v14 = SystemTimeAsFileTime;
  try
  {
    wil::GetActivationFactory<Windows::Internal::Shell::TaskFlow::DataEngine::IUserPresenceDataFactory>(
      (const WCHAR *)&v13,
      v4,
      v5);
    SystemTimeAsFileTime.dwLowDateTime = a2 != 0;
    v12 = 0LL;
    v7 = *v13;
    v12 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64 *, bool, struct _FILETIME, __int64 *))(v7 + 48))(v13, a2 != 0, v6, &v12);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        109LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\userpresencelistener.cpp",
        (const char *)(unsigned int)v8);
    TaskFlowDataEngineTelemetry::UserPresenceDataCreated<enum Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceState &,__int64 &>(
      (int *)&SystemTimeAsFileTime,
      (__int64 *)&v14);
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 7) + 64LL))(*((_QWORD *)this + 7), v12);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        113LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\userpresencelistener.cpp",
        (const char *)(unsigned int)v9);
    LOBYTE(v17) = 1;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v13 )
      (*(void (__fastcall **)(__int64 *))(*v13 + 16))(v13);
    ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)&v17);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x76,
                           (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\userpresencelistener.cpp",
                           v10);
  }
  return result;
}
