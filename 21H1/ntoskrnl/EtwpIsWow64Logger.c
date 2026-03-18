/*
 * XREFs of EtwpIsWow64Logger @ 0x14067CC28
 * Callers:
 *     EtwpFinalizeHeader @ 0x14067BA6C (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x14067C0A4 (EtwpUpdateFileHeader.c)
 *     EtwpAddLogHeader @ 0x14067C6E4 (EtwpAddLogHeader.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpIsWow64Logger(__int64 a1)
{
  return (*(_DWORD *)(a1 + 832) & 0x10) != 0 && (*(_DWORD *)(a1 + 12) & 0x2000000) == 0;
}
