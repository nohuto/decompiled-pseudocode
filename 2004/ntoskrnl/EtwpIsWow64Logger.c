/*
 * XREFs of EtwpIsWow64Logger @ 0x1406C9C18
 * Callers:
 *     EtwpFinalizeHeader @ 0x1406C8A5C (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1406C9094 (EtwpUpdateFileHeader.c)
 *     EtwpAddLogHeader @ 0x1406C96D4 (EtwpAddLogHeader.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpIsWow64Logger(__int64 a1)
{
  return (*(_DWORD *)(a1 + 832) & 0x10) != 0 && (*(_DWORD *)(a1 + 12) & 0x2000000) == 0;
}
