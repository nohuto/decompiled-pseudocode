/*
 * XREFs of ?CheckForTwoFingerPan@MagnifierRecognizer@@AEAAXXZ @ 0x18017D9CC
 * Callers:
 *     ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18017D160 (-OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800C8D28 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUContactStat.c)
 *     ?NormalizedDotProduct@MagnifierRecognizer@@AEAANUtagPOINT@@0@Z @ 0x18017DC60 (-NormalizedDotProduct@MagnifierRecognizer@@AEAANUtagPOINT@@0@Z.c)
 */

void __fastcall MagnifierRecognizer::CheckForTwoFingerPan(MagnifierRecognizer *this)
{
  char v1; // r11
  int v3; // ecx
  int v4; // ecx
  struct tagPOINT *v5; // r10
  struct tagPOINT v6; // rcx
  __m128i v7; // xmm2
  __m128i v8; // xmm3
  unsigned __int64 v9; // xmm0_8
  _QWORD *v10; // rcx
  struct tagPOINT v11; // [rsp+50h] [rbp+10h] BYREF
  struct tagPOINT v12; // [rsp+58h] [rbp+18h]

  v1 = 0;
  if ( !*((_BYTE *)this + 3) || *((_BYTE *)this + 2) )
    return;
  v3 = *((_DWORD *)this + 1);
  if ( !v3 )
    goto LABEL_16;
  v4 = v3 - 1;
  if ( !v4 )
  {
    if ( *((_DWORD *)this + 2) <= 1u )
    {
      v10 = (_QWORD *)**((_QWORD **)this + 2);
      if ( 1000000LL * *((_QWORD *)this + 5) < v10[8] - v10[7] )
        *((_BYTE *)this + 3) = 0;
      if ( (int)((v10[6] - v10[5]) * (v10[6] - v10[5])
               + (HIDWORD(v10[6]) - HIDWORD(v10[5])) * (HIDWORD(v10[6]) - HIDWORD(v10[5]))) < (unsigned __int64)(unsigned int)(*((_DWORD *)this + 12) * *((_DWORD *)this + 12)) )
        return;
    }
LABEL_16:
    *((_BYTE *)this + 3) = 0;
    return;
  }
  if ( v4 != 1 )
    goto LABEL_16;
  v5 = (struct tagPOINT *)*((_QWORD *)this + 2);
  v6 = *v5;
  v11 = *v5;
  while ( *(struct tagPOINT **)&v6 != v5 )
  {
    if ( (int)((*(_QWORD *)(*(_QWORD *)&v6 + 48LL) - *(_QWORD *)(*(_QWORD *)&v6 + 40LL))
             * (*(_QWORD *)(*(_QWORD *)&v6 + 48LL) - *(_QWORD *)(*(_QWORD *)&v6 + 40LL))
             + (HIDWORD(*(_QWORD *)(*(_QWORD *)&v6 + 48LL)) - HIDWORD(*(_QWORD *)(*(_QWORD *)&v6 + 40LL)))
             * (HIDWORD(*(_QWORD *)(*(_QWORD *)&v6 + 48LL)) - HIDWORD(*(_QWORD *)(*(_QWORD *)&v6 + 40LL)))) >= (unsigned __int64)(unsigned int)(*((_DWORD *)this + 13) * *((_DWORD *)this + 13)) )
    {
      *((_BYTE *)this + 3) = v1;
      v11 = *v5;
      v7 = *(__m128i *)(*(_QWORD *)&v11 + 40LL);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>>,std::_Iterator_base0>::operator++((__int64 **)&v11);
      v8 = *(__m128i *)(*(_QWORD *)&v11 + 40LL);
      v12.x = _mm_cvtsi128_si32(_mm_srli_si128(v7, 8)) - _mm_cvtsi128_si32(v7);
      v9 = _mm_srli_si128(v8, 8).m128i_u64[0];
      v12.y = _mm_cvtsi128_si32(_mm_srli_si128(v7, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v7, 4));
      v11.x = v9 - v8.m128i_i32[0];
      v11.y = HIDWORD(v9) - v8.m128i_i32[1];
      if ( MagnifierRecognizer::NormalizedDotProduct((MagnifierRecognizer *)HIDWORD(v8.m128i_i64[0]), v12, v11) >= *((double *)this + 7) )
        *((_BYTE *)this + 2) = 1;
      return;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>>,std::_Iterator_base0>::operator++((__int64 **)&v11);
    v6 = v11;
  }
}
