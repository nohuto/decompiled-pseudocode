/*
 * XREFs of ZwTerminateProcess @ 0x18009DBC0
 * Callers:
 *     LdrpInitializeThread @ 0x180017738 (LdrpInitializeThread.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpxLookupFunctionTable @ 0x180032F40 (RtlpxLookupFunctionTable.c)
 *     RtlUserThreadStart @ 0x18004CC70 (RtlUserThreadStart.c)
 *     RtlExitUserProcess @ 0x18005EF00 (RtlExitUserProcess.c)
 *     RtlpWaitOnCriticalSection @ 0x180064970 (RtlpWaitOnCriticalSection.c)
 *     LdrpLoadShimEngine @ 0x18006C924 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x18006CBC4 (LdrpInitializeShimDllDependencies.c)
 *     _LdrpInitialize @ 0x180075CBC (_LdrpInitialize.c)
 *     UninitUser32Proc @ 0x18008C660 (UninitUser32Proc.c)
 *     __raise_securityfailure @ 0x18008C964 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x18008C990 (__report_gsfailure.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CB690 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpCompleteProcessCloning @ 0x1800D4B68 (LdrpCompleteProcessCloning.c)
 *     LdrpFatalExceptionFilter @ 0x1800D54B0 (LdrpFatalExceptionFilter.c)
 *     LdrpGenericExceptionFilter @ 0x1800D558C (LdrpGenericExceptionFilter.c)
 *     RtlpProcessReflectionStartup @ 0x1800D6140 (RtlpProcessReflectionStartup.c)
 *     RtlReportExceptionEx @ 0x1800DCB70 (RtlReportExceptionEx.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x1800DD9CC (WerpBreakIntoDebuggerIfPresent.c)
 *     RtlAssert @ 0x1800ED830 (RtlAssert.c)
 *     RtlReportFatalFailure @ 0x1800FF540 (RtlReportFatalFailure.c)
 *     TppTerminateProcess @ 0x180112580 (TppTerminateProcess.c)
 * Callees:
 *     <none>
 */

__int64 ZwTerminateProcess()
{
  __int64 result; // rax

  result = 44LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
