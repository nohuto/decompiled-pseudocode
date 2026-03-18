/*
 * XREFs of MiVadSupportsPhysicalContiguityQuery @ 0x1408CE1CC
 * Callers:
 *     MiProcessVaContiguityInformation @ 0x14054CE20 (MiProcessVaContiguityInformation.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadSupportsPhysicalContiguityQuery(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) & 0x70) == 0 && (*(_DWORD *)(a1 + 48) & 0x100000) != 0;
}
