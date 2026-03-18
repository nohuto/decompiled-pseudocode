/*
 * XREFs of MiTradeActivePage @ 0x1402F16A8
 * Callers:
 *     MiLockCode @ 0x14028AAA0 (MiLockCode.c)
 *     MiReplaceLockedPage @ 0x140537C4C (MiReplaceLockedPage.c)
 *     MiCompleteSecureProcessFault @ 0x140542664 (MiCompleteSecureProcessFault.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14054C484 (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x140221650 (MiGetPagePrivilege.c)
 *     MiCopyPage @ 0x140221A00 (MiCopyPage.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWriteValidPteNewPage @ 0x1402F19B0 (MiWriteValidPteNewPage.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402FE700 (MiLockNestedPageAtDpcInline.c)
 *     MiCopyPfnEntryEx @ 0x14034B9B0 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x14034BF54 (MiFinalizePageAttribute.c)
 *     KeFlushSingleTb @ 0x14034C17C (KeFlushSingleTb.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiTradeActivePage(
        ULONG_PTR a1,
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
  unsigned int v22; // edi
  char v23; // al
  char v24; // al
  __int64 v25; // r15
  unsigned __int64 v26; // rbx
  int v27; // edi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  unsigned __int64 v32; // rbx
  __int64 v33; // rax

  v7 = a3;
  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(a1 + 32) != 1 )
    return 0LL;
  v9 = (a2 + 0x58000000000LL) / 48;
  v10 = (MiFlags & 0x8000) != 0 && (unsigned int)MiGetPagePrivilege(a1, 0, 0LL);
  v11 = (unsigned __int64 *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v12 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v11);
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
    if ( MiPteInShadowRange((unsigned __int64)v11) )
      v18 = MiPteHasShadow(v21, v20) != 0;
    *v11 = v19;
    if ( v18 )
      MiWritePteShadow(v11, v16 & 0xFFFFFFFFFFFFFBFEuLL | 0x400);
    v7 = a3;
    KeFlushSingleTb(a3, a4, a5);
  }
  v22 = *(unsigned __int8 *)(a1 + 34) >> 6;
  a6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&a6, v13, v14, v15);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  MiLockNestedPageAtDpcInline(a2);
  MiFinalizePageAttribute(a2, v22, 1LL);
  MiCopyPfnEntryEx(a2, a1);
  MiCopyPage(v9, (__int64)(a1 + 0x58000000000LL) / 48, 0LL, 6);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v23 = *(_BYTE *)(a1 + 35);
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  *(_BYTE *)(a1 + 35) = v23 & 0xF7;
  v24 = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  *(_BYTE *)(a1 + 34) = v24;
  *(_BYTE *)(a1 + 34) = v24 & 0xC7;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v25 = (v9 & 0xFFFFFFFFFLL) << 12;
  v26 = v25 | v16 & 0xFFFF000000000FFFuLL;
  if ( a5 != 2 )
  {
    v27 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v11) )
    {
      if ( (unsigned int)MiPteHasShadow(v29, v28) )
      {
        v27 = 1;
        if ( !HIBYTE(word_140C4DF48) )
        {
LABEL_26:
          if ( (v26 & 1) != 0 )
            v26 |= 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        goto LABEL_26;
      }
    }
    *v11 = v26;
    if ( v27 )
      MiWritePteShadow(v11, v26);
    goto LABEL_30;
  }
  MiWriteValidPteNewPage(v11, v26, 0LL);
LABEL_30:
  KeFlushSingleTb(v7, a4, a5);
  if ( (unsigned int)MI_PFN_IS_PROTO(a2, v30, v31) )
  {
    v32 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
    v33 = MI_READ_PTE_LOCK_FREE(v32);
    MiWriteValidPteNewPage(v32, v25 | v33 & 0xFFFF000000000FFFuLL, 0LL);
  }
  return 1LL;
}
