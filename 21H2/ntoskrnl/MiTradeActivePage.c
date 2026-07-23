/*
 * XREFs of MiTradeActivePage @ 0x1402347D0
 * Callers:
 *     MiLockCode @ 0x14032E300 (MiLockCode.c)
 *     MiReplaceLockedPage @ 0x14053D9AC (MiReplaceLockedPage.c)
 *     MiCompleteSecureProcessFault @ 0x1405483C4 (MiCompleteSecureProcessFault.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1405521B4 (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiWriteValidPteNewPage @ 0x140234AD8 (MiWriteValidPteNewPage.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140258F30 (MiLockNestedPageAtDpcInline.c)
 *     KeFlushSingleTb @ 0x1402599A8 (KeFlushSingleTb.c)
 *     MiCopyPfnEntryEx @ 0x14025B9D0 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x14025C3D4 (MiFinalizePageAttribute.c)
 *     MiCopyPage @ 0x1402E4A70 (MiCopyPage.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiGetPagePrivilege @ 0x140333440 (MiGetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiTradeActivePage(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  unsigned __int64 v7; // r14
  __int64 v9; // r15
  BOOL v10; // edi
  unsigned __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rbx
  BOOL v15; // r14d
  unsigned __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // edi
  char v20; // al
  char v21; // al
  __int64 v22; // r15
  unsigned __int64 v23; // rbx
  int v24; // edi
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rbx
  __int64 v28; // rax

  v7 = a3;
  if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(BugCheckParameter2 + 32) != 1 )
    return 0LL;
  v9 = (a2 + 0x58000000000LL) / 48;
  v10 = (MiFlags & 0x8000) != 0 && (unsigned int)MiGetPagePrivilege(BugCheckParameter2);
  v11 = (unsigned __int64 *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v12 = MI_READ_PTE_LOCK_FREE(v11);
  v13 = v12;
  if ( a5 == 2 )
  {
    if ( (v12 & 0x42) != 0 || v10 )
      return 0LL;
  }
  else
  {
    v15 = 0;
    v16 = v12 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    if ( (unsigned int)MiPteInShadowRange(v11) )
      v15 = MiPteHasShadow(v18, v17) != 0;
    *v11 = v16;
    if ( v15 )
      MiWritePteShadow(v11);
    v7 = a3;
    KeFlushSingleTb(a3, a4, a5);
  }
  v19 = *(unsigned __int8 *)(BugCheckParameter2 + 34) >> 6;
  a6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&a6);
    while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
  }
  MiLockNestedPageAtDpcInline(a2);
  MiFinalizePageAttribute(a2, v19, 1LL);
  MiCopyPfnEntryEx(a2, BugCheckParameter2);
  MiCopyPage(v9, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48, 0LL, 6LL);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v20 = *(_BYTE *)(BugCheckParameter2 + 35);
  *(_QWORD *)(BugCheckParameter2 + 40) &= ~0x8000000000000000uLL;
  *(_BYTE *)(BugCheckParameter2 + 35) = v20 & 0xF7;
  v21 = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
  *(_BYTE *)(BugCheckParameter2 + 34) = v21;
  *(_BYTE *)(BugCheckParameter2 + 34) = v21 & 0xC7;
  *(_BYTE *)(BugCheckParameter2 + 35) &= ~0x20u;
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v22 = (v9 & 0xFFFFFFFFFLL) << 12;
  v23 = v22 | v13 & 0xFFFF000000000FFFuLL;
  if ( a5 != 2 )
  {
    v24 = 0;
    if ( (unsigned int)MiPteInShadowRange(v11) )
    {
      if ( (unsigned int)MiPteHasShadow(v26, v25) )
      {
        v24 = 1;
        if ( !HIBYTE(word_140C4E048) )
        {
LABEL_26:
          if ( (v23 & 1) != 0 )
            v23 |= 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        goto LABEL_26;
      }
    }
    *v11 = v23;
    if ( v24 )
      MiWritePteShadow(v11);
    goto LABEL_30;
  }
  MiWriteValidPteNewPage(v11, v23, 0LL);
LABEL_30:
  KeFlushSingleTb(v7, a4, a5);
  if ( (unsigned int)MI_PFN_IS_PROTO(a2) )
  {
    v27 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
    v28 = MI_READ_PTE_LOCK_FREE(v27);
    MiWriteValidPteNewPage(v27, v22 | v28 & 0xFFFF000000000FFFuLL, 0LL);
  }
  return 1LL;
}
