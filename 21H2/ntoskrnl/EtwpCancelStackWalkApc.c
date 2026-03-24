/*
 * XREFs of EtwpCancelStackWalkApc @ 0x1405A6B90
 * Callers:
 *     <none>
 * Callees:
 *     EtwpFinalizePendingApc @ 0x1405A6BAC (EtwpFinalizePendingApc.c)
 */

__int64 __fastcall EtwpCancelStackWalkApc(__int64 a1)
{
  return EtwpFinalizePendingApc(*(_QWORD *)(a1 + 56), a1);
}
