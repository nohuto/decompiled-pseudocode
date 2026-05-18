/*
 * XREFs of sub_180089F7C @ 0x180089F7C
 * Callers:
 *     sub_180089EFC @ 0x180089EFC (sub_180089EFC.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall sub_180089F7C(__m128 *a1, __m128 *a2, double a3)
{
  __m128 v3; // xmm6
  __m128 v4; // xmm3
  __m128 v5; // xmm2
  __m128 v6; // xmm1
  __m128 v7; // xmm6
  __m128 v8; // xmm4
  __m128 v9; // xmm7
  __m128 v10; // xmm3
  __m128 v11; // xmm4

  v3 = *(__m128 *)&a3;
  if ( !a1 )
    wassert(L"pSin != nullptr", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathVector.inl", 0x115Bu);
  if ( !a2 )
    wassert(L"pCos != nullptr", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathVector.inl", 0x115Cu);
  v4 = _mm_mul_ps((__m128)xmmword_18013FBE0, *(__m128 *)&a3);
  v5 = _mm_cmple_ps(_mm_and_ps(v4, (__m128)xmmword_18013FC20), (__m128)xmmword_18013FC70);
  v6 = _mm_or_ps(_mm_and_ps(v4, (__m128)xmmword_18013FB40), (__m128)xmmword_18013FC70);
  v7 = _mm_sub_ps(
         v3,
         _mm_mul_ps(
           _mm_xor_ps(_mm_and_ps(_mm_sub_ps(_mm_add_ps(v6, v4), v6), v5), _mm_andnot_ps(v5, v4)),
           (__m128)xmmword_18013FBD0));
  v8 = _mm_and_ps((__m128)xmmword_18013FB40, v7);
  v9 = _mm_cmple_ps(_mm_andnot_ps(v8, v7), (__m128)xmmword_18013FBB0);
  v10 = _mm_or_ps(_mm_andnot_ps(v9, _mm_sub_ps(_mm_or_ps((__m128)xmmword_18013FBC0, v8), v7)), _mm_and_ps(v9, v7));
  v11 = _mm_mul_ps(v10, v10);
  *a1 = _mm_mul_ps(
          _mm_add_ps(
            _mm_mul_ps(
              _mm_add_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_mul_ps(
                      _mm_add_ps(
                        _mm_mul_ps(
                          _mm_add_ps(
                            _mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_18013FAC0, (__m128)xmmword_18013FAC0, 0), v11),
                            _mm_shuffle_ps((__m128)xmmword_18013FAB0, (__m128)xmmword_18013FAB0, 255)),
                          v11),
                        _mm_shuffle_ps((__m128)xmmword_18013FAB0, (__m128)xmmword_18013FAB0, 170)),
                      v11),
                    _mm_shuffle_ps((__m128)xmmword_18013FAB0, (__m128)xmmword_18013FAB0, 85)),
                  v11),
                _mm_shuffle_ps((__m128)xmmword_18013FAB0, (__m128)xmmword_18013FAB0, 0)),
              v11),
            (__m128)xmmword_18013FB80),
          v10);
  *a2 = _mm_mul_ps(
          _mm_add_ps(
            _mm_mul_ps(
              _mm_add_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_mul_ps(
                      _mm_add_ps(
                        _mm_mul_ps(
                          _mm_add_ps(
                            _mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_18013FAE0, (__m128)xmmword_18013FAE0, 0), v11),
                            _mm_shuffle_ps((__m128)xmmword_18013FAD0, (__m128)xmmword_18013FAD0, 255)),
                          v11),
                        _mm_shuffle_ps((__m128)xmmword_18013FAD0, (__m128)xmmword_18013FAD0, 170)),
                      v11),
                    _mm_shuffle_ps((__m128)xmmword_18013FAD0, (__m128)xmmword_18013FAD0, 85)),
                  v11),
                _mm_shuffle_ps((__m128)xmmword_18013FAD0, (__m128)xmmword_18013FAD0, 0)),
              v11),
            (__m128)xmmword_18013FB80),
          _mm_or_ps(_mm_andnot_ps(v9, (__m128)xmmword_18013FBA0), _mm_and_ps((__m128)xmmword_18013FB80, v9)));
}
