/*
 * XREFs of FsRtlAddBaseMcbEntry @ 0x1402F0A20
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlAddBaseMcbEntryEx @ 0x1402F0A40 (FsRtlAddBaseMcbEntryEx.c)
 */

BOOLEAN __stdcall FsRtlAddBaseMcbEntry(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  return FsRtlAddBaseMcbEntryEx(Mcb, Vbn, Lbn, SectorCount) >= 0;
}
