/*
 * XREFs of SmIsCompressionProcess @ 0x14030D9E8
 * Callers:
 *     ExpGetProcessInformation @ 0x140611F60 (ExpGetProcessInformation.c)
 *     PsShutdownSystem @ 0x14090D244 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x14090D648 (PsWaitForAllProcesses.c)
 *     PspFreezeProcessWorker @ 0x14090D910 (PspFreezeProcessWorker.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SmIsCompressionProcess(PVOID a1)
{
  return a1 == qword_140D24158;
}
