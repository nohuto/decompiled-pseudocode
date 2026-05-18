/*
 * XREFs of sub_18010FD30 @ 0x18010FD30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012B88 @ 0x180012B88 (sub_180012B88.c)
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_180092224 @ 0x180092224 (sub_180092224.c)
 *     sub_180092324 @ 0x180092324 (sub_180092324.c)
 *     sub_18009241C @ 0x18009241C (sub_18009241C.c)
 *     sub_180092708 @ 0x180092708 (sub_180092708.c)
 *     sub_180092A88 @ 0x180092A88 (sub_180092A88.c)
 *     sub_180092B20 @ 0x180092B20 (sub_180092B20.c)
 *     sub_180092E1C @ 0x180092E1C (sub_180092E1C.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18010FD30(__int64 a1, __int64 a2, _QWORD *a3, unsigned __int16 a4)
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

  v7 = sub_180092324(a2, a4);
  v15 = 0LL;
  sub_180020B7C(v14, v7);
  sub_180092B20(a2, a4, a3);
  if ( a4 == (unsigned __int16)sub_180092224(a2, (__int64)&qword_180212558)
    && sub_18009241C(a2)
    && (*(_BYTE *)(*a3 + 160LL) & 2) != 0 )
  {
    sub_180092A88(a2, 1);
  }
  sub_180012B88(&Src, (__int64)v14, (__int64)aEnabled);
  sub_180092708(a2);
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
  result = sub_180092224(a2, (__int64)&qword_180212598);
  if ( a4 == (_WORD)result )
  {
    Src = xmmword_180221E90;
    if ( *a3 )
    {
      if ( (*(_BYTE *)(*a3 + 160LL) & 2) != 0 )
        v10 = xmmword_1801D96E0;
      else
        v10 = xmmword_1801DC950;
      Src = v10;
    }
    result = sub_180092E1C(a2);
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
