/*
 * XREFs of MiInitializeUnusablePfns @ 0x1403B1150
 * Callers:
 *     MiInitializeDynamicPfns @ 0x14052E7E0 (MiInitializeDynamicPfns.c)
 *     MiDoGangAssignment @ 0x1405603B0 (MiDoGangAssignment.c)
 *     MiSwitchToPfns @ 0x140A44AD8 (MiSwitchToPfns.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiSetPageTablePfnBuddy @ 0x140296ED4 (MiSetPageTablePfnBuddy.c)
 *     MiGetContainingPageTable @ 0x1402E2CA0 (MiGetContainingPageTable.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiMakeTransitionPte @ 0x140339700 (MiMakeTransitionPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiCreatePfnTemplate @ 0x1403B1594 (MiCreatePfnTemplate.c)
 *     MiCreateInitialLargeLeafPfns @ 0x1403F63D4 (MiCreateInitialLargeLeafPfns.c)
 */

__int64 __fastcall MiInitializeUnusablePfns(
        __m128i *a1,
        unsigned __int64 a2,
        __int16 a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int64 a6,
        char a7)
{
  char v7; // bl
  __m128i *v9; // rdi
  __m128i *v10; // rcx
  unsigned __int64 v11; // r15
  __m128i *v12; // r13
  __int64 v13; // r12
  __int64 result; // rax
  __int64 v15; // r10
  int v16; // edx
  __int64 v17; // r11
  unsigned int v18; // ebx
  __int64 v19; // rax
  _QWORD *v20; // r15
  int v21; // ebx
  __int64 v22; // r11
  __int64 ContainingPageTable; // rax
  __int64 v24; // rsi
  __int64 v25; // r11
  unsigned __int64 ValidPte; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 i; // rbx
  __m128i v31; // xmm1
  __m128i v32; // xmm0
  BOOL v33; // eax
  __m128i v34; // xmm0
  __m128i v35; // xmm1
  __m128i v36; // xmm2
  __m128i v37; // xmm0
  __m128i v38; // xmm1
  __m128i v39; // xmm2
  __m128i v40; // [rsp+30h] [rbp-30h] BYREF
  __m128i v41; // [rsp+40h] [rbp-20h] BYREF
  __m128i v42; // [rsp+50h] [rbp-10h] BYREF
  int v43; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int64 v44; // [rsp+A8h] [rbp+48h]
  int v45; // [rsp+B8h] [rbp+58h]

  v44 = a2;
  v40 = 0LL;
  v7 = a4;
  v41 = 0LL;
  v9 = a1;
  v42 = 0LL;
  v10 = a1 + 0x5800000000LL;
  v11 = 48 * a2;
  v12 = &v9[3 * a2];
  v13 = (__int64)v10 / 48;
  if ( (a4 & 0x1800) != 0 )
    return MiCreateInitialLargeLeafPfns((__int64)v10 / 48, a2, (a4 >> 11) & 1, 1, a3, 0);
  MiCreatePfnTemplate(1LL, &v40);
  LOBYTE(v16) = 6;
  v45 = 6;
  if ( v7 < 0 )
  {
    v42.m128i_i64[1] = v42.m128i_i64[1] & 0x8FFFFFFFFFFFFFFFuLL | 0x3000000000000000LL;
    _InterlockedExchangeAdd64(&qword_140C4E040, a2);
    goto LABEL_13;
  }
  if ( (v7 & 0x40) != 0 )
  {
    v40.m128i_i64[1] = 0xFFFFF68000000000uLL;
    goto LABEL_13;
  }
  if ( (v7 & 2) != 0 )
  {
    if ( (a7 & 2) == 0 )
    {
      v42.m128i_i16[0] = 1;
      v41.m128i_i64[1] = v41.m128i_i64[1] & 0xC000000000000000uLL | 1;
      goto LABEL_13;
    }
    v16 = 2;
  }
  else
  {
    v16 = 5;
  }
  v45 = v16;
LABEL_13:
  v42.m128i_i8[2] = v16 | v42.m128i_i8[2] & 0xF8;
  result = 0x1FF8000000000LL;
  v42.m128i_i64[1] ^= (v42.m128i_i64[1] ^ (v15 << 39)) & 0x1FF8000000000LL;
  if ( (v7 & 0xC0) != 0 )
  {
    v41.m128i_i64[1] = v41.m128i_i64[1] & 0xC000000000000000uLL | 1;
    v41.m128i_i64[0] = MiSwizzleInvalidPte(128LL);
    v42.m128i_i64[1] = v17 & 0xFFFFFFF000000000uLL | 0xFFFFFFFFDLL;
    MiSetPageTablePfnBuddy((__int64)&v40, (__int64)KeGetCurrentThread()->ApcState.Process, 1);
    v41.m128i_i64[1] |= 0x4000000000000000uLL;
    v42.m128i_i16[0] = 2;
    result = _InterlockedExchangeAdd64(&qword_140C4EFF8, a2);
  }
  if ( (v7 & 2) != 0 )
  {
    v18 = *(unsigned __int16 *)(a5 + 32);
    v19 = MiSwizzleInvalidPte(16 * ((a5 << 12) | *(_WORD *)(a5 + 32) & 0x3E | 0x40));
    v20 = (_QWORD *)a6;
    v41.m128i_i64[0] = v19;
    v21 = (v18 >> 1) & 0x1F;
    v42.m128i_i64[1] = v22 | 0x8000000000000000uLL;
    ContainingPageTable = MiGetContainingPageTable(a6);
    v24 = 48 * ContainingPageTable - 0x58000000000LL;
    v42.m128i_i64[1] = v25 ^ (ContainingPageTable ^ v25) & 0xFFFFFFFFFLL;
    if ( v45 == 6 )
      ValidPte = MiMakeValidPte((unsigned __int64)v20, v13, v21);
    else
      ValidPte = MiMakeTransitionPte(v13, v21);
    for ( i = ValidPte; v9 != v12; i ^= (i ^ (i + 4096)) & 0xFFFFFFFFF000LL )
    {
      v31 = v41;
      v40.m128i_i64[1] = (__int64)v20;
      *v9 = v40;
      v32 = v42;
      v9[1] = v31;
      v9[2] = v32;
      v33 = MiPteInShadowRange((unsigned __int64)v20);
      if ( (i & 1) == 0 )
      {
        v27 = 0LL;
        if ( v33 )
          v27 = (unsigned int)MiPteHasShadow() != 0;
        *v20 = i;
        if ( !(_DWORD)v27 )
          goto LABEL_34;
        v27 = i;
LABEL_33:
        MiWritePteShadow((__int64)v20, v27);
        goto LABEL_34;
      }
      v28 = 0LL;
      v27 = i;
      if ( v33 )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v28 = 1LL;
          if ( HIBYTE(word_140C4E048) )
            goto LABEL_27;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_27;
        }
        v27 |= 0x8000000000000000uLL;
      }
LABEL_27:
      *v20 = v27;
      if ( (_DWORD)v28 )
        goto LABEL_33;
LABEL_34:
      ++v20;
      v9 += 3;
    }
    v43 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v43, v27, v28, v29);
      while ( *(__int64 *)(v24 + 24) < 0 );
    }
    result = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v24 + 24) ^= (*(_QWORD *)(v24 + 24) ^ (*(_QWORD *)(v24 + 24) + v44)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else if ( v11 <= 0x1000 )
  {
    if ( v9 != v12 )
    {
      v37 = _mm_loadu_si128(&v42);
      v38 = _mm_loadu_si128(&v41);
      v39 = _mm_loadu_si128(&v40);
      do
      {
        *v9 = v39;
        v9[1] = v38;
        v9[2] = v37;
        v9 += 3;
      }
      while ( v9 != v12 );
    }
  }
  else
  {
    if ( v9 != v12 )
    {
      v34 = _mm_loadu_si128(&v42);
      v35 = _mm_loadu_si128(&v41);
      v36 = _mm_loadu_si128(&v40);
      do
      {
        _mm_stream_si128(v9, v36);
        _mm_stream_si128(v9 + 1, v35);
        _mm_stream_si128(v9 + 2, v34);
        v9 += 3;
      }
      while ( v9 != v12 );
    }
    _mm_sfence();
  }
  return result;
}
