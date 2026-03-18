/*
 * XREFs of IommupValidateMdl @ 0x1404D5934
 * Callers:
 *     IommuMapIdentityRange @ 0x1404D5380 (IommuMapIdentityRange.c)
 *     IommuMapLogicalRange @ 0x1404D5520 (IommuMapLogicalRange.c)
 *     IommuUnmapIdentityRange @ 0x1404D57F0 (IommuUnmapIdentityRange.c)
 * Callees:
 *     <none>
 */

bool __fastcall IommupValidateMdl(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0xFFF) == 0 && (*(_DWORD *)(a1 + 40) & 0xFFF) == 0;
}
