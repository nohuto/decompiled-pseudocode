/*
 * XREFs of MiReleasePrivilegedPtes @ 0x140773C08
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A84A8 (MiUnloadSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x14075EA6C (MiGetSystemAddressForImage.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA530 (MiMapSystemImageWithLargePage.c)
 *     MiUnmapLargeDriver @ 0x1408DA8A4 (MiUnmapLargeDriver.c)
 *     MiReleaseSystemImageVa @ 0x140A93C18 (MiReleaseSystemImageVa.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x1403955F0 (KeReservePrivilegedPages.c)
 */

__int64 MiReleasePrivilegedPtes()
{
  __int64 result; // rax

  if ( (MiFlags & 0x8000) != 0 )
    return KeReservePrivilegedPages();
  return result;
}
