/*
 * XREFs of MiSetNonPagedPoolNoSteal @ 0x140544D88
 * Callers:
 *     MiGetPhysicalAddress @ 0x1402A8734 (MiGetPhysicalAddress.c)
 *     MmBuildMdlForNonPagedPool @ 0x1402D6A20 (MmBuildMdlForNonPagedPool.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 */

signed __int64 __fastcall MiSetNonPagedPoolNoSteal(volatile signed __int64 *a1)
{
  signed __int64 result; // rax
  signed __int64 v3; // rtt

  result = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  do
  {
    if ( (result & 0x200) != 0 )
      break;
    v3 = result;
    result = _InterlockedCompareExchange64(a1, result | 0x220, result);
  }
  while ( v3 != result );
  return result;
}
