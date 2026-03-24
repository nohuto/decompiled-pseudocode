/*
 * XREFs of MiReleasePrivilegedPtes @ 0x140773A48
 * Callers:
 *     MiUnloadSystemImage @ 0x1406D11C8 (MiUnloadSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x14075E8AC (MiGetSystemAddressForImage.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA3D0 (MiMapSystemImageWithLargePage.c)
 *     MiUnmapLargeDriver @ 0x1408DA744 (MiUnmapLargeDriver.c)
 *     MiReleaseSystemImageVa @ 0x140A92C18 (MiReleaseSystemImageVa.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x1403954A0 (KeReservePrivilegedPages.c)
 */

__int64 MiReleasePrivilegedPtes()
{
  __int64 result; // rax

  if ( (MiFlags & 0x8000) != 0 )
    return KeReservePrivilegedPages();
  return result;
}
