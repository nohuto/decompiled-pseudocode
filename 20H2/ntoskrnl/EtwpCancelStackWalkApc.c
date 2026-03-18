/*
 * XREFs of EtwpCancelStackWalkApc @ 0x1405A5160
 * Callers:
 *     <none>
 * Callees:
 *     EtwpFinalizePendingApc @ 0x1405A517C (EtwpFinalizePendingApc.c)
 */

__int64 __fastcall EtwpCancelStackWalkApc(__int64 a1)
{
  return EtwpFinalizePendingApc(*(_QWORD *)(a1 + 56), a1);
}
