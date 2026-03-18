/*
 * XREFs of ?mmxAlphaPerPixelAndConst@@YGXPAT_ALPHAPIX@@0JU_BLENDFUNCTION@@@Z @ 0xF996E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall mmxAlphaPerPixelAndConst(
        union _ALPHAPIX *a1,
        union _ALPHAPIX *a2,
        unsigned int a3,
        struct _BLENDFUNCTION a4)
{
  __m64 *v5; // edi
  __m64 v6; // mm7
  __m64 v7; // mm5
  __m64 v8; // mm5
  __m64 v9; // mm5
  char v11; // al
  __m64 v12; // mm1
  __m64 v13; // mm0
  __m64 v14; // mm2
  __m64 v15; // mm3
  __m64 v16; // mm6
  __m64 v17; // mm1
  __m64 v18; // mm0
  __m64 v19; // mm1
  __m64 v20; // mm2
  __m64 v21; // mm1
  __m64 v22; // mm3
  __m64 v23; // mm2
  __m64 v24; // mm2
  __m64 v25; // mm0
  __m64 v26; // mm6
  __m64 v27; // mm0
  __m64 v28; // mm0
  __m64 v29; // mm1
  __m64 v30; // mm0

  v5 = (__m64 *)a1;
  v6.m64_u64 = qword_26E010;
  v7 = _mm_cvtsi32_si64(a4.SourceConstantAlpha);
  v8 = _m_punpcklwd(v7, v7);
  v9 = _m_punpcklwd(v8, v8);
  if ( ((unsigned __int8)a1 & 7) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    v11 = a3;
    for ( a3 >>= 1; a3; --a3 )
    {
      v12 = _m_punpckhbw(*(__m64 *)a2, 0LL);
      v13 = _m_pmullw(_m_punpcklbw(*(__m64 *)a2, 0LL), v9);
      a2 = (union _ALPHAPIX *)((char *)a2 + 8);
      v14 = _m_paddusw(v13, v6);
      v15 = _m_paddusw(_m_pmullw(v12, v9), v6);
      v16 = _m_packuswb(
              _m_psrlwi(_m_paddusw(_m_psrlwi(v14, 8u), v14), 8u),
              _m_psrlwi(_m_paddusw(_m_psrlwi(v15, 8u), v15), 8u));
      v17 = _m_pxor(_m_psrldi(v16, 0x18u), (__m64)qword_26E008);
      v18 = _m_punpcklwd(v17, v17);
      v19 = _m_punpckhwd(v17, v17);
      v20 = _m_punpcklbw((__m64)v5->m64_u64, 0LL);
      v21 = _m_pmullw(_m_punpcklwd(v19, v19), _m_punpckhbw((__m64)v5->m64_u64, 0LL));
      ++v5;
      v22 = _m_paddusw(v21, v6);
      v23 = _m_paddusw(_m_pmullw(_m_punpcklwd(v18, v18), v20), v6);
      v5[-1].m64_u64 = (unsigned __int64)_m_paddusb(
                                           _m_packuswb(
                                             _m_psrlwi(_m_paddusw(_m_psrlwi(v23, 8u), v23), 8u),
                                             _m_psrlwi(_m_paddusw(_m_psrlwi(v22, 8u), v22), 8u)),
                                           v16);
    }
    if ( (v11 & 1) == 0 )
      break;
LABEL_5:
    v24 = _m_paddusw(_m_pmullw(_m_punpcklbw(_mm_cvtsi32_si64(*(_DWORD *)a2), 0LL), v9), v6);
    v25 = _m_psrlwi(_m_paddusw(_m_psrlwi(v24, 8u), v24), 8u);
    v26 = _m_packuswb(v25, v25);
    v27 = _m_pxor(_m_psrldi(v26, 0x18u), (__m64)qword_26E008);
    v28 = _m_punpcklwd(v27, v27);
    v29 = _m_paddusw(_m_pmullw(_m_punpckldq(v28, v28), _m_punpcklbw(_mm_cvtsi32_si64(v5->m64_i32[0]), 0LL)), v6);
    v30 = _m_psrlwi(_m_paddusw(_m_psrlwi(v29, 8u), v29), 8u);
    v5->m64_i32[0] = _mm_cvtsi64_si32(_m_paddusb(_m_packuswb(v30, v30), v26));
    v5 = (__m64 *)((char *)v5 + 4);
    a2 = (union _ALPHAPIX *)((char *)a2 + 4);
    if ( !a3 )
      break;
    --a3;
  }
  _m_empty();
}
