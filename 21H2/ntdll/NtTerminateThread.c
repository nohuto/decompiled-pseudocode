/*
 * XREFs of NtTerminateThread @ 0x18009E060
 * Callers:
 *     EtwpCreateEtwThread @ 0x180048710 (EtwpCreateEtwThread.c)
 *     RtlExitUserThread @ 0x18004EC30 (RtlExitUserThread.c)
 *     RtlExitUserProcess @ 0x18005EF00 (RtlExitUserProcess.c)
 *     LdrpGenericExceptionFilter @ 0x1800D554C (LdrpGenericExceptionFilter.c)
 *     RtlQueryProcessDebugInformation @ 0x1800D7870 (RtlQueryProcessDebugInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800D84D0 (RtlSetProcessDebugInformation.c)
 *     WerReportExceptionWorker @ 0x1800DD7F0 (WerReportExceptionWorker.c)
 *     RtlAssert @ 0x1800ED7F0 (RtlAssert.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F4134 (RtlpHeapPerformCrossProcessQuery.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  NTSTATUS result; // eax

  result = 83;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
