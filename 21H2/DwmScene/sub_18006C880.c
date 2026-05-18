/*
 * XREFs of sub_18006C880 @ 0x18006C880
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall sub_18006C880(__int64 a1, _DWORD *a2, __int64 a3)
{
  float v3; // xmm6_4
  __m128 v6; // xmm3
  _DWORD *result; // rax
  __m128 v8; // xmm2
  unsigned __int64 v9; // [rsp+20h] [rbp-38h]
  unsigned int v10; // [rsp+2Ch] [rbp-2Ch]

  v3 = *(float *)&a3;
  v10 = HIDWORD(a3);
  LODWORD(v9) = (*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1);
  v6 = 0LL;
  v6.m128_f32[0] = v3;
  HIDWORD(v9) = (*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
  result = a2;
  v8 = _mm_mul_ps((__m128)v9, _mm_unpacklo_ps(v6, (__m128)v10));
  *a2 = v8.m128_i32[0];
  a2[1] = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
  return result;
}
