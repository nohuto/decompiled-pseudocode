/*
 * XREFs of sub_18011CAFC @ 0x18011CAFC
 * Callers:
 *     sub_180118F24 @ 0x180118F24 (sub_180118F24.c)
 *     sub_180118FC0 @ 0x180118FC0 (sub_180118FC0.c)
 *     sub_18011923C @ 0x18011923C (sub_18011923C.c)
 *     sub_18011AB70 @ 0x18011AB70 (sub_18011AB70.c)
 *     sub_18011C944 @ 0x18011C944 (sub_18011C944.c)
 * Callees:
 *     sub_18011CA84 @ 0x18011CA84 (sub_18011CA84.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18011CAFC(__int64 a1)
{
  __int64 v2; // rcx
  _DWORD v4[2]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v5 = a1;
  *(_DWORD *)a1 = 5;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 7LL;
  *(_WORD *)(a1 + 8) = 0;
  v2 = a1 + 64;
  v4[1] = HIDWORD(v2);
  v4[0] = 0;
  sub_18011CA84(v2, v4);
  return a1;
}
