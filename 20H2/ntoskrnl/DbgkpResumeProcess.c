/*
 * XREFs of DbgkpResumeProcess @ 0x14088A5D8
 * Callers:
 *     PsDispatchIumService @ 0x1405812E4 (PsDispatchIumService.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     PsThawProcess @ 0x14071C6B0 (PsThawProcess.c)
 */

void __fastcall DbgkpResumeProcess(__int64 a1)
{
  PsThawProcess(a1, 0);
  KeLeaveCriticalRegion();
}
