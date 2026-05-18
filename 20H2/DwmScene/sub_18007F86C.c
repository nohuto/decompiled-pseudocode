/*
 * XREFs of sub_18007F86C @ 0x18007F86C
 * Callers:
 *     sub_1800838E4 @ 0x1800838E4 (sub_1800838E4.c)
 *     sub_1800AD708 @ 0x1800AD708 (sub_1800AD708.c)
 * Callees:
 *     sub_18001256C @ 0x18001256C (sub_18001256C.c)
 */

__int64 __fastcall sub_18007F86C(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = 1065353216LL;
  *(_QWORD *)(a1 + 20) = 1065353216LL;
  *(_QWORD *)(a1 + 40) = 1065353216LL;
  *(_DWORD *)(a1 + 60) = 1065353216;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  sub_18001256C(
    (_OWORD *)a1,
    *(double *)_mm_unpacklo_ps((__m128)0LL, _mm_unpacklo_ps((__m128)*(unsigned int *)(a2 + 4), (__m128)0LL)).m128_u64,
    *(double *)_mm_unpacklo_ps(
                 _mm_unpacklo_ps((__m128)0LL, (__m128)*(unsigned int *)(a2 + 8)),
                 (__m128)xmmword_1801C6A40).m128_u64,
    0.0);
  return a1;
}
