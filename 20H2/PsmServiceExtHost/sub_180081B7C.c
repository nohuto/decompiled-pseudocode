/*
 * XREFs of sub_180081B7C @ 0x180081B7C
 * Callers:
 *     sub_1800807E4 @ 0x1800807E4 (sub_1800807E4.c)
 * Callees:
 *     sub_18000E718 @ 0x18000E718 (sub_18000E718.c)
 *     sub_180034EB8 @ 0x180034EB8 (sub_180034EB8.c)
 *     sub_180034EEC @ 0x180034EEC (sub_180034EEC.c)
 */

__int64 __fastcall sub_180081B7C(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdx
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a2 + 88);
  v4 = *(_QWORD *)(v2 + 160);
  v7[1] = 0LL;
  v7[0] = a2;
  sub_180034EEC(a1, a2);
  sub_18000E718(
    a1,
    (unsigned int *)(v4 + 88),
    v2 + 88,
    0LL,
    (__int64 (__fastcall *)(__int64, __int64))sub_180081C60,
    (__int64)v7);
  return sub_180034EB8(a1, v5);
}
