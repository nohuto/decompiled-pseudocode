/*
 * XREFs of ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C007B580
 * Callers:
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C007A854 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C007B2B0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C007E030 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C007F4C0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0144370 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreIntersectVisRect @ 0x1C014F940 (GreIntersectVisRect.c)
 * Callees:
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C007B770 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C007B86C (-bContain@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C00814D0 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C00860F0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0086FC0 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 */

__int64 __fastcall RGNOBJ::iCombine(RGNOBJ *this, struct RGNOBJ *a2, struct RGNOBJ *a3, int a4)
{
  __int64 v4; // r10
  struct RGNOBJ *v5; // r11
  struct RGNOBJ *v6; // r14
  RGNOBJ *v7; // rsi
  unsigned int v8; // edi
  _DWORD *v9; // rdx
  _DWORD *v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v14; // eax
  __m128i *v15; // rcx
  __m128i v16; // xmm1
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // xmm1_8
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // xmm0_8
  LONG v21; // r8d
  LONG v22; // edx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // r11
  __int64 v26; // rax
  __int64 v27; // rax
  struct _RECTL v28; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_QWORD *)this;
  v5 = a3;
  v6 = a2;
  v7 = this;
  if ( *(struct REGION **)this == prgnDefault )
    return RGNOBJ::iComplexity(this);
  v8 = 1;
  if ( (unsigned int)(a4 - 1) <= 1 )
  {
    v9 = *(_DWORD **)a2;
    v10 = *(_DWORD **)a3;
    if ( v9[20] == 56 && v9[24] <= v10[24] && v9[26] >= v10[26] && v9[25] <= v10[25] && v9[27] >= v10[27] )
    {
      if ( a4 != 1 )
        v5 = v6;
      v11 = RGNOBJ::bCopy(v7, v5);
      v12 = *(_QWORD *)v7;
      if ( v11 )
      {
        if ( *(_DWORD *)(v12 + 84) != 1 )
          return (unsigned int)(*(_DWORD *)(*(_QWORD *)v7 + 80LL) > 0x38u) + 2;
        return v8;
      }
LABEL_40:
      *(_DWORD *)(v12 + 80) = 16;
      *(_DWORD *)(v12 + 84) = 1;
      *(_QWORD *)(v12 + 96) = 0LL;
      *(_QWORD *)(v12 + 104) = 0LL;
      v27 = *(_QWORD *)(v12 + 88);
      *(_DWORD *)v27 = 0;
      *(_DWORD *)(v27 + 4) = 0x80000000;
      *(_QWORD *)(v27 + 8) = 0x7FFFFFFFLL;
      *(_QWORD *)(v12 + 40) = v27 + 16;
      return 0LL;
    }
    if ( v10[20] == 56 && (unsigned int)RGNOBJ::bContain(a3, v6) )
    {
      if ( a4 != 1 )
        v6 = v5;
      v14 = RGNOBJ::bCopy(v7, v6);
      goto LABEL_20;
    }
  }
  if ( a4 != 1
    || *(_DWORD *)(*(_QWORD *)v6 + 80LL) != 56
    || (v15 = *(__m128i **)v5, *(_DWORD *)(*(_QWORD *)v5 + 80LL) != 56) )
  {
    v14 = RGNOBJ::bMerge(v7, v6, v5, byte_1C0213B90[a4]);
LABEL_20:
    if ( !v14 )
    {
      v12 = *(_QWORD *)v7;
      goto LABEL_40;
    }
    this = v7;
    return RGNOBJ::iComplexity(this);
  }
  v16 = *(__m128i *)(*(_QWORD *)v6 + 96LL);
  v28 = 0LL;
  v17 = v16.m128i_i64[0];
  v18 = _mm_srli_si128(v16, 8).m128i_u64[0];
  v19 = v15[6].m128i_u64[0];
  v20 = _mm_srli_si128(v15[6], 8).m128i_u64[0];
  v21 = v19;
  if ( (int)v17 > (int)v19 )
    v21 = v17;
  v22 = v20;
  v28.left = v21;
  if ( (int)v18 < (int)v20 )
    v22 = v18;
  v23 = HIDWORD(v17);
  v24 = HIDWORD(v19);
  v28.right = v22;
  if ( (int)v23 > (int)v24 )
    LODWORD(v24) = v23;
  v25 = HIDWORD(v20);
  v28.top = v24;
  if ( SHIDWORD(v18) < SHIDWORD(v20) )
    LODWORD(v25) = HIDWORD(v18);
  v28.bottom = v25;
  if ( (int)v24 >= (int)v25 || v21 >= v22 )
  {
    v26 = *(_QWORD *)(v4 + 88);
    *(_DWORD *)(v4 + 80) = 16;
    *(_DWORD *)(v4 + 84) = 1;
    *(_QWORD *)(v4 + 96) = 0LL;
    *(_QWORD *)(v4 + 104) = 0LL;
    *(_DWORD *)v26 = 0;
    *(_DWORD *)(v26 + 4) = 0x80000000;
    *(_QWORD *)(v26 + 8) = 0x7FFFFFFFLL;
    *(_QWORD *)(v4 + 40) = v26 + 16;
  }
  else
  {
    RGNOBJ::vSet(v7, &v28);
  }
  return 2LL;
}
