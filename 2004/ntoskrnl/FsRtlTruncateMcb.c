/*
 * XREFs of FsRtlTruncateMcb @ 0x1404EA490
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlTruncateLargeMcb @ 0x14032C2C0 (FsRtlTruncateLargeMcb.c)
 */

void __stdcall FsRtlTruncateMcb(PMCB Mcb, VBN Vbn)
{
  FsRtlTruncateLargeMcb(&Mcb->DummyFieldThatSizesThisStructureCorrectly, Vbn);
}
