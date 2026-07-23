/*
 * XREFs of ZwTerminateProcess @ 0x18009DB80
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
 *     LdrAppxHandleIntegrityFailure @ 0x1800CB650 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpCompleteProcessCloning @ 0x1800D4B28 (LdrpCompleteProcessCloning.c)
 *     LdrpFatalExceptionFilter @ 0x1800D5470 (LdrpFatalExceptionFilter.c)
 *     LdrpGenericExceptionFilter @ 0x1800D554C (LdrpGenericExceptionFilter.c)
 *     RtlpProcessReflectionStartup @ 0x1800D6100 (RtlpProcessReflectionStartup.c)
 *     RtlReportExceptionEx @ 0x1800DCB30 (RtlReportExceptionEx.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x1800DD98C (WerpBreakIntoDebuggerIfPresent.c)
 *     RtlAssert @ 0x1800ED7F0 (RtlAssert.c)
 *     RtlReportFatalFailure @ 0x1800FF500 (RtlReportFatalFailure.c)
 *     TppTerminateProcess @ 0x180112540 (TppTerminateProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  NTSTATUS result; // eax

  result = 44;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
