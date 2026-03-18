/*
 * XREFs of MiImagePagable @ 0x1406A884C
 * Callers:
 *     MmResetDriverPaging @ 0x1406A8720 (MmResetDriverPaging.c)
 *     MiEnablePagingOfDriver @ 0x14078E6B0 (MiEnablePagingOfDriver.c)
 *     MiLockPagableSections @ 0x140A52934 (MiLockPagableSections.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140224D10 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLookupDataTableEntry @ 0x1402DFB98 (MiLookupDataTableEntry.c)
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
