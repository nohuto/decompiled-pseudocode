/*
 * XREFs of MiReleasePrivilegedPtes @ 0x1406EBA70
 * Callers:
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x140761A2C (MiGetSystemAddressForImage.c)
 *     MiMapSystemImageWithLargePage @ 0x14098325C (MiMapSystemImageWithLargePage.c)
 *     MiUnmapLargeDriver @ 0x1409835EC (MiUnmapLargeDriver.c)
 *     MiReleaseSystemImageVa @ 0x140B52AA8 (MiReleaseSystemImageVa.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x1403A147C (KeReservePrivilegedPages.c)
 */

__int64 MiReleasePrivilegedPtes()
{
  __int64 result; // rax

  if ( (MiFlags & 0x4000) != 0 )
    return KeReservePrivilegedPages();
  return result;
}
