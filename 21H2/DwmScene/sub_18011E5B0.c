/*
 * XREFs of sub_18011E5B0 @ 0x18011E5B0
 * Callers:
 *     sub_18011E660 @ 0x18011E660 (sub_18011E660.c)
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     sub_18011FF84 @ 0x18011FF84 (sub_18011FF84.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18011E5B0(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax
  _QWORD *v7; // [rsp+28h] [rbp-30h]

  v4 = a2;
  for ( result = *a1; v4 != a3; v4 = (_QWORD *)*v4 )
  {
    v7 = operator new(0xB0uLL);
    v7[4] = 0LL;
    v7[5] = 0LL;
    sub_18001277C(v7 + 2, (__int64)(v4 + 2));
    sub_18011FF84(v7 + 6, v4 + 6);
    *(_QWORD *)a1[1] = v7;
    result = a1[1];
    v7[1] = result;
    a1[1] = (__int64)v7;
    ++a1[2];
  }
  return result;
}
