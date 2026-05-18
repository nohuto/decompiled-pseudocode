/*
 * XREFs of sub_1800F5E6C @ 0x1800F5E6C
 * Callers:
 *     sub_1800D6F28 @ 0x1800D6F28 (sub_1800D6F28.c)
 * Callees:
 *     sub_180017524 @ 0x180017524 (sub_180017524.c)
 *     sub_180092088 @ 0x180092088 (sub_180092088.c)
 *     sub_180092FA8 @ 0x180092FA8 (sub_180092FA8.c)
 *     sub_180092FB8 @ 0x180092FB8 (sub_180092FB8.c)
 *     sub_1800934D0 @ 0x1800934D0 (sub_1800934D0.c)
 *     sub_18009360C @ 0x18009360C (sub_18009360C.c)
 *     sub_180093904 @ 0x180093904 (sub_180093904.c)
 *     sub_18009397C @ 0x18009397C (sub_18009397C.c)
 *     sub_180093BD4 @ 0x180093BD4 (sub_180093BD4.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800F5E6C(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rcx
  _DWORD *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  _DWORD *v8; // rax
  __int64 v9; // r9
  _OWORD v11[2]; // [rsp+30h] [rbp-59h] BYREF
  _OWORD v12[3]; // [rsp+50h] [rbp-39h] BYREF
  _OWORD v13[3]; // [rsp+80h] [rbp-9h] BYREF
  _DWORD v14[4]; // [rsp+B0h] [rbp+27h] BYREF

  v3 = 4LL;
  v4 = (_DWORD *)v12 + 2;
  do
  {
    *((_QWORD *)v4 - 1) = 0LL;
    *v4 = 0;
    v4 += 3;
    --v3;
  }
  while ( v3 );
  v5 = v11;
  v6 = 4LL;
  do
  {
    *v5++ = 0LL;
    --v6;
  }
  while ( v6 );
  v7 = 4LL;
  v8 = (_DWORD *)v13 + 2;
  do
  {
    *((_QWORD *)v8 - 1) = 0LL;
    *v8 = 0;
    v8 += 3;
    --v7;
  }
  while ( v7 );
  v12[0] = xmmword_1801D5AA0;
  v12[1] = xmmword_1801D5AB0;
  v12[2] = xmmword_1801CEFC0;
  v13[0] = xmmword_1801D1970;
  v13[1] = xmmword_1801D1950;
  v13[2] = xmmword_1801D3360;
  v11[0] = xmmword_1801D5A90;
  v11[1] = xmmword_1801D1970;
  v14[0] = 0x10000;
  v14[1] = 65538;
  v14[2] = 131075;
  *(_OWORD *)a1 = 0LL;
  sub_180017524(a2, a1, 1u);
  sub_180093BD4(*a1, 4);
  sub_180092FA8(*a1, 6);
  sub_180093904(*a1, 0);
  sub_18009360C(*a1, (__int64)v12);
  sub_180092FB8(*a1, (__int64)v14);
  sub_1800934D0(*a1, (__int64)v13, 0, v9);
  sub_18009397C(*a1, (__int64)v11);
  sub_180092088(*a1, 0);
  return a1;
}
