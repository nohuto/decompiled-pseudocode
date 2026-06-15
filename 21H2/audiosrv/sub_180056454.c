/*
 * XREFs of sub_180056454 @ 0x180056454
 * Callers:
 *     sub_180065FC8 @ 0x180065FC8 (sub_180065FC8.c)
 * Callees:
 *     sub_180055E9C @ 0x180055E9C (sub_180055E9C.c)
 */

__int64 __fastcall sub_180056454(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // rdx
  float v4; // xmm4_4
  int v5; // xmm5_4
  __int64 v6; // r9
  __int64 result; // rax
  __int64 v8; // r10

  *a1 = off_180147890;
  sub_180055E9C((__int64)(a1 + 1), a2, 0.75, 0.25, 1074790400);
  *(_QWORD *)(v2 + 80) = 0LL;
  *(_QWORD *)(v2 + 88) = 0LL;
  *(_QWORD *)(v2 + 96) = 0LL;
  *(_QWORD *)(v2 + 104) = 0LL;
  *(_QWORD *)(v2 + 112) = 0LL;
  *(_DWORD *)(v2 + 120) = 10;
  sub_180055E9C(v2 + 128, v3, v4, 0.25, v5);
  result = v6;
  *(_QWORD *)(v6 + 200) = v8;
  *(_QWORD *)(v6 + 208) = v8;
  *(_QWORD *)(v6 + 216) = v8;
  *(_DWORD *)(v6 + 224) = v8;
  *(_DWORD *)(v6 + 232) = v8;
  return result;
}
