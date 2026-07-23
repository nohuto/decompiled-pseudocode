/*
 * XREFs of ZwTerminateProcess @ 0x18009D390
 * Callers:
 *     LdrpInitializeThread @ 0x180017738 (LdrpInitializeThread.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpxLookupFunctionTable @ 0x180032F40 (RtlpxLookupFunctionTable.c)
 *     RtlUserThreadStart @ 0x180052630 (RtlUserThreadStart.c)
 *     RtlExitUserProcess @ 0x18005D980 (RtlExitUserProcess.c)
 *     RtlpWaitOnCriticalSection @ 0x180063370 (RtlpWaitOnCriticalSection.c)
 *     LdrpLoadShimEngine @ 0x18006B7E4 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x18006BA84 (LdrpInitializeShimDllDependencies.c)
 *     _LdrpInitialize @ 0x180074B8C (_LdrpInitialize.c)
 *     UninitUser32Proc @ 0x18008BF60 (UninitUser32Proc.c)
 *     __raise_securityfailure @ 0x18008C264 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x18008C290 (__report_gsfailure.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CB4F0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpCompleteProcessCloning @ 0x1800D4A18 (LdrpCompleteProcessCloning.c)
 *     LdrpFatalExceptionFilter @ 0x1800D5360 (LdrpFatalExceptionFilter.c)
 *     LdrpGenericExceptionFilter @ 0x1800D543C (LdrpGenericExceptionFilter.c)
 *     RtlpProcessReflectionStartup @ 0x1800D5FF0 (RtlpProcessReflectionStartup.c)
 *     RtlReportExceptionEx @ 0x1800DCA20 (RtlReportExceptionEx.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x1800DD87C (WerpBreakIntoDebuggerIfPresent.c)
 *     RtlAssert @ 0x1800ED490 (RtlAssert.c)
 *     RtlReportFatalFailure @ 0x1800FF190 (RtlReportFatalFailure.c)
 *     TppTerminateProcess @ 0x1801121D0 (TppTerminateProcess.c)
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
