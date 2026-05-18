/*
 * XREFs of sub_1800CF2C8 @ 0x1800CF2C8
 * Callers:
 *     sub_180043F74 @ 0x180043F74 (sub_180043F74.c)
 *     sub_180055318 @ 0x180055318 (sub_180055318.c)
 *     sub_180055D0C @ 0x180055D0C (sub_180055D0C.c)
 *     sub_18005C020 @ 0x18005C020 (sub_18005C020.c)
 *     sub_18005C428 @ 0x18005C428 (sub_18005C428.c)
 *     sub_18005C8C4 @ 0x18005C8C4 (sub_18005C8C4.c)
 *     sub_18005EAC4 @ 0x18005EAC4 (sub_18005EAC4.c)
 * Callees:
 *     sub_18009C6C8 @ 0x18009C6C8 (sub_18009C6C8.c)
 *     sub_18009DE18 @ 0x18009DE18 (sub_18009DE18.c)
 *     sub_1800A155C @ 0x1800A155C (sub_1800A155C.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800CF2C8(_QWORD *Src, __int64 a2, const void **a3, int a4)
{
  _QWORD *v8; // rax
  int i; // edi
  char v11; // [rsp+30h] [rbp-58h]
  _BYTE v12[16]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v13; // [rsp+48h] [rbp-40h] BYREF

  v13 = 0LL;
  v8 = operator new(0x40uLL);
  *v8 = v8;
  v8[1] = v8;
  v8[2] = v8;
  *((_WORD *)v8 + 12) = 257;
  *(_QWORD *)&v13 = v8;
  for ( i = 0; i < a4; a3 += 4 )
  {
    if ( ((1LL << i) & a2) != 0 )
      sub_18009DE18((__int64 *)&v13, (__int64)v12, 0, a3, v11);
    ++i;
  }
  sub_1800A155C(Src, (_QWORD **)&v13);
  sub_18009C6C8((__int64 *)&v13, (__int64)&v13);
  return Src;
}
