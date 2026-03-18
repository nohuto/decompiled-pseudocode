/*
 * XREFs of MiReservePrivilegedPtes @ 0x140748E58
 * Callers:
 *     MiGetSystemAddressForImage @ 0x140748C34 (MiGetSystemAddressForImage.c)
 *     MiMapSystemImageWithLargePage @ 0x1408D6DD0 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x140392B70 (KeReservePrivilegedPages.c)
 */

__int64 MiReservePrivilegedPtes()
{
  if ( (MiFlags & 0x8000) != 0 )
    return KeReservePrivilegedPages();
  else
    return 0LL;
}
