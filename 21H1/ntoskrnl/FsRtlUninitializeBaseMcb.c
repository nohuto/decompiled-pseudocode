/*
 * XREFs of FsRtlUninitializeBaseMcb @ 0x1402F11F0
 * Callers:
 *     FsRtlUninitializeLargeMcb @ 0x1402F11B0 (FsRtlUninitializeLargeMcb.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1402D7298 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
