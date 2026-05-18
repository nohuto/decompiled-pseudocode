/*
 * XREFs of sub_18008FED8 @ 0x18008FED8
 * Callers:
 *     sub_1800902A0 @ 0x1800902A0 (sub_1800902A0.c)
 *     sub_1800AF1E0 @ 0x1800AF1E0 (sub_1800AF1E0.c)
 *     sub_1800B9058 @ 0x1800B9058 (sub_1800B9058.c)
 *     sub_1800E0750 @ 0x1800E0750 (sub_1800E0750.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18008FED8(__m128 *a1, __m128 *a2)
{
  if ( !a1 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  if ( !a2 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  return _mm_movemask_ps(_mm_cmpneq_ps(*a2, *a1)) != 0;
}
