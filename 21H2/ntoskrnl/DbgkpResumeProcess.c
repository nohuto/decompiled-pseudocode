/*
 * XREFs of DbgkpResumeProcess @ 0x14092AAA4
 * Callers:
 *     PsDispatchIumService @ 0x1405E1764 (PsDispatchIumService.c)
 * Callees:
 *     PsThawMultiProcess @ 0x140257280 (PsThawMultiProcess.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 */

void __fastcall DbgkpResumeProcess(ULONG_PTR a1)
{
  PsThawMultiProcess(a1, 0LL, 1u);
  KeLeaveCriticalRegion();
}
