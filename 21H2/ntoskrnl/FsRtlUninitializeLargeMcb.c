/*
 * XREFs of FsRtlUninitializeLargeMcb @ 0x1402554A0
 * Callers:
 *     FsRtlUninitializeMcb @ 0x14092E110 (FsRtlUninitializeMcb.c)
 * Callees:
 *     FsRtlUninitializeBaseMcb @ 0x140203D00 (FsRtlUninitializeBaseMcb.c)
 *     ExFreeToNPagedLookasideList @ 0x140203D88 (ExFreeToNPagedLookasideList.c)
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
