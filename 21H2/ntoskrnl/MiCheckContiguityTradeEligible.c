/*
 * XREFs of MiCheckContiguityTradeEligible @ 0x1405A5F5C
 * Callers:
 *     MiQueryVaPhysicalContiguity @ 0x1405A645C (MiQueryVaPhysicalContiguity.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1405B4BA8 (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiIsPfnFromSlabAllocation @ 0x140277C50 (MiIsPfnFromSlabAllocation.c)
 *     MiActivePageClaimCandidate @ 0x140278960 (MiActivePageClaimCandidate.c)
 */

__int64 __fastcall MiCheckContiguityTradeEligible(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 < 0 || *(char *)(a1 + 35) < 0 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 34) & 7) == 6 )
  {
    if ( MiActivePageClaimCandidate(*(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)v2 >> 43) & 0x3FF)), a1, 0, 0) )
      return 0LL;
  }
  else if ( *(_WORD *)(a1 + 32) || MiIsPfnFromSlabAllocation(a1) )
  {
    return 0LL;
  }
  return 1LL;
}
