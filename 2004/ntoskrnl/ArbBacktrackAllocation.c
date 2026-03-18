/*
 * XREFs of ArbBacktrackAllocation @ 0x1407BF500
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteRange @ 0x14074E190 (RtlDeleteRange.c)
 */

__int64 __fastcall ArbBacktrackAllocation(__int64 a1, unsigned __int64 *a2)
{
  return RtlDeleteRange(*(_QWORD *)(a1 + 48), *a2, a2[1], *(_QWORD *)(a2[4] + 32));
}
