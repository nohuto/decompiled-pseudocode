/*
 * XREFs of NtTerminateThread @ 0x18009DB10
 * Callers:
 *     RtlExitUserThread @ 0x180054640 (RtlExitUserThread.c)
 *     EtwpCreateEtwThread @ 0x180056020 (EtwpCreateEtwThread.c)
 *     RtlExitUserProcess @ 0x18005D9D0 (RtlExitUserProcess.c)
 *     LdrpGenericExceptionFilter @ 0x1800D57DC (LdrpGenericExceptionFilter.c)
 *     RtlQueryProcessDebugInformation @ 0x1800D7B00 (RtlQueryProcessDebugInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800D8760 (RtlSetProcessDebugInformation.c)
 *     WerReportExceptionWorker @ 0x1800DDA80 (WerReportExceptionWorker.c)
 *     RtlAssert @ 0x1800ED9A0 (RtlAssert.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F42E4 (RtlpHeapPerformCrossProcessQuery.c)
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
