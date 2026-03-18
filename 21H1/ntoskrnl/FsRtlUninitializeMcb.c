/*
 * XREFs of FsRtlUninitializeMcb @ 0x1408872C0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlUninitializeLargeMcb @ 0x1402F11B0 (FsRtlUninitializeLargeMcb.c)
 */

void __stdcall FsRtlUninitializeMcb(PMCB Mcb)
{
  FsRtlUninitializeLargeMcb(&Mcb->DummyFieldThatSizesThisStructureCorrectly);
}
