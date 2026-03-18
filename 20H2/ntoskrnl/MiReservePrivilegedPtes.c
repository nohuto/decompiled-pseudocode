/*
 * XREFs of MiReservePrivilegedPtes @ 0x140757A38
 * Callers:
 *     MiGetSystemAddressForImage @ 0x140757814 (MiGetSystemAddressForImage.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DCC10 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x140395030 (KeReservePrivilegedPages.c)
 */

__int64 MiReservePrivilegedPtes()
{
  if ( (MiFlags & 0x8000) != 0 )
    return KeReservePrivilegedPages();
  else
    return 0LL;
}
