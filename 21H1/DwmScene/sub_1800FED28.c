/*
 * XREFs of sub_1800FED28 @ 0x1800FED28
 * Callers:
 *     sub_1800FEA0C @ 0x1800FEA0C (sub_1800FEA0C.c)
 * Callees:
 *     sub_1800B2A9C @ 0x1800B2A9C (sub_1800B2A9C.c)
 *     sub_1800B2CC4 @ 0x1800B2CC4 (sub_1800B2CC4.c)
 *     sub_1800B2F70 @ 0x1800B2F70 (sub_1800B2F70.c)
 *     sub_1801003C4 @ 0x1801003C4 (sub_1801003C4.c)
 *     memset @ 0x18011E09A (memset.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800FED28(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // r15
  __int64 i; // rcx
  unsigned __int8 v9; // al
  __int64 v10; // rax
  __int64 result; // rax
  _BYTE *v12; // rax
  int v13; // eax
  _BYTE *v14; // rax
  _QWORD *v15; // rax
  char *v16; // rcx
  char *v17; // rdx
  __int64 v18; // rbx
  signed __int64 v19; // r8
  char *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  float v24; // xmm2_4
  float v25; // xmm1_4
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // [rsp+20h] [rbp-E0h] BYREF
  int v29; // [rsp+24h] [rbp-DCh] BYREF
  int v30; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v31[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v33; // [rsp+48h] [rbp-B8h]
  _BYTE v34[240]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = a2;
  v5 = 0LL;
  v6 = 0LL;
  *(_DWORD *)(a3 + 32) = 2;
  v7 = 0LL;
  v32 = 0LL;
  v33 = 15LL;
  LOBYTE(v31[0]) = 0;
  for ( i = a2 + *(int *)(*(_QWORD *)a2 + 4LL); ; i = v4 + *(int *)(*(_QWORD *)v4 + 4LL) )
  {
    LOBYTE(a2) = 10;
    v9 = std::ios::widen(i, a2);
    v10 = sub_1800B2A9C(v4, v31, v9);
    result = std::ios_base::operator bool(v10 + *(int *)(*(_QWORD *)v10 + 4LL));
    if ( !(_BYTE)result )
      break;
    if ( v32 )
    {
      v12 = v31;
      if ( v33 >= 0x10 )
        v12 = (_BYTE *)v31[0];
      if ( v32 != 1 || (*v12 != 13 ? (v13 = *v12 < 0xDu ? -1 : 1) : (v13 = 0), v13) )
      {
        v14 = v31;
        if ( v33 >= 0x10 )
          v14 = (_BYTE *)v31[0];
        if ( *v14 != 35 )
        {
          if ( v5 )
          {
            memset(v34, 0, sizeof(v34));
            sub_1800B2CC4((__int64)v34, (__int64)v31, 1, 1);
            v22 = std::istream::operator>>(v34, &v30);
            v23 = std::istream::operator>>(v22, &v29);
            std::istream::operator>>(v23, &v28);
            v24 = (float)v28;
            v25 = (float)v29;
            v26 = *(_QWORD *)(a3 + 8) + 16 * (v7 / v5 / v5 + v5 * (v7 / v5 % v5 + v5 * (v7 % v5)));
            *(float *)v26 = (float)v30;
            *(float *)(v26 + 4) = v25;
            *(float *)(v26 + 8) = v24;
            *(_DWORD *)(v26 + 12) = 1065353216;
            ++v7;
            sub_1800B2F70((__int64)&v34[144]);
            result = std::ios::~ios<char,std::char_traits<char>>(&v34[144]);
            if ( v7 == v6 )
              break;
          }
          else
          {
            v15 = v31;
            if ( v33 >= 0x10 )
              v15 = (_QWORD *)v31[0];
            v16 = (char *)v15 + v32;
            v17 = (char *)v31;
            if ( v33 >= 0x10 )
              v17 = (char *)v31[0];
            v18 = 0LL;
            v19 = v16 - v17;
            if ( v17 > v16 )
              v19 = 0LL;
            if ( v19 )
            {
              v20 = v17;
              do
              {
                v21 = v18 + 1;
                if ( *v20 != 32 )
                  v21 = v18;
                v18 = v21;
                ++v20;
              }
              while ( v20 - v17 != v19 );
            }
            v5 = v18 + 1;
            v6 = v5 * v5 * v5;
            sub_1801003C4(a3 + 8, v6);
          }
        }
      }
    }
  }
  *(_QWORD *)a3 = v5;
  if ( v33 >= 0x10 )
  {
    v27 = v31[0];
    if ( v33 + 1 >= 0x1000 )
    {
      v27 = *(_QWORD *)(v31[0] - 8LL);
      if ( (unsigned __int64)(v31[0] - v27 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v27, v33 + 40);
        __debugbreak();
      }
    }
    return j_j__o_free(v27);
  }
  return result;
}
