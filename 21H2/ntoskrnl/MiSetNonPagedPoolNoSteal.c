/*
 * XREFs of MiSetNonPagedPoolNoSteal @ 0x14027C3BC
 * Callers:
 *     MiGetPhysicalAddress @ 0x14027B6A4 (MiGetPhysicalAddress.c)
 *     MmBuildMdlForNonPagedPool @ 0x14027C410 (MmBuildMdlForNonPagedPool.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 */

signed __int64 __fastcall MiSetNonPagedPoolNoSteal(volatile signed __int64 *a1)
{
  signed __int64 result; // rax
  signed __int64 v3; // rtt

  result = MI_READ_PTE_LOCK_FREE(a1);
  do
  {
    if ( (result & 0x200) != 0 )
      break;
    if ( (MiFlags & 0x4000000) != 0 )
      _mm_lfence();
    v3 = result;
    result = _InterlockedCompareExchange64(a1, result | 0x220, result);
  }
  while ( v3 != result );
  return result;
}
