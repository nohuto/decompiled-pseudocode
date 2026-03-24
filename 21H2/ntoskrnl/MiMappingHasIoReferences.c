/*
 * XREFs of MiMappingHasIoReferences @ 0x140295E94
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x140226CC0 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x140295824 (MiMapContiguousMemory.c)
 *     MmProtectMdlSystemAddress @ 0x1405321B0 (MmProtectMdlSystemAddress.c)
 *     MmMapMdl @ 0x1405375B0 (MmMapMdl.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14031CBD0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 */

signed __int64 __fastcall MiMappingHasIoReferences(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  int i; // eax
  signed __int64 result; // rax
  signed __int64 v4; // rtt

  v1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  for ( i = MI_IS_PHYSICAL_ADDRESS(a1); i; --i )
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  result = MI_READ_PTE_LOCK_FREE(v1);
  do
  {
    v4 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)v1, result | 0x200, result);
  }
  while ( v4 != result );
  return result;
}
