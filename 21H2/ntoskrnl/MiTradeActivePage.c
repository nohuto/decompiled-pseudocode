/*
 * XREFs of MiTradeActivePage @ 0x1402B65F0
 * Callers:
 *     MiLockCode @ 0x1403235B0 (MiLockCode.c)
 *     MiReplaceLockedPage @ 0x14053D76C (MiReplaceLockedPage.c)
 *     MiCompleteSecureProcessFault @ 0x140548184 (MiCompleteSecureProcessFault.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x140551F74 (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiCopyPage @ 0x140240220 (MiCopyPage.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiLockNestedPageAtDpcInline @ 0x14026AF90 (MiLockNestedPageAtDpcInline.c)
 *     KeFlushSingleTb @ 0x14026BA08 (KeFlushSingleTb.c)
 *     MiCopyPfnEntryEx @ 0x14026DA30 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x14026E434 (MiFinalizePageAttribute.c)
 *     MiWriteValidPteNewPage @ 0x1402B68F8 (MiWriteValidPteNewPage.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiGetPagePrivilege @ 0x1403286F0 (MiGetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
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
  ULONG_PTR v9; // r15
  BOOL v10; // edi
  unsigned __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  BOOL v18; // r14d
  unsigned __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // edi
  __int64 v25; // rdx
  char v26; // al
  char v27; // al
  __int64 v28; // r15
  unsigned __int64 v29; // rbx
  int v30; // edi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // rbx
  __int64 v36; // rax

  v7 = a3;
  if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(BugCheckParameter2 + 32) != 1 )
    return 0LL;
  v9 = (a2 + 0x58000000000LL) / 48;
  v10 = (MiFlags & 0x8000) != 0 && (unsigned int)MiGetPagePrivilege(BugCheckParameter2);
  v11 = (unsigned __int64 *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v12 = MI_READ_PTE_LOCK_FREE(v11);
  v16 = v12;
  if ( a5 == 2 )
  {
    if ( (v12 & 0x42) != 0 || v10 )
      return 0LL;
  }
  else
  {
    v18 = 0;
    v19 = v12 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    if ( (unsigned int)MiPteInShadowRange(v11, v13) )
      v18 = MiPteHasShadow(v21, v20, v22, v23) != 0;
    *v11 = v19;
    if ( v18 )
      MiWritePteShadow(v11, v16 & 0xFFFFFFFFFFFFFBFEuLL | 0x400);
    v7 = a3;
    KeFlushSingleTb(a3, a4, a5);
  }
  v24 = *(unsigned __int8 *)(BugCheckParameter2 + 34) >> 6;
  a6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&a6, v13, v14, v15);
    while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
  }
  MiLockNestedPageAtDpcInline(a2, v13, v14, v15);
  MiFinalizePageAttribute(a2, v24, 1);
  MiCopyPfnEntryEx(a2, BugCheckParameter2);
  MiCopyPage(v9, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48, 0LL, 6);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v26 = *(_BYTE *)(BugCheckParameter2 + 35);
  *(_QWORD *)(BugCheckParameter2 + 40) &= ~0x8000000000000000uLL;
  *(_BYTE *)(BugCheckParameter2 + 35) = v26 & 0xF7;
  v27 = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
  *(_BYTE *)(BugCheckParameter2 + 34) = v27;
  *(_BYTE *)(BugCheckParameter2 + 34) = v27 & 0xC7;
  *(_BYTE *)(BugCheckParameter2 + 35) &= ~0x20u;
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v28 = (v9 & 0xFFFFFFFFFLL) << 12;
  v29 = v28 | v16 & 0xFFFF000000000FFFuLL;
  if ( a5 != 2 )
  {
    v30 = 0;
    if ( (unsigned int)MiPteInShadowRange(v11, v25) )
    {
      if ( (unsigned int)MiPteHasShadow(v32, v31, v33, v34) )
      {
        v30 = 1;
        if ( !HIBYTE(word_140C4E008) )
        {
LABEL_26:
          if ( (v29 & 1) != 0 )
            v29 |= 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        goto LABEL_26;
      }
    }
    *v11 = v29;
    if ( v30 )
      MiWritePteShadow(v11, v29);
    goto LABEL_30;
  }
  MiWriteValidPteNewPage(v11, v29, 0LL);
LABEL_30:
  KeFlushSingleTb(v7, a4, a5);
  if ( (unsigned int)MI_PFN_IS_PROTO(a2) )
  {
    v35 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
    v36 = MI_READ_PTE_LOCK_FREE(v35);
    MiWriteValidPteNewPage(v35, v28 | v36 & 0xFFFF000000000FFFuLL, 0LL);
  }
  return 1LL;
}
