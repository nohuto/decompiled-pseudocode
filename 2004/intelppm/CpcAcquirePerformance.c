/*
 * XREFs of CpcAcquirePerformance @ 0x1C0008E10
 * Callers:
 *     <none>
 * Callees:
 *     CpcSegregateCommandActuation @ 0x1C00090A4 (CpcSegregateCommandActuation.c)
 */

__int64 __fastcall CpcAcquirePerformance(__int64 a1)
{
  KeClearEvent(&Event);
  return CpcSegregateCommandActuation(CpcSubspaceAcquirePerformance, a1, 0LL);
}
