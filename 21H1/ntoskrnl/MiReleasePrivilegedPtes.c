/*
 * XREFs of MiReleasePrivilegedPtes @ 0x14075F128
 * Callers:
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x1407470B4 (MiGetSystemAddressForImage.c)
 *     MiMapSystemImageWithLargePage @ 0x1408D5A80 (MiMapSystemImageWithLargePage.c)
 *     MiUnmapLargeDriver @ 0x1408D5DF4 (MiUnmapLargeDriver.c)
 *     MiReleaseSystemImageVa @ 0x140A90AB8 (MiReleaseSystemImageVa.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x140391FC0 (KeReservePrivilegedPages.c)
 */

__int64 MiReleasePrivilegedPtes()
{
  __int64 result; // rax

  if ( (MiFlags & 0x8000) != 0 )
    return KeReservePrivilegedPages();
  return result;
}
