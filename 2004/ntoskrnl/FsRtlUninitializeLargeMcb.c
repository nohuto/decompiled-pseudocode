/*
 * XREFs of FsRtlUninitializeLargeMcb @ 0x14032CF50
 * Callers:
 *     FsRtlUninitializeMcb @ 0x1408885E0 (FsRtlUninitializeMcb.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140269FBC (ExFreeToNPagedLookasideList.c)
 *     FsRtlUninitializeBaseMcb @ 0x14032CF90 (FsRtlUninitializeBaseMcb.c)
 */

void __stdcall FsRtlUninitializeLargeMcb(PLARGE_MCB Mcb)
{
  if ( Mcb->GuardedMutex )
  {
    ExFreeToNPagedLookasideList(&FsRtlFastMutexLookasideList, Mcb->GuardedMutex);
    Mcb->GuardedMutex = 0LL;
    FsRtlUninitializeBaseMcb(&Mcb->BaseMcb);
  }
}
