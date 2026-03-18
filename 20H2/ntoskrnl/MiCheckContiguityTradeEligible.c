/*
 * XREFs of MiCheckContiguityTradeEligible @ 0x1405450C4
 * Callers:
 *     MiQueryVaPhysicalContiguity @ 0x140545754 (MiQueryVaPhysicalContiguity.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1405504A4 (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiActivePageClaimCandidate @ 0x14034C9A0 (MiActivePageClaimCandidate.c)
 *     MiIsPfnFromSlabAllocation @ 0x14034D190 (MiIsPfnFromSlabAllocation.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
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
           *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v2 + 40) >> 39) & 0x3FFLL)),
           v2,
           0,
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
