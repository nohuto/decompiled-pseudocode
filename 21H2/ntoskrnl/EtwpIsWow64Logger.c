/*
 * XREFs of EtwpIsWow64Logger @ 0x1406F175C
 * Callers:
 *     EtwpUpdateFileHeader @ 0x1406F09A8 (EtwpUpdateFileHeader.c)
 *     EtwpAddLogHeader @ 0x1406F120C (EtwpAddLogHeader.c)
 *     EtwpFinalizeHeader @ 0x1406F1AC4 (EtwpFinalizeHeader.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpIsWow64Logger(__int64 a1)
{
  return (*(_DWORD *)(a1 + 816) & 0x10) != 0 && (*(_DWORD *)(a1 + 12) & 0x2000000) == 0;
}
