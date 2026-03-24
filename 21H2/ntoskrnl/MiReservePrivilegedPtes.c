/*
 * XREFs of MiReservePrivilegedPtes @ 0x14075EAD0
 * Callers:
 *     MiGetSystemAddressForImage @ 0x14075E8AC (MiGetSystemAddressForImage.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA3D0 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x1403954A0 (KeReservePrivilegedPages.c)
 */

__int64 MiReservePrivilegedPtes()
{
  if ( (MiFlags & 0x8000) != 0 )
    return KeReservePrivilegedPages();
  else
    return 0LL;
}
