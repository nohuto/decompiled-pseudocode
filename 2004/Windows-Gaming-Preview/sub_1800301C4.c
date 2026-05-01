/*
 * XREFs of sub_1800301C4 @ 0x1800301C4
 * Callers:
 *     sub_18002A7E0 @ 0x18002A7E0 (sub_18002A7E0.c)
 *     sub_18002DA10 @ 0x18002DA10 (sub_18002DA10.c)
 * Callees:
 *     sub_180034F18 @ 0x180034F18 (sub_180034F18.c)
 */

__int64 __fastcall sub_1800301C4(__int64 a1, __int64 a2, __int64 a3, float a4, int a5, int a6)
{
  __int64 v6; // rcx

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(float *)(a1 + 28) = a4;
  *(_DWORD *)(a1 + 32) = a5;
  *(_DWORD *)(a1 + 36) = a6;
  *(_DWORD *)(a1 + 24) = 17;
  *(_QWORD *)(a1 + 40) = 0xFFFFFFFFLL;
  *(_DWORD *)(a1 + 60) = 10;
  sub_180034F18();
  return v6;
}
