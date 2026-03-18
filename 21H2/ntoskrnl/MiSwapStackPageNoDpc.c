/*
 * XREFs of MiSwapStackPageNoDpc @ 0x14024A0FC
 * Callers:
 *     MiJumpStackTarget @ 0x1402003C0 (MiJumpStackTarget.c)
 *     MiSwapStackPage @ 0x140249930 (MiSwapStackPage.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x140239060 (MiLockNestedPageAtDpcInline.c)
 *     MiCopyPage @ 0x1402E7D60 (MiCopyPage.c)
 *     MiCopyPfnEntryEx @ 0x1402E8154 (MiCopyPfnEntryEx.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402E89B0 (MiSetOriginalPtePfnFromFreeList.c)
 *     KeFlushSingleTb @ 0x1402EA644 (KeFlushSingleTb.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSetPfnIdentity @ 0x14033C300 (MiSetPfnIdentity.c)
 */

__int64 __fastcall MiSwapStackPageNoDpc(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rbx
  signed __int64 v9; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  signed __int64 v13; // rbx
  char v14; // al

  v3 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a3 + 0x220000000000LL) >> 4);
  v9 = MI_READ_PTE_LOCK_FREE(v3);
  v10 = v9 & 0xFFFFFFFFFFFFFFDFuLL;
  if ( (MiFlags & 0x4000000) != 0 )
    _mm_lfence();
  if ( v9 == _InterlockedCompareExchange64((volatile signed __int64 *)v3, v10, v9) )
  {
    KeFlushSingleTb((__int64)(v3 << 25) >> 16, 0LL, 2LL);
    MiLockNestedPageAtDpcInline(a3);
    MiCopyPfnEntryEx(a3, a2);
    MiCopyPage(v8, v7, a1, 68LL);
    v13 = v10 ^ (v10 ^ (v8 << 12)) & 0xFFFFFFFFFF000LL | 0x20;
    if ( (MiFlags & 0x4000000) != 0 )
      _mm_lfence();
    if ( v10 == _InterlockedCompareExchange64((volatile signed __int64 *)v3, v13, v10) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(a2 + 34) = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
      MiSetPfnIdentity(a2, 0LL);
      v14 = *(_BYTE *)(a2 + 34);
      *(_QWORD *)(a2 + 40) &= ~0x8000000000000000uLL;
      *(_BYTE *)(a2 + 34) = v14 & 0xC7;
      *(_BYTE *)(a2 + 35) &= ~0x20u;
      *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
      return 1LL;
    }
    *(_BYTE *)(a3 + 34) = *(_BYTE *)(a3 + 34) & 0xF8 | 5;
    MiSetOriginalPtePfnFromFreeList(a3 + 16, v11, v12);
    MiSetPfnIdentity(a3, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return 0LL;
}
