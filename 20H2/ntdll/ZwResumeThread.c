/*
 * XREFs of ZwResumeThread @ 0x18009DAF0
 * Callers:
 *     EtwpCreateEtwThread @ 0x180056020 (EtwpCreateEtwThread.c)
 *     RtlSetProcessDebugInformation @ 0x1800D8760 (RtlSetProcessDebugInformation.c)
 *     WerReportExceptionWorker @ 0x1800DDA80 (WerReportExceptionWorker.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F42E4 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlRemoteCall @ 0x1800FF260 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwResumeThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  NTSTATUS result; // eax

  result = 82;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
