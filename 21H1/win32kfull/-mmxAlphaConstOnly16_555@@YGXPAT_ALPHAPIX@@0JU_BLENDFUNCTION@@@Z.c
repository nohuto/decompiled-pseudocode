/*
 * XREFs of ?mmxAlphaConstOnly16_555@@YGXPAT_ALPHAPIX@@0JU_BLENDFUNCTION@@@Z @ 0xFB33C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall mmxAlphaConstOnly16_555(
        union _ALPHAPIX *a1,
        union _ALPHAPIX *a2,
        unsigned int a3,
        struct _BLENDFUNCTION a4)
{
  unsigned int v4; // ecx
  unsigned int *v6; // edi
  __m64 v7; // mm5
  __m64 v8; // mm5
  char v9; // al
  __m64 v10; // mm2
  __m64 v11; // mm3
  __m64 v12; // mm4
  __m64 v13; // mm5
  __m64 v14; // mm0
  __m64 v15; // mm6
  __m64 v16; // mm2
  __m64 v17; // mm1
  __m64 v18; // mm5
  __m64 v19; // mm1
  __m64 v20; // mm2
  __m64 v21; // mm3
  __m64 v22; // mm4
  __m64 v23; // mm5
  __m64 v24; // mm0
  __m64 v25; // mm6
  __m64 v26; // mm2
  __m64 v27; // mm1
  __m64 v28; // mm5
  __m64 v29; // mm1

  v4 = a3;
  if ( a3 )
  {
    v6 = (unsigned int *)a1;
    v7 = _mm_cvtsi32_si64(a4.SourceConstantAlpha);
    v8 = _m_punpcklwd(v7, v7);
    qword_2787E8 = (__int64)_m_punpcklwd(v8, v8);
    if ( ((unsigned __int8)a1 & 7) != 0 )
      goto LABEL_6;
    while ( 1 )
    {
      v9 = v4;
      for ( v4 >>= 1; v4; --v4 )
      {
        v10 = _mm_cvtsi32_si64(*v6);
        v11 = _mm_cvtsi32_si64(*(_DWORD *)a2);
        v12 = _m_punpcklbw(v10, 0LL);
        v13 = _m_punpcklbw(v11, 0LL);
        v14 = _m_por(_m_psrlwi(_m_pand(v12, (__m64)qword_26E000), 2u), _m_pand(v12, (__m64)qword_26DFF8));
        v15 = _m_pand(v10, (__m64)qword_26DFF0);
        v16 = _m_psrlwi(v15, 5u);
        a2 = (union _ALPHAPIX *)((char *)a2 + 4);
        ++v6;
        v17 = _m_paddw(
                _m_paddw(_m_psubw(_m_psllwi(v14, 5u), v14), (__m64)qword_26DFE8),
                _m_pmullw(
                  _m_psubw(
                    _m_por(_m_pand(v13, (__m64)qword_26DFF8), _m_psrlwi(_m_pand(v13, (__m64)qword_26E000), 2u)),
                    v14),
                  (__m64)qword_2787E8));
        v18 = _m_paddw(
                _m_paddw(_m_psubw(v15, v16), (__m64)qword_26DFE0),
                _m_pmullw(_m_psubw(_m_psrlwi(_m_pand(v11, (__m64)qword_26DFF0), 5u), v16), (__m64)qword_2787E8));
        v19 = _m_psrlwi(_m_paddw(v17, _m_psrlwi(v17, 5u)), 5u);
        *(v6 - 1) = _mm_cvtsi64_si32(
                      _m_por(
                        _m_packuswb(
                          _m_por(_m_psllwi(_m_pand(v19, (__m64)qword_26DFD8), 2u), _m_pand(v19, (__m64)qword_26DFF8)),
                          0LL),
                        _m_pand(_m_paddw(v18, _m_psrlwi(v18, 5u)), (__m64)qword_26DFF0)));
      }
      if ( (v9 & 1) == 0 )
        break;
LABEL_6:
      v20 = _mm_cvtsi32_si64(*(unsigned __int16 *)v6);
      v21 = _mm_cvtsi32_si64(*(unsigned __int16 *)a2);
      v22 = _m_punpcklbw(v20, 0LL);
      v23 = _m_punpcklbw(v21, 0LL);
      v24 = _m_por(_m_psrlwi(_m_pand(v22, (__m64)qword_26E000), 2u), _m_pand(v22, (__m64)qword_26DFF8));
      v25 = _m_pand(v20, (__m64)qword_26DFF0);
      v26 = _m_psrlwi(v25, 5u);
      a2 = (union _ALPHAPIX *)((char *)a2 + 2);
      v6 = (unsigned int *)((char *)v6 + 2);
      v27 = _m_paddw(
              _m_paddw(_m_psubw(_m_psllwi(v24, 5u), v24), (__m64)qword_26DFE8),
              _m_pmullw(
                _m_psubw(
                  _m_por(_m_pand(v23, (__m64)qword_26DFF8), _m_psrlwi(_m_pand(v23, (__m64)qword_26E000), 2u)),
                  v24),
                (__m64)qword_2787E8));
      v28 = _m_paddw(
              _m_paddw(_m_psubw(v25, v26), (__m64)qword_26DFE0),
              _m_pmullw(_m_psubw(_m_psrlwi(_m_pand(v21, (__m64)qword_26DFF0), 5u), v26), (__m64)qword_2787E8));
      v29 = _m_psrlwi(_m_paddw(v27, _m_psrlwi(v27, 5u)), 5u);
      *((_WORD *)v6 - 1) = _mm_cvtsi64_si32(
                             _m_por(
                               _m_packsswb(
                                 _m_por(
                                   _m_psllwi(_m_pand(v29, (__m64)qword_26DFD8), 2u),
                                   _m_pand(v29, (__m64)qword_26DFF8)),
                                 0LL),
                               _m_pand(_m_paddw(v28, _m_psrlwi(v28, 5u)), (__m64)qword_26DFF0)));
      if ( !v4 )
        break;
      --v4;
    }
  }
  _m_empty();
}
