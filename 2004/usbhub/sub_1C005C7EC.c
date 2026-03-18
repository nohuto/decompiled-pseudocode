/*
 * XREFs of sub_1C005C7EC @ 0x1C005C7EC
 * Callers:
 *     sub_1C002BAB8 @ 0x1C002BAB8 (sub_1C002BAB8.c)
 *     sub_1C005C970 @ 0x1C005C970 (sub_1C005C970.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     sub_1C005C2E8 @ 0x1C005C2E8 (sub_1C005C2E8.c)
 */

_DWORD *__fastcall sub_1C005C7EC(__int64 a1)
{
  _DWORD *result; // rax
  _DWORD *v3; // rbp
  unsigned __int16 v4; // bx
  __int64 v5; // r12
  int *v6; // r14
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rsi
  _TBYTE v10; // [rsp+30h] [rbp-48h] BYREF

  result = 0LL;
  v10 = 0.0;
  if ( dword_1C006B650 )
  {
    v3 = sub_1C000F050(a1);
    v4 = 1;
    v5 = *((_QWORD *)v3 + 377);
    while ( 1 )
    {
      result = sub_1C000F050(a1);
      if ( v4 > *((unsigned __int8 *)result + 2938) )
        break;
      sub_1C0016CA0(a1, v4);
      v6 = (int *)(v5 + 4LL * v4);
      sub_1C005C2E8(a1, &stru_1C00629F8, v4, (__int64)v6, 4);
      v7 = *((_QWORD *)v3 + 378);
      if ( v7 )
      {
        v8 = *v6;
        v9 = 28LL * v4;
        if ( (*v6 & 0x20) != 0 )
        {
          LOBYTE(v10) = *(_BYTE *)(v7 + 28LL * v4);
          BYTE1(v10) = *(_BYTE *)(*((_QWORD *)v3 + 378) + v9 + 1);
          *(_DWORD *)((char *)&v10 + 2) = *(_DWORD *)(*((_QWORD *)v3 + 378) + v9 + 4);
          *(_DWORD *)((char *)&v10 + 6) = *(_DWORD *)(*((_QWORD *)v3 + 378) + v9 + 8);
          sub_1C005C2E8(a1, &stru_1C0062BB8, v4, (__int64)&v10, 10);
          v8 = *v6;
        }
        if ( (v8 & 0x40) != 0 )
          sub_1C005C2E8(a1, &stru_1C0062AF8, v4, v9 + *((_QWORD *)v3 + 378) + 12LL, 16);
      }
      ++v4;
    }
  }
  return result;
}
