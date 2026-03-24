/*
 * XREFs of EtwpIsWow64Logger @ 0x1406E092C
 * Callers:
 *     EtwpFinalizeHeader @ 0x1406DF770 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1406DFDA8 (EtwpUpdateFileHeader.c)
 *     EtwpAddLogHeader @ 0x1406E03E8 (EtwpAddLogHeader.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpIsWow64Logger(__int64 a1)
{
  return (*(_DWORD *)(a1 + 832) & 0x10) != 0 && (*(_DWORD *)(a1 + 12) & 0x2000000) == 0;
}
