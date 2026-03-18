/*
 * XREFs of ArbDeleteOwnerRanges @ 0x140749D50
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteOwnersRanges @ 0x140749E20 (RtlDeleteOwnersRanges.c)
 */

__int64 __fastcall ArbDeleteOwnerRanges(__int64 a1)
{
  return RtlDeleteOwnersRanges(*(_QWORD *)(a1 + 48));
}
