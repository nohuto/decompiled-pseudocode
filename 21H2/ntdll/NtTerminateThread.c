/*
 * XREFs of NtTerminateThread @ 0x18009E0A0
 * Callers:
 *     EtwpCreateEtwThread @ 0x180048710 (EtwpCreateEtwThread.c)
 *     RtlExitUserThread @ 0x18004EC30 (RtlExitUserThread.c)
 *     RtlExitUserProcess @ 0x18005EF00 (RtlExitUserProcess.c)
 *     LdrpGenericExceptionFilter @ 0x1800D558C (LdrpGenericExceptionFilter.c)
 *     RtlQueryProcessDebugInformation @ 0x1800D78B0 (RtlQueryProcessDebugInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800D8510 (RtlSetProcessDebugInformation.c)
 *     WerReportExceptionWorker @ 0x1800DD830 (WerReportExceptionWorker.c)
 *     RtlAssert @ 0x1800ED830 (RtlAssert.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F4174 (RtlpHeapPerformCrossProcessQuery.c)
 * Callees:
 *     <none>
 */

__int64 NtTerminateThread()
{
  __int64 result; // rax

  result = 83LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
