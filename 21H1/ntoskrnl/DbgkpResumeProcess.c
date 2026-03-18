/*
 * XREFs of DbgkpResumeProcess @ 0x140883768
 * Callers:
 *     PsDispatchIumService @ 0x14057D274 (PsDispatchIumService.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     PsThawProcess @ 0x1406CF790 (PsThawProcess.c)
 */

void __fastcall DbgkpResumeProcess(__int64 a1)
{
  PsThawProcess(a1, 0);
  KeLeaveCriticalRegion();
}
