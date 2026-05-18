/*
 * XREFs of sub_180013820 @ 0x180013820
 * Callers:
 *     sub_180017B6C @ 0x180017B6C (sub_180017B6C.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall sub_180013820(__int64 a1, _QWORD *a2)
{
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 16), a2);
  *(_QWORD *)(a1 + 32) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 44) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_DWORD *)(a1 + 52) = 0;
  return 0LL;
}
