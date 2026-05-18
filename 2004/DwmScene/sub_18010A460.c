/*
 * XREFs of sub_18010A460 @ 0x18010A460
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012AA8 @ 0x180012AA8 (sub_180012AA8.c)
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_18008C954 @ 0x18008C954 (sub_18008C954.c)
 *     sub_18008CA54 @ 0x18008CA54 (sub_18008CA54.c)
 *     sub_18008CB4C @ 0x18008CB4C (sub_18008CB4C.c)
 *     sub_18008CE38 @ 0x18008CE38 (sub_18008CE38.c)
 *     sub_18008D1B8 @ 0x18008D1B8 (sub_18008D1B8.c)
 *     sub_18008D250 @ 0x18008D250 (sub_18008D250.c)
 *     sub_18008D54C @ 0x18008D54C (sub_18008D54C.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18010A460(__int64 a1, __int64 a2, _QWORD *a3, unsigned __int16 a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  __int128 v10; // xmm0
  __int64 v11; // rcx
  __int128 Src; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-38h]
  _QWORD v14[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v15; // [rsp+50h] [rbp-20h]

  v7 = sub_18008CA54(a2, a4);
  v15 = 0LL;
  sub_18001CDF8(v14, v7);
  sub_18008D250(a2, a4, a3);
  if ( a4 == (unsigned __int16)sub_18008C954(a2, (__int64)&qword_18020B4E0)
    && sub_18008CB4C(a2)
    && (*(_BYTE *)(*a3 + 160LL) & 2) != 0 )
  {
    sub_18008D1B8(a2, 1);
  }
  sub_180012AA8(&Src, (__int64)v14, (__int64)aEnabled);
  sub_18008CE38(a2);
  if ( v13 >= 0x10 )
  {
    v8 = Src;
    if ( v13 + 1 >= 0x1000 )
    {
      v8 = *(_QWORD *)(Src - 8);
      if ( (unsigned __int64)(Src - v8 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v8, v13 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v8);
  }
  result = sub_18008C954(a2, (__int64)&qword_18020B520);
  if ( a4 == (_WORD)result )
  {
    Src = xmmword_18021AB60;
    if ( *a3 )
    {
      if ( (*(_BYTE *)(*a3 + 160LL) & 2) != 0 )
        v10 = xmmword_1801D3360;
      else
        v10 = xmmword_1801D65C0;
      Src = v10;
    }
    result = sub_18008D54C(a2);
  }
  if ( *((_QWORD *)&v15 + 1) >= 0x10uLL )
  {
    v11 = v14[0];
    if ( (unsigned __int64)(*((_QWORD *)&v15 + 1) + 1LL) >= 0x1000 )
    {
      v11 = *(_QWORD *)(v14[0] - 8LL);
      if ( (unsigned __int64)(v14[0] - v11 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v11, *((_QWORD *)&v15 + 1) + 40LL);
        __debugbreak();
      }
    }
    return j_j__o_free(v11);
  }
  return result;
}
