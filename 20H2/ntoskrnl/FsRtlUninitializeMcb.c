/*
 * XREFs of FsRtlUninitializeMcb @ 0x14088E130
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlUninitializeLargeMcb @ 0x14032B0C0 (FsRtlUninitializeLargeMcb.c)
 */

void __stdcall FsRtlUninitializeMcb(PMCB Mcb)
{
  FsRtlUninitializeLargeMcb(&Mcb->DummyFieldThatSizesThisStructureCorrectly);
}
