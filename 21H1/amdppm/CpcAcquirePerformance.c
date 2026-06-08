/*
 * XREFs of CpcAcquirePerformance @ 0x1C0003C20
 * Callers:
 *     <none>
 * Callees:
 *     CpcSegregateCommandActuation @ 0x1C0003E54 (CpcSegregateCommandActuation.c)
 */

__int64 __fastcall CpcAcquirePerformance(__int64 a1)
{
  KeClearEvent(&Event);
  return CpcSegregateCommandActuation(CpcSubspaceAcquirePerformance, a1, 0LL);
}
