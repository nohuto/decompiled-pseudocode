/*
 * XREFs of sub_18010F1F4 @ 0x18010F1F4
 * Callers:
 *     sub_18010FEE0 @ 0x18010FEE0 (sub_18010FEE0.c)
 * Callees:
 *     sub_180017874 @ 0x180017874 (sub_180017874.c)
 *     sub_18005A894 @ 0x18005A894 (sub_18005A894.c)
 *     sub_180068194 @ 0x180068194 (sub_180068194.c)
 *     sub_1800703D4 @ 0x1800703D4 (sub_1800703D4.c)
 *     sub_1800A1030 @ 0x1800A1030 (sub_1800A1030.c)
 *     sub_1800D7FD4 @ 0x1800D7FD4 (sub_1800D7FD4.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall sub_18010F1F4(_OWORD *a1, __int64 a2, _BYTE *a3)
{
  int v4; // ebx
  int v5; // r14d
  int v6; // esi
  _QWORD *v7; // rax
  const void **v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int128 v12; // [rsp+28h] [rbp-71h] BYREF
  __int128 v13; // [rsp+38h] [rbp-61h]
  __int64 v14[3]; // [rsp+48h] [rbp-51h] BYREF
  unsigned __int64 v15; // [rsp+60h] [rbp-39h]
  __int128 v16; // [rsp+68h] [rbp-31h] BYREF
  __int128 v17; // [rsp+78h] [rbp-21h] BYREF
  _DWORD v18[7]; // [rsp+88h] [rbp-11h] BYREF
  __int128 v19; // [rsp+A4h] [rbp+Bh]
  int v20; // [rsp+B4h] [rbp+1Bh]
  int v21; // [rsp+B8h] [rbp+1Fh]

  v4 = 1;
  if ( a3 )
  {
    if ( *a3 == 1 )
    {
      v4 = 0;
    }
    else if ( *a3 != 2 )
    {
      switch ( *a3 )
      {
        case 3:
          v4 = 2;
          break;
        case 4:
          v4 = 7;
          break;
        case 5:
          v4 = 8;
          break;
        case 6:
          v4 = 9;
          break;
        case 7:
          v4 = 10;
          break;
        case 8:
          v4 = 6;
          break;
      }
    }
    if ( a3[1] == 1 )
      v5 = 2;
    else
      v5 = a3[1] == 3;
    if ( a3[2] == 1 )
      v6 = 2;
    else
      v6 = a3[2] == 3;
    v16 = 0LL;
    v7 = (_QWORD *)sub_1800703D4(a2);
    sub_180017874(v7, &v16, 1u);
    sub_1800D7FD4(v14, _InterlockedExchangeAdd(&dword_180221800, 1u));
    v8 = sub_18005A894(v14, 0LL, "Deserialized sampler ", 0x15uLL);
    v13 = 0uLL;
    v12 = *(_OWORD *)v8;
    v13 = *((_OWORD *)v8 + 1);
    v8[2] = 0LL;
    v8[3] = (const void *)15;
    *(_BYTE *)v8 = 0;
    sub_180068194(v16, (__int64 *)&v12);
    if ( v15 >= 0x10 )
    {
      v9 = v14[0];
      if ( v15 + 1 >= 0x1000 )
      {
        v9 = *(_QWORD *)(v14[0] - 8);
        if ( (unsigned __int64)(v14[0] - v9 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v9, v15 + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v9);
    }
    v18[3] = 0;
    v18[4] = 0;
    v18[5] = 1;
    v18[6] = 7;
    v19 = xmmword_180214CE0;
    v20 = 0;
    v21 = 2139095039;
    v18[0] = v4;
    v18[1] = v5;
    v18[2] = v6;
    sub_1800A1030((_QWORD *)v16, v18, 0LL);
    *a1 = v16;
  }
  else
  {
    v17 = 0LL;
    v10 = (_QWORD *)sub_1800703D4(a2);
    sub_180017874(v10, &v17, 1u);
    *a1 = v17;
  }
  return a1;
}
