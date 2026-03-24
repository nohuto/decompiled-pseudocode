/*
 * XREFs of MiVadSupportsPhysicalContiguityQuery @ 0x1408D17CC
 * Callers:
 *     MiProcessVaContiguityInformation @ 0x1405522C0 (MiProcessVaContiguityInformation.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadSupportsPhysicalContiguityQuery(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) & 0x70) == 0 && (*(_DWORD *)(a1 + 48) & 0x100000) != 0;
}
