/*
 * XREFs of sub_1800FB73C @ 0x1800FB73C
 * Callers:
 *     sub_1800DC7F8 @ 0x1800DC7F8 (sub_1800DC7F8.c)
 * Callees:
 *     sub_180017764 @ 0x180017764 (sub_180017764.c)
 *     sub_180097958 @ 0x180097958 (sub_180097958.c)
 *     sub_180098878 @ 0x180098878 (sub_180098878.c)
 *     sub_180098888 @ 0x180098888 (sub_180098888.c)
 *     sub_180098DA0 @ 0x180098DA0 (sub_180098DA0.c)
 *     sub_180098EDC @ 0x180098EDC (sub_180098EDC.c)
 *     sub_1800991D4 @ 0x1800991D4 (sub_1800991D4.c)
 *     sub_18009924C @ 0x18009924C (sub_18009924C.c)
 *     sub_1800994A4 @ 0x1800994A4 (sub_1800994A4.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800FB73C(__int64 *a1, _QWORD *a2)
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
  v12[0] = xmmword_1801DBE20;
  v12[1] = xmmword_1801DBE30;
  v12[2] = xmmword_1801D5310;
  v13[0] = xmmword_1801D7CD0;
  v13[1] = xmmword_1801D7CB0;
  v13[2] = xmmword_1801D96E0;
  v11[0] = xmmword_1801DBE10;
  v11[1] = xmmword_1801D7CD0;
  v14[0] = 0x10000;
  v14[1] = 65538;
  v14[2] = 131075;
  *(_OWORD *)a1 = 0LL;
  sub_180017764(a2, a1, 1u);
  sub_1800994A4(*a1, 4);
  sub_180098878(*a1, 6);
  sub_1800991D4(*a1, 0);
  sub_180098EDC(*a1, (__int64)v12);
  sub_180098888(*a1, (__int64)v14);
  sub_180098DA0(*a1, (__int64)v13, 0, v9);
  sub_18009924C(*a1, (__int64)v11);
  sub_180097958(*a1, 0);
  return a1;
}
