/*
 * XREFs of MiImagePagable @ 0x1406D0B4C
 * Callers:
 *     MmResetDriverPaging @ 0x1406D0A20 (MmResetDriverPaging.c)
 *     MiEnablePagingOfDriver @ 0x1407A5310 (MiEnablePagingOfDriver.c)
 *     MiLockPagableSections @ 0x140A545BC (MiLockPagableSections.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x1402E776C (MiLookupDataTableEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14031CBD0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MiImagePagable(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9

  if ( (dword_140CFB174 & 1) != 0 || (unsigned int)MI_IS_PHYSICAL_ADDRESS(a2) )
    return 0LL;
  if ( !a1 )
    a1 = MiLookupDataTableEntry(a2, 1LL, v4, v5);
  if ( (unsigned int)MiGetSystemRegionType(a2) == 1 )
    return 0LL;
  else
    return a1;
}
