/*
 * XREFs of FsRtlUninitializeBaseMcb @ 0x14029DDA0
 * Callers:
 *     FsRtlUninitializeLargeMcb @ 0x14029DD60 (FsRtlUninitializeLargeMcb.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140252DE4 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
