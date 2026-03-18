/*
 * XREFs of ArbAddAllocation @ 0x1407A5B90
 * Callers:
 *     <none>
 * Callees:
 *     RtlAddRange @ 0x140751410 (RtlAddRange.c)
 */

__int64 __fastcall ArbAddAllocation(__int64 a1, __int64 a2)
{
  return RtlAddRange(
           *(_QWORD *)(a1 + 48),
           *(_QWORD *)a2,
           *(_QWORD *)(a2 + 8),
           *(_BYTE *)(a2 + 66),
           2 * (*(_BYTE *)(*(_QWORD *)(a2 + 40) + 36LL) & 1u) + 1,
           0LL,
           *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL));
}
