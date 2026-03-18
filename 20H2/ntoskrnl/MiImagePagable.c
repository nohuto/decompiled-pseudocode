/*
 * XREFs of MiImagePagable @ 0x1406B943C
 * Callers:
 *     MmResetDriverPaging @ 0x1406B9310 (MmResetDriverPaging.c)
 *     MiEnablePagingOfDriver @ 0x14079ADF0 (MiEnablePagingOfDriver.c)
 *     MiLockPagableSections @ 0x140A52FB4 (MiLockPagableSections.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140295510 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLookupDataTableEntry @ 0x14030CDEC (MiLookupDataTableEntry.c)
 */

__int64 __fastcall MiImagePagable(__int64 a1, unsigned __int64 a2)
{
  if ( (dword_140CFB174 & 1) != 0 || (unsigned int)MI_IS_PHYSICAL_ADDRESS(a2) )
    return 0LL;
  if ( !a1 )
    a1 = MiLookupDataTableEntry(a2, 1);
  if ( (unsigned int)MiGetSystemRegionType(a2) == 1 )
    return 0LL;
  else
    return a1;
}
