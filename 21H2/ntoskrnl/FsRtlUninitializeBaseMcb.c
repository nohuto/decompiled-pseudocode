/*
 * XREFs of FsRtlUninitializeBaseMcb @ 0x140203D00
 * Callers:
 *     FsRtlUninitializeLargeMcb @ 0x1402554A0 (FsRtlUninitializeLargeMcb.c)
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x140203D50 (ExFreeToPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x140203D88 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
