/*
 * XREFs of CpcAcquirePerformance @ 0x1C00045A0
 * Callers:
 *     <none>
 * Callees:
 *     CpcSegregateCommandActuation @ 0x1C00047E0 (CpcSegregateCommandActuation.c)
 */

__int64 __fastcall CpcAcquirePerformance(__int64 a1)
{
  KeClearEvent(&Event);
  return CpcSegregateCommandActuation(CpcSubspaceAcquirePerformance, a1, 0LL);
}
