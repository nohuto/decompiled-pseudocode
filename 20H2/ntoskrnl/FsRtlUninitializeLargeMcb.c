/*
 * XREFs of FsRtlUninitializeLargeMcb @ 0x14032B0C0
 * Callers:
 *     FsRtlUninitializeMcb @ 0x14088E130 (FsRtlUninitializeMcb.c)
 * Callees:
 *     FsRtlUninitializeBaseMcb @ 0x14020A040 (FsRtlUninitializeBaseMcb.c)
 *     ExFreeToNPagedLookasideList @ 0x14020B100 (ExFreeToNPagedLookasideList.c)
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
