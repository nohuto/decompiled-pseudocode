/*
 * XREFs of FsRtlInitializeMcb @ 0x1408885C0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlInitializeLargeMcb @ 0x14026E1C0 (FsRtlInitializeLargeMcb.c)
 */

void __stdcall FsRtlInitializeMcb(PMCB Mcb, POOL_TYPE PoolType)
{
  FsRtlInitializeLargeMcb(&Mcb->DummyFieldThatSizesThisStructureCorrectly, PoolType);
}
