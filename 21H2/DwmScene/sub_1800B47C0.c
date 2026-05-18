/*
 * XREFs of sub_1800B47C0 @ 0x1800B47C0
 * Callers:
 *     sub_18001D460 @ 0x18001D460 (sub_18001D460.c)
 *     sub_180078E1C @ 0x180078E1C (sub_180078E1C.c)
 * Callees:
 *     sub_1800AFAA0 @ 0x1800AFAA0 (sub_1800AFAA0.c)
 *     sub_1800AFAB0 @ 0x1800AFAB0 (sub_1800AFAB0.c)
 *     sub_1800AFAC0 @ 0x1800AFAC0 (sub_1800AFAC0.c)
 *     sub_1800B482C @ 0x1800B482C (sub_1800B482C.c)
 */

__int64 __fastcall sub_1800B47C0(int a1, __int64 *a2)
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
  v5 = sub_1800AFAA0(*a2, &v9);
  v6 = sub_1800AFAB0(v2, &v10);
  v7 = sub_1800AFAC0(v2);
  return sub_1800B482C(a1, v3, *v6, *v5, v7);
}
