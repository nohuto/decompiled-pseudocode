/*
 * XREFs of MiReleasePrivilegedPtes @ 0x140761528
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A8E58 (MiUnloadSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x140748C34 (MiGetSystemAddressForImage.c)
 *     MiMapSystemImageWithLargePage @ 0x1408D6DD0 (MiMapSystemImageWithLargePage.c)
 *     MiUnmapLargeDriver @ 0x1408D7144 (MiUnmapLargeDriver.c)
 *     MiReleaseSystemImageVa @ 0x140A900A8 (MiReleaseSystemImageVa.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x140392B70 (KeReservePrivilegedPages.c)
 */

__int64 MiReleasePrivilegedPtes()
{
  __int64 result; // rax

  if ( (MiFlags & 0x8000) != 0 )
    return KeReservePrivilegedPages();
  return result;
}
