/*
 * XREFs of FsRtlTruncateMcb @ 0x140541740
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlTruncateLargeMcb @ 0x14022BC70 (FsRtlTruncateLargeMcb.c)
 */

void __stdcall FsRtlTruncateMcb(PMCB Mcb, VBN Vbn)
{
  FsRtlTruncateLargeMcb(&Mcb->DummyFieldThatSizesThisStructureCorrectly, Vbn);
}
