/*
 * XREFs of FsRtlRemoveMcbEntry @ 0x1404E9C00
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlRemoveLargeMcbEntry @ 0x1404E9B80 (FsRtlRemoveLargeMcbEntry.c)
 */

void __stdcall FsRtlRemoveMcbEntry(PMCB Mcb, VBN Vbn, ULONG SectorCount)
{
  FsRtlRemoveLargeMcbEntry(&Mcb->DummyFieldThatSizesThisStructureCorrectly, Vbn, SectorCount);
}
