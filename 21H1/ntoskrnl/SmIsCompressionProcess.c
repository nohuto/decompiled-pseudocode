/*
 * XREFs of SmIsCompressionProcess @ 0x1402FDDD0
 * Callers:
 *     ExpGetProcessInformation @ 0x140629910 (ExpGetProcessInformation.c)
 *     PsShutdownSystem @ 0x140906374 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x140906778 (PsWaitForAllProcesses.c)
 *     PspFreezeProcessWorker @ 0x140906A40 (PspFreezeProcessWorker.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SmIsCompressionProcess(PVOID a1)
{
  return a1 == qword_140D24158;
}
