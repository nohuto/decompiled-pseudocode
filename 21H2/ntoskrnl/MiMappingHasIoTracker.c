/*
 * XREFs of MiMappingHasIoTracker @ 0x140215774
 * Callers:
 *     MmUnmapIoSpace @ 0x140215660 (MmUnmapIoSpace.c)
 *     MmProtectMdlSystemAddress @ 0x140585D50 (MmProtectMdlSystemAddress.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402FDD20 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiMappingHasIoTracker(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  int i; // eax

  v1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  for ( i = MI_IS_PHYSICAL_ADDRESS(a1); i; --i )
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  return ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v1) >> 9) & 1;
}
