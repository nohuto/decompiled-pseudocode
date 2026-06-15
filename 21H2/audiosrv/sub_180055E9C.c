/*
 * XREFs of sub_180055E9C @ 0x180055E9C
 * Callers:
 *     sub_180055E44 @ 0x180055E44 (sub_180055E44.c)
 *     sub_180056454 @ 0x180056454 (sub_180056454.c)
 *     sub_180056938 @ 0x180056938 (sub_180056938.c)
 *     sub_1800661E0 @ 0x1800661E0 (sub_1800661E0.c)
 *     sub_180066BC0 @ 0x180066BC0 (sub_180066BC0.c)
 *     sub_180140D2C @ 0x180140D2C (sub_180140D2C.c)
 * Callees:
 *     sub_180056C2C @ 0x180056C2C (sub_180056C2C.c)
 */

__int64 __fastcall sub_180055E9C(__int64 a1, __int64 a2, float a3, float a4, int a5)
{
  __int64 v5; // rcx

  *(_DWORD *)(a1 + 28) = a5;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(float *)(a1 + 20) = a3;
  *(float *)(a1 + 24) = a4;
  *(_DWORD *)(a1 + 16) = 17;
  *(_DWORD *)(a1 + 52) = 10;
  sub_180056C2C(a1);
  return v5;
}
