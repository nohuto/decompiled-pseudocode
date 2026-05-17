/*
 * XREFs of ZwResumeThread @ 0x18009E080
 * Callers:
 *     EtwpCreateEtwThread @ 0x180048710 (EtwpCreateEtwThread.c)
 *     RtlSetProcessDebugInformation @ 0x1800D8510 (RtlSetProcessDebugInformation.c)
 *     WerReportExceptionWorker @ 0x1800DD830 (WerReportExceptionWorker.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F4174 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlRemoteCall @ 0x1800FF100 (RtlRemoteCall.c)
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
