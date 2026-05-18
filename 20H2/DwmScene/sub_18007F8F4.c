/*
 * XREFs of sub_18007F8F4 @ 0x18007F8F4
 * Callers:
 *     sub_1800838E4 @ 0x1800838E4 (sub_1800838E4.c)
 *     sub_1800AD708 @ 0x1800AD708 (sub_1800AD708.c)
 * Callees:
 *     sub_18001256C @ 0x18001256C (sub_18001256C.c)
 */

__int64 __fastcall sub_18007F8F4(__int64 a1, unsigned int *a2)
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
    0.0078125,
    0.0,
    *(double *)_mm_unpacklo_ps(
                 _mm_unpacklo_ps((__m128)*a2, (__m128)a2[2]),
                 _mm_unpacklo_ps((__m128)a2[1], (__m128)0x3F800000u)).m128_u64);
  return a1;
}
