/*
 * XREFs of MiSwapStackPageNoDpc @ 0x140245010
 * Callers:
 *     MiSwapStackPage @ 0x14024483C (MiSwapStackPage.c)
 *     MiJumpStackTarget @ 0x140536290 (MiJumpStackTarget.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x140258F30 (MiLockNestedPageAtDpcInline.c)
 *     KeFlushSingleTb @ 0x1402599A8 (KeFlushSingleTb.c)
 *     MiCopyPfnEntryEx @ 0x14025B9D0 (MiCopyPfnEntryEx.c)
 *     MiCopyPage @ 0x1402E4A70 (MiCopyPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140334C80 (MiSetOriginalPtePfnFromFreeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiSwapStackPageNoDpc(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  __int64 v7; // rbx
  signed __int64 v8; // rax
  unsigned __int64 v9; // rdi
  __int64 v11; // rdx
  char v12; // al
  char v13; // al

  v3 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v7 = (a3 + 0x58000000000LL) / 48;
  v8 = MI_READ_PTE_LOCK_FREE(v3);
  v9 = v8 & 0xFFFFFFFFFFFFFFDFuLL;
  if ( v8 != _InterlockedCompareExchange64((volatile signed __int64 *)v3, v8 & 0xFFFFFFFFFFFFFFDFuLL, v8) )
    return 0LL;
  KeFlushSingleTb((__int64)(v3 << 25) >> 16, 0LL, 2LL);
  MiLockNestedPageAtDpcInline(a3);
  MiCopyPfnEntryEx(a3, a2);
  MiCopyPage(v7, (a2 + 0x58000000000LL) / 48, a1, 68LL);
  if ( v9 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)v3,
               v9 ^ (v9 ^ (v7 << 12)) & 0xFFFFFFFFF000LL | 0x20,
               v9) )
  {
    *(_BYTE *)(a3 + 34) = *(_BYTE *)(a3 + 34) & 0xF8 | 5;
    MiSetOriginalPtePfnFromFreeList(a3 + 16, v11);
    *(_QWORD *)(a3 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v12 = *(_BYTE *)(a2 + 34);
  *(_QWORD *)(a2 + 40) &= 0xFFFFFFFFFFFFFFFuLL;
  v13 = v12 & 0xF8 | 5;
  *(_BYTE *)(a2 + 34) = v13;
  *(_BYTE *)(a2 + 34) = v13 & 0xC7;
  *(_BYTE *)(a2 + 35) &= ~0x20u;
  *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
  return 1LL;
}
