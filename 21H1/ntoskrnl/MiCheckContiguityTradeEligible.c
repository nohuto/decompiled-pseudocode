/*
 * XREFs of MiCheckContiguityTradeEligible @ 0x1405410A4
 * Callers:
 *     MiQueryVaPhysicalContiguity @ 0x140541734 (MiQueryVaPhysicalContiguity.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14054C484 (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiActivePageClaimCandidate @ 0x14027FB00 (MiActivePageClaimCandidate.c)
 *     MiIsPfnFromSlabAllocation @ 0x1402802F0 (MiIsPfnFromSlabAllocation.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiCheckContiguityTradeEligible(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // r9

  if ( MI_PFN_IS_PROTO(a1) || MiIsPfnFromSlabAllocation(v1) || *(char *)(v2 + 35) < 0 )
    return 0LL;
  if ( (*(_BYTE *)(v2 + 34) & 7) == 6 )
  {
    if ( MiActivePageClaimCandidate(
           *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v2 + 40) >> 39) & 0x3FFLL)),
           v2,
           0LL,
           v2) )
    {
      return 0LL;
    }
  }
  else if ( *(_WORD *)(v2 + 32) )
  {
    return 0LL;
  }
  return 1LL;
}
