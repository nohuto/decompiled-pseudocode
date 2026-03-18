/*
 * XREFs of EtwpCancelStackWalkApc @ 0x140631280
 * Callers:
 *     <none>
 * Callees:
 *     EtwpFinalizePendingApc @ 0x14063129C (EtwpFinalizePendingApc.c)
 */

__int64 __fastcall EtwpCancelStackWalkApc(__int64 a1)
{
  return EtwpFinalizePendingApc(*(_QWORD *)(a1 + 56), a1);
}
