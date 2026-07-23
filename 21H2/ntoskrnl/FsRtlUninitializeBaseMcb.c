/*
 * XREFs of FsRtlUninitializeBaseMcb @ 0x14021A8F0
 * Callers:
 *     FsRtlUninitializeLargeMcb @ 0x14021A8B0 (FsRtlUninitializeLargeMcb.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14021A938 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlUninitializeBaseMcb(PBASE_MCB Mcb)
{
  PVOID Mapping; // rdx

  if ( Mcb->MaximumPairCount == 15 )
  {
    Mapping = Mcb->Mapping;
    if ( Mcb->PoolType == 1 )
      ExFreeToNPagedLookasideList(&FsRtlFirstPagedMappingLookasideList, Mapping);
    else
      ExFreeToNPagedLookasideList(&FsRtlFirstNonPagedMappingLookasideList, Mapping);
  }
  else
  {
    ExFreePoolWithTag(Mcb->Mapping, 0);
  }
}
