/*
 * XREFs of sub_1800D4B98 @ 0x1800D4B98
 * Callers:
 *     sub_180049844 @ 0x180049844 (sub_180049844.c)
 *     sub_18005ABE8 @ 0x18005ABE8 (sub_18005ABE8.c)
 *     sub_18005B5DC @ 0x18005B5DC (sub_18005B5DC.c)
 *     sub_1800618F0 @ 0x1800618F0 (sub_1800618F0.c)
 *     sub_180061CF8 @ 0x180061CF8 (sub_180061CF8.c)
 *     sub_180062194 @ 0x180062194 (sub_180062194.c)
 *     sub_180064394 @ 0x180064394 (sub_180064394.c)
 * Callees:
 *     sub_1800A1F98 @ 0x1800A1F98 (sub_1800A1F98.c)
 *     sub_1800A36E8 @ 0x1800A36E8 (sub_1800A36E8.c)
 *     sub_1800A6E2C @ 0x1800A6E2C (sub_1800A6E2C.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800D4B98(_QWORD *Src, __int64 a2, const void **a3, int a4)
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
      sub_1800A36E8((__int64 *)&v13, (__int64)v12, 0, a3, v11);
    ++i;
  }
  sub_1800A6E2C(Src, (_QWORD **)&v13);
  sub_1800A1F98((__int64 *)&v13, (__int64)&v13);
  return Src;
}
