/*
 * XREFs of MiSwapStackPageNoDpc @ 0x140355280
 * Callers:
 *     MiSwapStackPage @ 0x140354AAC (MiSwapStackPage.c)
 *     MiJumpStackTarget @ 0x140530B80 (MiJumpStackTarget.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCopyPage @ 0x1402B4680 (MiCopyPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402B5FE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiCopyPfnEntryEx @ 0x14031C670 (MiCopyPfnEntryEx.c)
 *     KeFlushSingleTb @ 0x14031CE3C (KeFlushSingleTb.c)
 *     MiLockNestedPageAtDpcInline @ 0x14033B220 (MiLockNestedPageAtDpcInline.c)
 */

__int64 __fastcall MiSwapStackPageNoDpc(__int128 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  ULONG_PTR v7; // rbx
  signed __int64 v8; // rax
  unsigned __int64 v9; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // al
  char v18; // al

  v3 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v7 = (a3 + 0x58000000000LL) / 48;
  v8 = MI_READ_PTE_LOCK_FREE(v3);
  v9 = v8 & 0xFFFFFFFFFFFFFFDFuLL;
  if ( v8 != _InterlockedCompareExchange64((volatile signed __int64 *)v3, v8 & 0xFFFFFFFFFFFFFFDFuLL, v8) )
    return 0LL;
  KeFlushSingleTb((__int64)(v3 << 25) >> 16, 0, 2u);
  MiLockNestedPageAtDpcInline(a3, v11, v12, v13);
  MiCopyPfnEntryEx(a3, a2);
  MiCopyPage(v7, (a2 + 0x58000000000LL) / 48, a1, 68);
  if ( v9 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)v3,
               v9 ^ (v9 ^ (v7 << 12)) & 0xFFFFFFFFF000LL | 0x20,
               v9) )
  {
    *(_BYTE *)(a3 + 34) = *(_BYTE *)(a3 + 34) & 0xF8 | 5;
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(a3 + 16), v14, v15, v16);
    *(_QWORD *)(a3 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v17 = *(_BYTE *)(a2 + 34);
  *(_QWORD *)(a2 + 40) &= 0xFFFFFFFFFFFFFFFuLL;
  v18 = v17 & 0xF8 | 5;
  *(_BYTE *)(a2 + 34) = v18;
  *(_BYTE *)(a2 + 34) = v18 & 0xC7;
  *(_BYTE *)(a2 + 35) &= ~0x20u;
  *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
  return 1LL;
}
