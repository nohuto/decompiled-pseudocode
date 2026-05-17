/*
 * XREFs of ZwResumeThread @ 0x18009D850
 * Callers:
 *     EtwpCreateEtwThread @ 0x180055FD0 (EtwpCreateEtwThread.c)
 *     RtlSetProcessDebugInformation @ 0x1800D83C0 (RtlSetProcessDebugInformation.c)
 *     WerReportExceptionWorker @ 0x1800DD6E0 (WerReportExceptionWorker.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F3DD4 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlRemoteCall @ 0x1800FED50 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

__int64 ZwResumeThread()
{
  __int64 result; // rax

  result = 82LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
