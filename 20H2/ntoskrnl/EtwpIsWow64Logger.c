/*
 * XREFs of EtwpIsWow64Logger @ 0x140717008
 * Callers:
 *     EtwpFinalizeHeader @ 0x140715E4C (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x140716484 (EtwpUpdateFileHeader.c)
 *     EtwpAddLogHeader @ 0x140716AC4 (EtwpAddLogHeader.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpIsWow64Logger(__int64 a1)
{
  return (*(_DWORD *)(a1 + 832) & 0x10) != 0 && (*(_DWORD *)(a1 + 12) & 0x2000000) == 0;
}
