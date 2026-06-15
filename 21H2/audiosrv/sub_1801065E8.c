/*
 * XREFs of sub_1801065E8 @ 0x1801065E8
 * Callers:
 *     sub_180047720 @ 0x180047720 (sub_180047720.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_1801061E8 @ 0x1801061E8 (sub_1801061E8.c)
 *     sub_180106940 @ 0x180106940 (sub_180106940.c)
 *     sub_180106B9C @ 0x180106B9C (sub_180106B9C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1801065E8(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h] BYREF
  char v8[24]; // [rsp+40h] [rbp-18h] BYREF
  char v9; // [rsp+70h] [rbp+18h] BYREF
  char v10; // [rsp+78h] [rbp+20h] BYREF

  v2 = 0LL;
  v6 = 0LL;
  v3 = sub_180106940();
  sub_1801061E8(&v6, v3);
  if ( v6 )
  {
    v7 = v6;
    v4 = sub_180106B9C(a1, (unsigned int)&v7, (unsigned int)&v10, (unsigned int)&v9, (__int64)v8);
    if ( v4 )
      v2 = v4 + 8;
  }
  sub_1800461B8(&v6);
  return v2;
}
