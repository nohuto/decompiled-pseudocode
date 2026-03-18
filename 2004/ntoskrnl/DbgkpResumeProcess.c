/*
 * XREFs of DbgkpResumeProcess @ 0x140884A88
 * Callers:
 *     PsDispatchIumService @ 0x14057D8B4 (PsDispatchIumService.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     PsThawProcess @ 0x1406F0A90 (PsThawProcess.c)
 */

void __fastcall DbgkpResumeProcess(__int64 a1)
{
  PsThawProcess(a1, 0);
  KeLeaveCriticalRegion();
}
