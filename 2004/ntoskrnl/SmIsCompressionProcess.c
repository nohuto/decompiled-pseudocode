/*
 * XREFs of SmIsCompressionProcess @ 0x14033B110
 * Callers:
 *     ExpGetProcessInformation @ 0x1405F43A0 (ExpGetProcessInformation.c)
 *     PsShutdownSystem @ 0x140907624 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x140907A28 (PsWaitForAllProcesses.c)
 *     PspFreezeProcessWorker @ 0x140907CF0 (PspFreezeProcessWorker.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SmIsCompressionProcess(PVOID a1)
{
  return a1 == qword_140D24158;
}
