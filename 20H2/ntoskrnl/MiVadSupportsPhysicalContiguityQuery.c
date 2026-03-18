/*
 * XREFs of MiVadSupportsPhysicalContiguityQuery @ 0x1408D400C
 * Callers:
 *     MiProcessVaContiguityInformation @ 0x1405507F0 (MiProcessVaContiguityInformation.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadSupportsPhysicalContiguityQuery(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) & 0x70) == 0 && (*(_DWORD *)(a1 + 48) & 0x100000) != 0;
}
