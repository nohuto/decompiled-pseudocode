/*
 * XREFs of MiMappingHasIoReferences @ 0x1402155C8
 * Callers:
 *     MiMapContiguousMemory @ 0x14021538C (MiMapContiguousMemory.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     MmProtectMdlSystemAddress @ 0x140585D50 (MmProtectMdlSystemAddress.c)
 *     MmMapMdl @ 0x140592400 (MmMapMdl.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402FDD20 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 */

signed __int64 __fastcall MiMappingHasIoReferences(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  int i; // eax
  signed __int64 result; // rax
  signed __int64 v4; // rtt

  v1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  for ( i = MI_IS_PHYSICAL_ADDRESS(); i; --i )
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  result = MI_READ_PTE_LOCK_FREE(v1);
  do
  {
    if ( (MiFlags & 0x4000000) != 0 )
      _mm_lfence();
    v4 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)v1, result | 0x200, result);
  }
  while ( v4 != result );
  return result;
}
