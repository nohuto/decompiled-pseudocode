/*
 * XREFs of MiRecheckVaVm @ 0x14033A474
 * Callers:
 *     MiCrcStillIntact @ 0x140339D70 (MiCrcStillIntact.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiRecheckVaVm(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  __int16 v3; // ax

  v2 = 1;
  v3 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (v3 & 1) == 0 )
    return (v3 & 0xC00) == 2048LL;
  return v2;
}
