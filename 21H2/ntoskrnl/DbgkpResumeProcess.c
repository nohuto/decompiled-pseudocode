/*
 * XREFs of DbgkpResumeProcess @ 0x140887CD8
 * Callers:
 *     PsDispatchIumService @ 0x140582F24 (PsDispatchIumService.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     PsThawProcess @ 0x1406001EC (PsThawProcess.c)
 */

void __fastcall DbgkpResumeProcess(ULONG_PTR a1)
{
  PsThawProcess(a1, 0);
  KeLeaveCriticalRegion();
}
