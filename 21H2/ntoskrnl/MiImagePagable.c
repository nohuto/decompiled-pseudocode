/*
 * XREFs of MiImagePagable @ 0x140761128
 * Callers:
 *     MmResetDriverPaging @ 0x140760ED0 (MmResetDriverPaging.c)
 *     MiEnablePagingTheExecutive @ 0x140B085F8 (MiEnablePagingTheExecutive.c)
 *     MiLockPagableSections @ 0x140B0872C (MiLockPagableSections.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiLookupDataTableEntry @ 0x1402FDA80 (MiLookupDataTableEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402FDD20 (MI_IS_PHYSICAL_ADDRESS.c)
 */

_QWORD *__fastcall MiImagePagable(_QWORD *a1, unsigned __int64 a2)
{
  if ( (dword_140D051B4 & 1) != 0 || (unsigned int)MI_IS_PHYSICAL_ADDRESS(a2) )
    return 0LL;
  if ( !a1 )
    a1 = MiLookupDataTableEntry(a2, 1);
  if ( (unsigned int)MiGetSystemRegionType(a2) == 1 )
    return 0LL;
  else
    return a1;
}
