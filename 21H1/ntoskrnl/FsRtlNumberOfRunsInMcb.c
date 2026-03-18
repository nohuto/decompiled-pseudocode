/*
 * XREFs of FsRtlNumberOfRunsInMcb @ 0x1404E9B60
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlNumberOfRunsInLargeMcb @ 0x1404E9B20 (FsRtlNumberOfRunsInLargeMcb.c)
 */

ULONG __stdcall FsRtlNumberOfRunsInMcb(PMCB Mcb)
{
  return FsRtlNumberOfRunsInLargeMcb(&Mcb->DummyFieldThatSizesThisStructureCorrectly);
}
