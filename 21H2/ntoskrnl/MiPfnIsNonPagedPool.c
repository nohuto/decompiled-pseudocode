/*
 * XREFs of MiPfnIsNonPagedPool @ 0x14059A814
 * Callers:
 *     MiIsPfnLocked @ 0x14025C930 (MiIsPfnLocked.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 */

_BOOL8 __fastcall MiPfnIsNonPagedPool(__int64 a1)
{
  return *(__int64 *)(a1 + 40) >= 0
      && (unsigned int)MiGetSystemRegionType((__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16) == 5
      && (*(_BYTE *)(a1 + 34) & 7) == 6;
}
