/*
 * XREFs of NtUserCreateActivationGroup @ 0x1C0137F60
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCritAvoidingDitHitTestHazard @ 0x1C006F7C0 (EnterSharedCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C008A600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C008A650 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C008A870 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserCreateActivationGroup(__int64 a1)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx
  _BYTE v5[32]; // [rsp+20h] [rbp-38h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v5, 0);
  EnterSharedCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v5);
  EtwTraceAcquiredSharedUserCrit(v2);
  UserSessionSwitchLeaveCrit(v3);
  return 0LL;
}
