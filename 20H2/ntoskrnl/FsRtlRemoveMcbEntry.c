/*
 * XREFs of FsRtlRemoveMcbEntry @ 0x1404EDAC0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlRemoveLargeMcbEntry @ 0x1404EDA40 (FsRtlRemoveLargeMcbEntry.c)
 */

void __stdcall FsRtlRemoveMcbEntry(PMCB Mcb, VBN Vbn, ULONG SectorCount)
{
  FsRtlRemoveLargeMcbEntry(&Mcb->DummyFieldThatSizesThisStructureCorrectly, Vbn, SectorCount);
}
