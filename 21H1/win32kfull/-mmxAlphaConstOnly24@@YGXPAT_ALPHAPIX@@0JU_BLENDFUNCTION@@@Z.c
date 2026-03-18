/*
 * XREFs of ?mmxAlphaConstOnly24@@YGXPAT_ALPHAPIX@@0JU_BLENDFUNCTION@@@Z @ 0xFB7B8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall mmxAlphaConstOnly24(union _ALPHAPIX *a1, union _ALPHAPIX *a2, int a3, struct _BLENDFUNCTION a4)
{
  __m64 *v5; // edi
  __m64 v6; // mm5
  __m64 v7; // mm5
  unsigned int v8; // ecx
  char v9; // al
  unsigned int i; // ecx
  __m64 v11; // mm0
  __m64 v12; // mm2
  __m64 v13; // mm3
  __m64 v14; // mm5
  unsigned int v15; // eax
  __m64 v16; // mm0
  __m64 v17; // mm3
  __m64 v18; // mm4
  __m64 v19; // mm0
  __m64 v20; // mm1

  if ( a3 )
  {
    v5 = (__m64 *)a1;
    v6 = _mm_cvtsi32_si64(a4.SourceConstantAlpha);
    v7 = _m_punpcklwd(v6, v6);
    qword_2787F8 = (__int64)_m_punpcklwd(v7, v7);
    v8 = 3 * a3;
    if ( ((unsigned __int8)a1 & 7) == 0 )
      goto LABEL_5;
    if ( v8 >= 4 )
    {
      while ( 1 )
      {
        v16 = _m_punpcklbw(_mm_cvtsi32_si64(v5->m64_i32[0]), 0LL);
        v17 = _m_paddw(
                _m_paddw(_m_psubw(_m_psllwi(v16, 8u), v16), (__m64)qword_26DFA0),
                _m_pmullw(_m_psubw(_m_punpcklbw(_mm_cvtsi32_si64(*(_DWORD *)a2), 0LL), v16), (__m64)qword_2787F8));
        v18 = _m_psrlwi(_m_paddw(_m_psrlwi(v17, 8u), v17), 8u);
        v5 = (__m64 *)((char *)v5 + 4);
        a2 = (union _ALPHAPIX *)((char *)a2 + 4);
        v5[-1].m64_i32[1] = _mm_cvtsi64_si32(_m_packuswb(v18, v18));
        v8 -= 4;
LABEL_5:
        v9 = v8;
        for ( i = v8 >> 3; i; --i )
        {
          v11 = _m_punpcklbw((__m64)v5->m64_u64, 0LL);
          v12 = _m_punpckhbw((__m64)v5->m64_u64, 0LL);
          v13 = _m_paddw(
                  _m_paddw(_m_psubw(_m_psllwi(v11, 8u), v11), (__m64)qword_26DFA0),
                  _m_pmullw(_m_psubw(_m_punpcklbw(*(__m64 *)a2, 0LL), v11), (__m64)qword_2787F8));
          v14 = _m_paddw(
                  _m_paddw(_m_psubw(_m_psllwi(v12, 8u), v12), (__m64)qword_26DFA0),
                  _m_pmullw(_m_psubw(_m_punpckhbw(*(__m64 *)a2, 0LL), v12), (__m64)qword_2787F8));
          ++v5;
          a2 = (union _ALPHAPIX *)((char *)a2 + 8);
          v5[-1].m64_u64 = (unsigned __int64)_m_packuswb(
                                               _m_psrlwi(_m_paddw(_m_psrlwi(v13, 8u), v13), 8u),
                                               _m_psrlwi(_m_paddw(_m_psrlwi(v14, 8u), v14), 8u));
        }
        v15 = v9 & 7;
        if ( !v15 )
          break;
        v8 = v15;
        if ( v15 < 4 )
          goto LABEL_10;
      }
    }
    else
    {
      do
      {
LABEL_10:
        v19 = _mm_cvtsi32_si64(v5->m64_u8[0]);
        v20 = _m_paddw(
                _m_pmullw(_m_psubw(_mm_cvtsi32_si64(*(unsigned __int8 *)a2), v19), (__m64)qword_2787F8),
                _m_paddw(_m_psubw(_m_psllwi(v19, 8u), v19), (__m64)qword_26DF98));
        v5->m64_i8[0] = _mm_cvtsi64_si32(_m_psrlwi(_m_paddw(_m_psrlwi(v20, 8u), v20), 8u));
        v5 = (__m64 *)((char *)v5 + 1);
        a2 = (union _ALPHAPIX *)((char *)a2 + 1);
        --v8;
      }
      while ( v8 );
    }
  }
  _m_empty();
}
