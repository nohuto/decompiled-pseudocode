/*
 * XREFs of IommupValidateMdl @ 0x1404D93D4
 * Callers:
 *     IommuMapIdentityRange @ 0x1404D8DC0 (IommuMapIdentityRange.c)
 *     IommuMapLogicalRange @ 0x1404D8F80 (IommuMapLogicalRange.c)
 *     IommuUnmapIdentityRange @ 0x1404D9250 (IommuUnmapIdentityRange.c)
 * Callees:
 *     <none>
 */

bool __fastcall IommupValidateMdl(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0xFFF) == 0 && (*(_DWORD *)(a1 + 40) & 0xFFF) == 0;
}
