/*
 * XREFs of sub_1800846AC @ 0x1800846AC
 * Callers:
 *     sub_18008462C @ 0x18008462C (sub_18008462C.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall sub_1800846AC(__m128 *a1, __m128 *a2, double a3)
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
  v4 = _mm_mul_ps((__m128)xmmword_180139AE0, *(__m128 *)&a3);
  v5 = _mm_cmple_ps(_mm_and_ps(v4, (__m128)xmmword_180139B20), (__m128)xmmword_180139B70);
  v6 = _mm_or_ps(_mm_and_ps(v4, (__m128)xmmword_180139A40), (__m128)xmmword_180139B70);
  v7 = _mm_sub_ps(
         v3,
         _mm_mul_ps(
           _mm_xor_ps(_mm_and_ps(_mm_sub_ps(_mm_add_ps(v6, v4), v6), v5), _mm_andnot_ps(v5, v4)),
           (__m128)xmmword_180139AD0));
  v8 = _mm_and_ps((__m128)xmmword_180139A40, v7);
  v9 = _mm_cmple_ps(_mm_andnot_ps(v8, v7), (__m128)xmmword_180139AB0);
  v10 = _mm_or_ps(_mm_andnot_ps(v9, _mm_sub_ps(_mm_or_ps((__m128)xmmword_180139AC0, v8), v7)), _mm_and_ps(v9, v7));
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
                            _mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_1801399C0, (__m128)xmmword_1801399C0, 0), v11),
                            _mm_shuffle_ps((__m128)xmmword_1801399B0, (__m128)xmmword_1801399B0, 255)),
                          v11),
                        _mm_shuffle_ps((__m128)xmmword_1801399B0, (__m128)xmmword_1801399B0, 170)),
                      v11),
                    _mm_shuffle_ps((__m128)xmmword_1801399B0, (__m128)xmmword_1801399B0, 85)),
                  v11),
                _mm_shuffle_ps((__m128)xmmword_1801399B0, (__m128)xmmword_1801399B0, 0)),
              v11),
            (__m128)xmmword_180139A80),
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
                            _mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_1801399E0, (__m128)xmmword_1801399E0, 0), v11),
                            _mm_shuffle_ps((__m128)xmmword_1801399D0, (__m128)xmmword_1801399D0, 255)),
                          v11),
                        _mm_shuffle_ps((__m128)xmmword_1801399D0, (__m128)xmmword_1801399D0, 170)),
                      v11),
                    _mm_shuffle_ps((__m128)xmmword_1801399D0, (__m128)xmmword_1801399D0, 85)),
                  v11),
                _mm_shuffle_ps((__m128)xmmword_1801399D0, (__m128)xmmword_1801399D0, 0)),
              v11),
            (__m128)xmmword_180139A80),
          _mm_or_ps(_mm_andnot_ps(v9, (__m128)xmmword_180139AA0), _mm_and_ps((__m128)xmmword_180139A80, v9)));
}
