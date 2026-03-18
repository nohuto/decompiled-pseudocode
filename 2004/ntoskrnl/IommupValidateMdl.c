/*
 * XREFs of IommupValidateMdl @ 0x1404D5E44
 * Callers:
 *     IommuMapIdentityRange @ 0x1404D5830 (IommuMapIdentityRange.c)
 *     IommuMapLogicalRange @ 0x1404D59F0 (IommuMapLogicalRange.c)
 *     IommuUnmapIdentityRange @ 0x1404D5CC0 (IommuUnmapIdentityRange.c)
 * Callees:
 *     <none>
 */

bool __fastcall IommupValidateMdl(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0xFFF) == 0 && (*(_DWORD *)(a1 + 40) & 0xFFF) == 0;
}
