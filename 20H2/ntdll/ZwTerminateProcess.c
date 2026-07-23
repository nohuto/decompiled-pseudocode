/*
 * XREFs of ZwTerminateProcess @ 0x18009D630
 * Callers:
 *     LdrpInitializeThread @ 0x180017738 (LdrpInitializeThread.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpxLookupFunctionTable @ 0x180032F40 (RtlpxLookupFunctionTable.c)
 *     RtlUserThreadStart @ 0x180052680 (RtlUserThreadStart.c)
 *     RtlExitUserProcess @ 0x18005D9D0 (RtlExitUserProcess.c)
 *     RtlpWaitOnCriticalSection @ 0x180063480 (RtlpWaitOnCriticalSection.c)
 *     LdrpLoadShimEngine @ 0x18006B8F4 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x18006BB94 (LdrpInitializeShimDllDependencies.c)
 *     _LdrpInitialize @ 0x180074C8C (_LdrpInitialize.c)
 *     UninitUser32Proc @ 0x18008C060 (UninitUser32Proc.c)
 *     __raise_securityfailure @ 0x18008C364 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x18008C390 (__report_gsfailure.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CB6D0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpCompleteProcessCloning @ 0x1800D4DB8 (LdrpCompleteProcessCloning.c)
 *     LdrpFatalExceptionFilter @ 0x1800D5700 (LdrpFatalExceptionFilter.c)
 *     LdrpGenericExceptionFilter @ 0x1800D57DC (LdrpGenericExceptionFilter.c)
 *     RtlpProcessReflectionStartup @ 0x1800D6390 (RtlpProcessReflectionStartup.c)
 *     RtlReportExceptionEx @ 0x1800DCDC0 (RtlReportExceptionEx.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x1800DDC1C (WerpBreakIntoDebuggerIfPresent.c)
 *     RtlAssert @ 0x1800ED9A0 (RtlAssert.c)
 *     RtlReportFatalFailure @ 0x1800FF6A0 (RtlReportFatalFailure.c)
 *     TppTerminateProcess @ 0x1801126E0 (TppTerminateProcess.c)
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
