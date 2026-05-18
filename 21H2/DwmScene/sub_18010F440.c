/*
 * XREFs of sub_18010F440 @ 0x18010F440
 * Callers:
 *     <none>
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_180093020 @ 0x180093020 (sub_180093020.c)
 *     sub_18010D060 @ 0x18010D060 (sub_18010D060.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801239AC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=12
_QWORD *__fastcall sub_18010F440(__int64 a1, _QWORD *a2)
{
  __int64 v4[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v5; // [rsp+38h] [rbp-D0h]
  __int64 v6; // [rsp+40h] [rbp-C8h]
  __int64 v7; // [rsp+50h] [rbp-B8h]
  _QWORD *v8; // [rsp+58h] [rbp-B0h]
  _BYTE v9[64]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v10[64]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v11[64]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v12[64]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v13[64]; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v14[64]; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE v15[64]; // [rsp+1E8h] [rbp+E0h] BYREF
  _BYTE v16[64]; // [rsp+228h] [rbp+120h] BYREF
  _BYTE v17[64]; // [rsp+268h] [rbp+160h] BYREF
  _BYTE v18[64]; // [rsp+2A8h] [rbp+1A0h] BYREF
  _BYTE v19[64]; // [rsp+2E8h] [rbp+1E0h] BYREF
  char vars0; // [rsp+328h] [rbp+220h] BYREF

  v8 = a2;
  HIDWORD(v7) = 0;
  v5 = 0LL;
  v6 = 0LL;
  sub_180020B7C(v4, (__int64)&qword_180212558);
  sub_180093020((__int64)v9, v4, 8);
  v5 = 0LL;
  v6 = 0LL;
  sub_180020B7C(v4, (__int64)&qword_180212498);
  sub_180093020((__int64)v10, v4, 6);
  v5 = 0LL;
  v6 = 0LL;
  sub_180020B7C(v4, (__int64)&qword_180212598);
  sub_180093020((__int64)v11, v4, 8);
  v5 = 0LL;
  v6 = 0LL;
  sub_180020B7C(v4, (__int64)&qword_1802124B8);
  sub_180093020((__int64)v12, v4, 6);
  v5 = 0LL;
  v6 = 0LL;
  sub_180020B7C(v4, (__int64)&qword_180212578);
  sub_180093020((__int64)v13, v4, 8);
  v5 = 0LL;
  v6 = 0LL;
  sub_180020B7C(v4, (__int64)&qword_1802124F8);
  sub_180093020((__int64)v14, v4, 5);
  v5 = 0LL;
  v6 = 0LL;
  sub_180020B7C(v4, (__int64)&qword_1802125B8);
  sub_180093020((__int64)v15, v4, 8);
  v5 = 0LL;
  v6 = 0LL;
  sub_180020B7C(v4, (__int64)&qword_180212538);
  sub_180093020((__int64)v16, v4, 6);
  v5 = 0LL;
  v6 = 0LL;
  sub_180020B7C(v4, (__int64)&qword_1802125F8);
  sub_180093020((__int64)v17, v4, 8);
  v5 = 0LL;
  v6 = 0LL;
  sub_180020B7C(v4, (__int64)&qword_180212518);
  sub_180093020((__int64)v18, v4, 2);
  v5 = 0LL;
  v6 = 0LL;
  sub_180020B7C(v4, (__int64)&qword_180212698);
  sub_180093020((__int64)v19, v4, 2);
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  sub_18010D060(a2, (__int64)v9, (__int64)&vars0);
  HIDWORD(v7) = 1;
  `eh vector destructor iterator'(v9, 0x40uLL, 0xBuLL, (void (*)(void *))sub_180093600);
  return a2;
}
