/*
 * XREFs of sub_18007777C @ 0x18007777C
 * Callers:
 *     sub_180073258 @ 0x180073258 (sub_180073258.c)
 * Callees:
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_1800618F0 @ 0x1800618F0 (sub_1800618F0.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_18006CAF0 @ 0x18006CAF0 (sub_18006CAF0.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18007777C(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *v2; // r8
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx
  _QWORD *v5; // rdx
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 result; // rax
  __int128 v13; // [rsp+20h] [rbp-30h] BYREF
  _QWORD *v14; // [rsp+30h] [rbp-20h]
  __int128 v15; // [rsp+38h] [rbp-18h] BYREF

  v1 = a1 + 288;
  v15 = 0LL;
  sub_1800615B4(a1 + 312, (__int64)&v15);
  v13 = 0LL;
  v2 = 0LL;
  v14 = 0LL;
  v3 = *(_QWORD **)(v1 + 8);
  v4 = *(_QWORD **)v1;
  v5 = 0LL;
  while ( v4 != v3 )
  {
    v6 = v4[1];
    if ( v6 )
      v7 = *(_DWORD *)(v6 + 8);
    else
      v7 = 0;
    if ( v7 )
    {
      if ( v2 == v5 )
      {
        sub_18006CAF0((__int64 *)&v13, v5, v4);
        v5 = (_QWORD *)*((_QWORD *)&v13 + 1);
      }
      else
      {
        *v5 = 0LL;
        v5[1] = 0LL;
        v8 = v4[1];
        if ( v8 )
          _InterlockedIncrement((volatile signed __int32 *)(v8 + 12));
        *v5 = *v4;
        v5[1] = v4[1];
        v5 = (_QWORD *)(*((_QWORD *)&v13 + 1) + 16LL);
        *((_QWORD *)&v13 + 1) += 16LL;
      }
      v2 = v14;
    }
    v4 += 2;
  }
  if ( (__int128 *)v1 != &v13 )
  {
    v9 = *(_QWORD **)v1;
    *(_QWORD *)v1 = v13;
    *(_QWORD *)&v13 = v9;
    v10 = *(_QWORD *)(v1 + 8);
    *(_QWORD *)(v1 + 8) = v5;
    *((_QWORD *)&v13 + 1) = v10;
    v11 = *(_QWORD **)(v1 + 16);
    *(_QWORD *)(v1 + 16) = v2;
    v14 = v11;
  }
  result = sub_1800618F0((__int64 *)&v13);
  if ( BYTE8(v15) )
    return sub_180061A34(v15);
  return result;
}
