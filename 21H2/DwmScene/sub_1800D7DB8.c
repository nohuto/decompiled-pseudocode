/*
 * XREFs of sub_1800D7DB8 @ 0x1800D7DB8
 * Callers:
 *     sub_1800D88D4 @ 0x1800D88D4 (sub_1800D88D4.c)
 * Callees:
 *     sub_180020E1C @ 0x180020E1C (sub_180020E1C.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800D7DB8(__int64 a1, __int64 a2)
{
  __int64 i; // rbx
  __int128 v5; // xmm0
  __int64 v6; // rsi
  __int128 v7; // xmm1
  double v8; // xmm6_8
  double v9; // xmm7_8
  double v10; // xmm0_8
  double v11; // xmm0_8
  bool v12; // cf
  bool v13; // zf
  _QWORD *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 j; // r14
  double v18; // xmm1_8
  double v19; // xmm0_8
  bool v20; // cf
  bool v21; // zf
  __int64 v22; // rcx
  __int128 v24; // [rsp+20h] [rbp-60h] BYREF
  __int128 v25; // [rsp+30h] [rbp-50h]
  double v26; // [rsp+40h] [rbp-40h]
  double v27; // [rsp+48h] [rbp-38h]

  if ( a1 != a2 )
  {
    for ( i = a1 + 48; i != a2; i += 48LL )
    {
      v5 = *(_OWORD *)i;
      v6 = i;
      v7 = *(_OWORD *)(i + 16);
      *(_QWORD *)(i + 16) = 0LL;
      *(_QWORD *)(i + 24) = 15LL;
      *(_BYTE *)i = 0;
      v8 = *(double *)(i + 32);
      v9 = *(double *)(i + 40);
      v24 = v5;
      v10 = *(double *)(a1 + 32);
      v26 = v8;
      v27 = v9;
      v25 = v7;
      if ( v8 == v10 )
      {
        v11 = *(double *)(a1 + 40);
        v12 = v11 < v9;
        v13 = v11 == v9;
      }
      else
      {
        v12 = v10 < v8;
        v13 = v10 == v8;
      }
      if ( v12 || v13 )
      {
        for ( j = i; ; v6 = j )
        {
          v18 = *(double *)(j - 16);
          j -= 48LL;
          if ( v8 == v18 )
          {
            v19 = *(double *)(j + 40);
            v20 = v19 < v9;
            v21 = v19 == v9;
          }
          else
          {
            v20 = v18 < v8;
            v21 = v18 == v8;
          }
          if ( v20 || v21 )
            break;
          if ( v6 != j )
          {
            sub_180020E1C((_QWORD *)v6, j);
            v18 = *(double *)(j + 32);
          }
          *(double *)(v6 + 32) = v18;
          *(_QWORD *)(v6 + 40) = *(_QWORD *)(j + 40);
        }
        if ( (__int128 *)v6 != &v24 )
        {
          sub_180020E1C((_QWORD *)v6, (__int64)&v24);
          v9 = v27;
          v8 = v26;
        }
        *(double *)(v6 + 32) = v8;
        *(double *)(v6 + 40) = v9;
      }
      else
      {
        v14 = (_QWORD *)(i + 48);
        if ( i != a1 )
        {
          v15 = i - 48;
          do
          {
            v14 -= 6;
            if ( v14 != (_QWORD *)v15 )
              sub_180020E1C(v14, v15);
            v14[4] = *(_QWORD *)(v15 + 32);
            v16 = *(_QWORD *)(v15 + 40);
            v15 -= 48LL;
            v14[5] = v16;
          }
          while ( v15 + 48 != a1 );
        }
        if ( (__int128 *)a1 != &v24 )
        {
          sub_180020E1C((_QWORD *)a1, (__int64)&v24);
          v9 = v27;
          v8 = v26;
        }
        *(double *)(a1 + 32) = v8;
        *(double *)(a1 + 40) = v9;
      }
      if ( *((_QWORD *)&v25 + 1) >= 0x10uLL )
      {
        v22 = v24;
        if ( (unsigned __int64)(*((_QWORD *)&v25 + 1) + 1LL) >= 0x1000 )
        {
          v22 = *(_QWORD *)(v24 - 8);
          if ( (unsigned __int64)(v24 - v22 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v22, *((_QWORD *)&v25 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v22);
      }
    }
  }
  return a2;
}
