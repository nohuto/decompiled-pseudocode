/*
 * XREFs of MiTradeActivePage @ 0x1402EA95C
 * Callers:
 *     MiLockCode @ 0x140312BB0 (MiLockCode.c)
 *     MiReplaceLockedPage @ 0x1403D0BD4 (MiReplaceLockedPage.c)
 *     MiProtectDriverSectionPte @ 0x140582320 (MiProtectDriverSectionPte.c)
 *     MiCompleteSecureProcessFault @ 0x1405A6E74 (MiCompleteSecureProcessFault.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1405B4BA8 (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140239060 (MiLockNestedPageAtDpcInline.c)
 *     MiWriteValidPteNewPage @ 0x14026EDE4 (MiWriteValidPteNewPage.c)
 *     MiFinalizePageAttribute @ 0x1402E5708 (MiFinalizePageAttribute.c)
 *     MiCopyPage @ 0x1402E7D60 (MiCopyPage.c)
 *     MiCopyPfnEntryEx @ 0x1402E8154 (MiCopyPfnEntryEx.c)
 *     KeFlushSingleTb @ 0x1402EA644 (KeFlushSingleTb.c)
 *     MiActivePageTradeable @ 0x1402EABF8 (MiActivePageTradeable.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiWriteValidPteNewProtection @ 0x14033DBC0 (MiWriteValidPteNewProtection.c)
 */

__int64 __fastcall MiTradeActivePage(
        __m128i *a1,
        __m128i *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  __m128i *v7; // r14
  ULONG_PTR v9; // r15
  ULONG_PTR v10; // rdi
  __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // eax
  __int8 v15; // al
  __int8 v16; // al
  __int64 v17; // r15
  unsigned __int64 v18; // rbx
  __int64 *v19; // rbx
  __int64 v20; // rax
  BOOL v22; // r14d
  unsigned __int64 v23; // rdi
  int v24; // edi
  unsigned int v25; // [rsp+20h] [rbp-38h]

  v7 = a2;
  if ( !(unsigned int)MiActivePageTradeable((ULONG_PTR)a1) )
    return 0LL;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)v7[0x22000000000LL].m128i_i64 >> 4);
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)a1[0x22000000000LL].m128i_i64 >> 4);
  v11 = (__int64 *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v12 = MI_READ_PTE_LOCK_FREE(v11);
  v13 = v12;
  if ( a5 == 2 )
  {
    if ( (v12 & 0x42) != 0 )
    {
      MiWriteValidPteNewProtection(v11, v12 & 0xFFFFFFFFFFFFFFBDuLL);
      KeFlushSingleTb(a3, a4, 2u);
    }
  }
  else
  {
    v22 = 0;
    v23 = v12 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    if ( (unsigned int)MiPteInShadowRange(v11) )
      v22 = MiPteHasShadow() != 0;
    *v11 = v23;
    if ( v22 )
      MiWritePteShadow((__int64)v11, v13 & 0xFFFFFFFFFFFFFBFEuLL | 0x400);
    KeFlushSingleTb(a3, a4, a5);
    v10 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)a1[0x22000000000LL].m128i_i64 >> 4);
    v7 = a2;
  }
  v14 = a1[2].m128i_u8[2] >> 6;
  a6 = 0;
  v25 = v14;
  while ( _interlockedbittestandset64(&a1[1].m128i_i32[2], 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&a6);
    while ( a1[1].m128i_i64[1] < 0 );
  }
  MiLockNestedPageAtDpcInline((__int64)v7);
  MiFinalizePageAttribute((__int64)v7, v25, 1u);
  MiCopyPfnEntryEx(v7, a1);
  MiCopyPage(v9, v10, 0LL, 6);
  _InterlockedAnd64(&v7[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  v15 = a1[2].m128i_i8[3];
  a1[2].m128i_i64[1] &= ~0x8000000000000000uLL;
  a1[2].m128i_i8[3] = v15 & 0xF7;
  v16 = a1[2].m128i_i8[2] & 0xF8 | 5;
  a1[2].m128i_i8[2] = v16;
  a1[2].m128i_i8[2] = v16 & 0xC7;
  a1[2].m128i_i8[3] &= ~0x20u;
  _InterlockedAnd64(&a1[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  v17 = (v9 & 0xFFFFFFFFFFLL) << 12;
  v18 = v17 | v13 & 0xFFF0000000000FFFuLL;
  if ( a5 != 2 )
  {
    v24 = 0;
    if ( !(unsigned int)MiPteInShadowRange(v11) )
      goto LABEL_18;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v24 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
LABEL_28:
        if ( (v18 & 1) != 0 )
          v18 |= 0x8000000000000000uLL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      goto LABEL_28;
    }
LABEL_18:
    *v11 = v18;
    if ( v24 )
      MiWritePteShadow((__int64)v11, v18);
    goto LABEL_9;
  }
  MiWriteValidPteNewPage(v11, v18, 0);
LABEL_9:
  KeFlushSingleTb(a3, a4, a5);
  if ( v7[2].m128i_i64[1] < 0 )
  {
    v19 = (__int64 *)(v7->m128i_i64[1] | 0x8000000000000000uLL);
    v20 = MI_READ_PTE_LOCK_FREE(v19);
    MiWriteValidPteNewPage(v19, v17 | v20 & 0xFFF0000000000FFFuLL, 0);
  }
  return 1LL;
}
