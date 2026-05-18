/*
 * XREFs of sub_1801223CC @ 0x1801223CC
 * Callers:
 *     sub_18011E7F4 @ 0x18011E7F4 (sub_18011E7F4.c)
 *     sub_18011E890 @ 0x18011E890 (sub_18011E890.c)
 *     sub_18011EB0C @ 0x18011EB0C (sub_18011EB0C.c)
 *     sub_180120440 @ 0x180120440 (sub_180120440.c)
 *     sub_180122214 @ 0x180122214 (sub_180122214.c)
 * Callees:
 *     sub_180122354 @ 0x180122354 (sub_180122354.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1801223CC(__int64 a1)
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
  sub_180122354(v2, v4);
  return a1;
}
