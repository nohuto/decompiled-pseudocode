/*
 * XREFs of sub_180118CE0 @ 0x180118CE0
 * Callers:
 *     sub_180118D90 @ 0x180118D90 (sub_180118D90.c)
 * Callees:
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     sub_18011A6B4 @ 0x18011A6B4 (sub_18011A6B4.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180118CE0(__int64 *a1, _QWORD *a2, _QWORD *a3)
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
    sub_18001269C(v7 + 2, (__int64)(v4 + 2));
    sub_18011A6B4(v7 + 6, v4 + 6);
    *(_QWORD *)a1[1] = v7;
    result = a1[1];
    v7[1] = result;
    a1[1] = (__int64)v7;
    ++a1[2];
  }
  return result;
}
