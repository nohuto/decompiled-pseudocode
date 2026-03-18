/*
 * XREFs of NtUserCreateActivationGroup @ 0x1C012FC20
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C004B600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C004B650 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C004B870 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     EnterSharedCritAvoidingDitHitTestHazard @ 0x1C004E230 (EnterSharedCritAvoidingDitHitTestHazard.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserCreateActivationGroup(__int64 a1)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _BYTE v10[32]; // [rsp+20h] [rbp-38h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v10, 0);
  EnterSharedCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v10, v2, v3, v4);
  EtwTraceAcquiredSharedUserCrit();
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return 0LL;
}
