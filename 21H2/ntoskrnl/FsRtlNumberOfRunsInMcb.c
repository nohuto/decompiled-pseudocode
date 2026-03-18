/*
 * XREFs of FsRtlNumberOfRunsInMcb @ 0x140541450
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlNumberOfRunsInLargeMcb @ 0x140459950 (FsRtlNumberOfRunsInLargeMcb.c)
 */

ULONG __stdcall FsRtlNumberOfRunsInMcb(PMCB Mcb)
{
  return FsRtlNumberOfRunsInLargeMcb(&Mcb->DummyFieldThatSizesThisStructureCorrectly);
}
