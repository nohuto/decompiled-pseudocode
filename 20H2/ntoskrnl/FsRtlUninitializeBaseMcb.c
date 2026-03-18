/*
 * XREFs of FsRtlUninitializeBaseMcb @ 0x14020A040
 * Callers:
 *     FsRtlUninitializeLargeMcb @ 0x14032B0C0 (FsRtlUninitializeLargeMcb.c)
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x14020A4F0 (ExFreeToPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x14020B100 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlUninitializeBaseMcb(PBASE_MCB Mcb)
{
  PVOID Mapping; // rdx

  if ( Mcb->MaximumPairCount == 15 )
  {
    Mapping = Mcb->Mapping;
    if ( Mcb->PoolType == 1 )
      ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)&FsRtlFirstPagedMappingLookasideList, Mapping);
    else
      ExFreeToNPagedLookasideList(&FsRtlFirstNonPagedMappingLookasideList, Mapping);
  }
  else
  {
    ExFreePoolWithTag(Mcb->Mapping, 0);
  }
}
