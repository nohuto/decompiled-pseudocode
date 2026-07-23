/*
 * XREFs of MiImagePagable @ 0x1406A7E2C
 * Callers:
 *     MmResetDriverPaging @ 0x1406A7D00 (MmResetDriverPaging.c)
 *     MiEnablePagingOfDriver @ 0x1407A5510 (MiEnablePagingOfDriver.c)
 *     MiLockPagableSections @ 0x140A555BC (MiLockPagableSections.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x140298ABC (MiLookupDataTableEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140327920 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
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
