/*
 * XREFs of MiPrepareToStealNonPagedPool @ 0x14024DE5C
 * Callers:
 *     MiStealPage @ 0x1402E97D4 (MiStealPage.c)
 * Callees:
 *     KeFlushSingleTb @ 0x1402EA644 (KeFlushSingleTb.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiPrepareToStealNonPagedPool(__int64 a1, volatile signed __int64 *a2)
{
  __int64 v3; // rdi
  signed __int64 v4; // rax
  unsigned __int64 v5; // rbx

  v3 = (__int64)((_QWORD)a2 << 25) >> 16;
  if ( (*(_BYTE *)(a1 + 35) & 0x10) != 0 )
  {
    ++dword_140C29CF0;
    return 0LL;
  }
  v4 = MI_READ_PTE_LOCK_FREE(a2);
  if ( (v4 & 0x220) != 0x20 )
  {
    ++dword_140C29CF4;
    return 0LL;
  }
  v5 = v4 & 0xFFFFFFFFFFFFFFDFuLL;
  if ( (MiFlags & 0x4000000) != 0 )
    _mm_lfence();
  if ( v4 != _InterlockedCompareExchange64(a2, v5, v4) )
  {
    ++dword_140C29CF8;
    return 0LL;
  }
  KeFlushSingleTb(v3, 0LL, 2LL);
  return v5;
}
