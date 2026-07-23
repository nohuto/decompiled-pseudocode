/*
 * XREFs of _ZwTerminateProcess@8 @ 0x4B2F2C40
 * Callers:
 *     _LdrpLoadShimEngine@4 @ 0x4B2A6525 (_LdrpLoadShimEngine@4.c)
 *     _LdrpInitializeShimDllDependencies@0 @ 0x4B2A672F (_LdrpInitializeShimDllDependencies@0.c)
 *     _LdrpGetDllPath@28 @ 0x4B2B27D0 (_LdrpGetDllPath@28.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _LdrpInitializeThread@4 @ 0x4B2CDA29 (_LdrpInitializeThread@4.c)
 *     _RtlExitUserProcess@4 @ 0x4B2DD5D0 (_RtlExitUserProcess@4.c)
 *     _RtlpWaitOnCriticalSection@8 @ 0x4B2DF4A0 (_RtlpWaitOnCriticalSection@8.c)
 *     __LdrpInitialize@8 @ 0x4B2E6327 (__LdrpInitialize@8.c)
 *     ___RtlUserThreadStart@8 @ 0x4B2E7A1F (___RtlUserThreadStart@8.c)
 *     _RtlExitUserThread@4 @ 0x4B2EB460 (_RtlExitUserThread@4.c)
 *     _UninitUser32Proc@0 @ 0x4B2F4820 (_UninitUser32Proc@0.c)
 *     ___raise_securityfailure @ 0x4B2F4B30 (___raise_securityfailure.c)
 *     ___report_gsfailure @ 0x4B2F4B4B (___report_gsfailure.c)
 *     _LdrAppxHandleIntegrityFailure@4 @ 0x4B32C290 (_LdrAppxHandleIntegrityFailure@4.c)
 *     _LdrpCompleteProcessCloning@4 @ 0x4B333C39 (_LdrpCompleteProcessCloning@4.c)
 *     _LdrpFatalExceptionFilter@4 @ 0x4B3348A9 (_LdrpFatalExceptionFilter@4.c)
 *     _LdrpGenericExceptionFilter@8 @ 0x4B334947 (_LdrpGenericExceptionFilter@8.c)
 *     _RtlpProcessReflectionStartup@4 @ 0x4B3354D0 (_RtlpProcessReflectionStartup@4.c)
 *     _RtlReportExceptionEx@20 @ 0x4B33A550 (_RtlReportExceptionEx@20.c)
 *     _WerpBreakIntoDebuggerIfPresent@12 @ 0x4B33AF53 (_WerpBreakIntoDebuggerIfPresent@12.c)
 *     _RtlAssert@16 @ 0x4B34FBC0 (_RtlAssert@16.c)
 *     _RtlReportFatalFailure@4 @ 0x4B366A5D (_RtlReportFatalFailure@4.c)
 *     _TppTerminateProcess@4 @ 0x4B38492C (_TppTerminateProcess@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  return Wow64SystemServiceCall();
}
