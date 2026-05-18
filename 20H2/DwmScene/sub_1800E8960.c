/*
 * XREFs of sub_1800E8960 @ 0x1800E8960
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_18009C6C8 @ 0x18009C6C8 (sub_18009C6C8.c)
 *     sub_1800A0450 @ 0x1800A0450 (sub_1800A0450.c)
 *     sub_1800A1FF8 @ 0x1800A1FF8 (sub_1800A1FF8.c)
 *     sub_1800B7CE0 @ 0x1800B7CE0 (sub_1800B7CE0.c)
 *     sub_1800E7E48 @ 0x1800E7E48 (sub_1800E7E48.c)
 *     sub_1800E8000 @ 0x1800E8000 (sub_1800E8000.c)
 *     sub_1800E8B04 @ 0x1800E8B04 (sub_1800E8B04.c)
 *     sub_180107BB0 @ 0x180107BB0 (sub_180107BB0.c)
 *     sub_1801092C4 @ 0x1801092C4 (sub_1801092C4.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18011E0DC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800E8960(__int64 a1, __int64 a2, __int64 a3)
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
  sub_1801092C4(a1, a2, a3);
  sub_1800E8000(a1, a2);
  sub_1800E8B04(a1, a2);
  v17 = 0LL;
  v16 = 0LL;
  sub_18001CDF8(v15, (__int64)&qword_18020C5C0);
  v12.m128i_i64[0] = (__int64)v15;
  v12.m128i_i64[1] = (__int64)&v17;
  sub_1800B7CE0((__int64 *)&v17, &v12);
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
  sub_1800A1FF8(&v12, &v17, v11, v6);
  v12 = (__m128i)(unsigned __int64)sub_1800A0450(a2, v12.m128i_i64);
  v13 = 0LL;
  v14 = 0LL;
  sub_1800E7E48(&v13, &v12, (__int64)&v13);
  sub_180107BB0(a1, a2, &v13);
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
  return sub_18009C6C8((__int64 *)&v17, (__int64)&v17);
}
