/*
 * XREFs of FsRtlAddMcbEntry @ 0x1404E9760
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlAddLargeMcbEntry @ 0x1402F04B0 (FsRtlAddLargeMcbEntry.c)
 */

BOOLEAN __stdcall FsRtlAddMcbEntry(PMCB Mcb, VBN Vbn, LBN Lbn, ULONG SectorCount)
{
  return FsRtlAddLargeMcbEntry(&Mcb->DummyFieldThatSizesThisStructureCorrectly, Vbn, Lbn, SectorCount);
}
