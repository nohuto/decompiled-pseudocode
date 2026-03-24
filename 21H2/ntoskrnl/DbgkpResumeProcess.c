/*
 * XREFs of DbgkpResumeProcess @ 0x140887B78
 * Callers:
 *     PsDispatchIumService @ 0x140582CF4 (PsDispatchIumService.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     PsThawProcess @ 0x14067D0F8 (PsThawProcess.c)
 */

void __fastcall DbgkpResumeProcess(ULONG_PTR a1)
{
  PsThawProcess(a1, 0);
  KeLeaveCriticalRegion();
}
