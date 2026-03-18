/*
 * XREFs of ?mmxAlphaPerPixelOnly@@YGXPAT_ALPHAPIX@@0JU_BLENDFUNCTION@@@Z @ 0xF978A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall mmxAlphaPerPixelOnly(
        union _ALPHAPIX *a1,
        union _ALPHAPIX *a2,
        unsigned int a3,
        struct _BLENDFUNCTION a4)
{
  __m64 *v5; // edi
  __m64 v6; // mm7
  char v8; // al
  __m64 v9; // mm1
  __m64 v10; // mm0
  __m64 v11; // mm1
  __m64 m64_u64; // mm3
  __m64 v13; // mm0
  __m64 v14; // mm1
  __m64 v15; // mm2
  __m64 v16; // mm2
  __m64 v17; // mm0
  __m64 v18; // mm3
  __m64 v19; // mm1
  __m64 v20; // mm4
  __m64 v21; // mm0
  __m64 v22; // mm1
  __m64 v23; // mm5
  __m64 v24; // mm4
  __m64 v25; // mm5
  __m64 v26; // mm0
  __m64 v27; // mm0
  __m64 v28; // mm1
  __m64 v29; // mm0

  v5 = (__m64 *)a1;
  v6.m64_u64 = qword_26E020;
  if ( ((unsigned __int8)a1 & 7) != 0 )
    goto LABEL_7;
  while ( 1 )
  {
    v8 = a3;
    a3 >>= 1;
    if ( a3 )
    {
      v9 = _m_pxor(_m_psrldi(*(__m64 *)a2, 0x18u), (__m64)qword_26E018);
      v10 = _m_punpcklwd(v9, v9);
      v11 = _m_punpckhwd(v9, v9);
      m64_u64 = (__m64)v5->m64_u64;
      v13 = _m_punpckldq(v10, v10);
      v14 = _m_punpckldq(v11, v11);
      v15 = _m_punpcklbw((__m64)v5->m64_u64, 0LL);
      if ( --a3 )
      {
        do
        {
          v16 = _m_pmullw(v15, v13);
          v17 = _m_psrldi(*((__m64 *)a2 + 1), 0x18u);
          a2 = (union _ALPHAPIX *)((char *)a2 + 8);
          v18 = _m_paddusw(_m_pmullw(_m_punpckhbw(m64_u64, 0LL), v14), v6);
          v19 = _m_pxor(v17, (__m64)qword_26E018);
          v20 = _m_paddusw(v16, v6);
          v21 = _m_punpcklwd(v19, v19);
          v22 = _m_punpckhwd(v19, v19);
          v23 = _m_psrlwi(_m_paddusw(v18, _m_psrlwi(v18, 8u)), 8u);
          m64_u64 = v5[1];
          v13 = _m_punpckldq(v21, v21);
          v5->m64_u64 = (unsigned __int64)_m_paddusb(
                                            _m_packuswb(_m_psrlwi(_m_paddusw(v20, _m_psrlwi(v20, 8u)), 8u), v23),
                                            *((__m64 *)a2 - 1));
          v14 = _m_punpckldq(v22, v22);
          v15 = _m_punpcklbw(m64_u64, 0LL);
          ++v5;
          --a3;
        }
        while ( a3 );
      }
      v24 = _m_paddusw(_m_pmullw(v15, v13), v6);
      v25 = _m_paddusw(_m_pmullw(_m_punpckhbw(m64_u64, 0LL), v14), v6);
      v5->m64_u64 = (unsigned __int64)_m_paddusb(
                                        _m_packuswb(
                                          _m_psrlwi(_m_paddusw(v24, _m_psrlwi(v24, 8u)), 8u),
                                          _m_psrlwi(_m_paddusw(v25, _m_psrlwi(v25, 8u)), 8u)),
                                        *(__m64 *)a2);
      ++v5;
      a2 = (union _ALPHAPIX *)((char *)a2 + 8);
    }
    if ( (v8 & 1) == 0 )
      break;
LABEL_7:
    v26 = _m_pxor(_m_psrldi(_mm_cvtsi32_si64(*(_DWORD *)a2), 0x18u), (__m64)qword_26E018);
    v27 = _m_punpcklwd(v26, v26);
    v28 = _m_paddusw(_m_pmullw(_m_punpckldq(v27, v27), _m_punpcklbw(_mm_cvtsi32_si64(v5->m64_i32[0]), 0LL)), v6);
    v29 = _m_psrlwi(_m_paddusw(_m_psrlwi(v28, 8u), v28), 8u);
    v5->m64_i32[0] = _mm_cvtsi64_si32(_m_paddusb(_m_packuswb(v29, v29), _mm_cvtsi32_si64(*(_DWORD *)a2)));
    v5 = (__m64 *)((char *)v5 + 4);
    a2 = (union _ALPHAPIX *)((char *)a2 + 4);
    if ( !a3 )
      break;
    --a3;
  }
  _m_empty();
}
