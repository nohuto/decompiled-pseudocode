/*
 * XREFs of sub_1800AEEF0 @ 0x1800AEEF0
 * Callers:
 *     sub_18001A5D0 @ 0x18001A5D0 (sub_18001A5D0.c)
 *     sub_18007354C @ 0x18007354C (sub_18007354C.c)
 * Callees:
 *     sub_1800AA1D0 @ 0x1800AA1D0 (sub_1800AA1D0.c)
 *     sub_1800AA1E0 @ 0x1800AA1E0 (sub_1800AA1E0.c)
 *     sub_1800AA1F0 @ 0x1800AA1F0 (sub_1800AA1F0.c)
 *     sub_1800AEF5C @ 0x1800AEF5C (sub_1800AEF5C.c)
 */

__int64 __fastcall sub_1800AEEF0(int a1, __int64 *a2)
{
  __int64 v2; // rsi
  int v3; // r14d
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  int v7; // eax
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v2 = *a2;
  v3 = (int)a2;
  v5 = sub_1800AA1D0(*a2, &v9);
  v6 = sub_1800AA1E0(v2, &v10);
  v7 = sub_1800AA1F0(v2);
  return sub_1800AEF5C(a1, v3, *v6, *v5, v7);
}
