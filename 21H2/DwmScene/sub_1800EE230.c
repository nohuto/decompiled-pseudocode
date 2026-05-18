/*
 * XREFs of sub_1800EE230 @ 0x1800EE230
 * Callers:
 *     <none>
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_1800A1F98 @ 0x1800A1F98 (sub_1800A1F98.c)
 *     sub_1800A5D20 @ 0x1800A5D20 (sub_1800A5D20.c)
 *     sub_1800A78C8 @ 0x1800A78C8 (sub_1800A78C8.c)
 *     sub_1800BD5B0 @ 0x1800BD5B0 (sub_1800BD5B0.c)
 *     sub_1800ED718 @ 0x1800ED718 (sub_1800ED718.c)
 *     sub_1800ED8D0 @ 0x1800ED8D0 (sub_1800ED8D0.c)
 *     sub_1800EE3D4 @ 0x1800EE3D4 (sub_1800EE3D4.c)
 *     sub_18010D480 @ 0x18010D480 (sub_18010D480.c)
 *     sub_18010EB94 @ 0x18010EB94 (sub_18010EB94.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801239AC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800EE230(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rax
  __int64 v6; // r9
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  char v11; // [rsp+20h] [rbp-19h]
  __m128i v12; // [rsp+30h] [rbp-9h] BYREF
  __int128 v13; // [rsp+40h] [rbp+7h] BYREF
  __int64 v14; // [rsp+50h] [rbp+17h]
  _QWORD v15[2]; // [rsp+58h] [rbp+1Fh] BYREF
  __int128 v16; // [rsp+68h] [rbp+2Fh]
  __int128 v17; // [rsp+78h] [rbp+3Fh] BYREF

  LOBYTE(a3) = 1;
  sub_18010EB94(a1, a2, a3);
  sub_1800ED8D0(a1, a2);
  sub_1800EE3D4(a1, a2);
  v17 = 0LL;
  v16 = 0LL;
  sub_180020B7C(v15, (__int64)&qword_180213638);
  v12.m128i_i64[0] = (__int64)v15;
  v12.m128i_i64[1] = (__int64)&v17;
  sub_1800BD5B0((__int64 *)&v17, &v12);
  `eh vector destructor iterator'(v15, 0x20uLL, 1uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  v12 = 0uLL;
  *(_QWORD *)&v13 = &v12;
  *((_QWORD *)&v13 + 1) = &v12;
  v5 = operator new(0x40uLL);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  v12.m128i_i64[0] = (__int64)v5;
  sub_1800A78C8(&v12, &v17, v11, v6);
  v12 = (__m128i)(unsigned __int64)sub_1800A5D20(a2, v12.m128i_i64);
  v13 = 0LL;
  v14 = 0LL;
  sub_1800ED718(&v13, &v12, (__int64)&v13);
  sub_18010D480(a1, a2, &v13);
  v7 = v13;
  if ( (_QWORD)v13 )
  {
    v8 = (v14 - v13) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v8 >= 0x1000 )
    {
      v9 = v8 + 39;
      v7 = *(_QWORD *)(v13 - 8);
      if ( (unsigned __int64)(v13 - v7 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v7, v9);
        __debugbreak();
      }
    }
    j_j__o_free(v7);
  }
  return sub_1800A1F98((__int64 *)&v17, (__int64)&v17);
}
