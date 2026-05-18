/*
 * XREFs of sub_18008A050 @ 0x18008A050
 * Callers:
 *     sub_1800856C4 @ 0x1800856C4 (sub_1800856C4.c)
 *     sub_180089FC0 @ 0x180089FC0 (sub_180089FC0.c)
 * Callees:
 *     sub_18008A174 @ 0x18008A174 (sub_18008A174.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18008A050(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rcx
  unsigned __int64 i; // rdx
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rdx

  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
  {
    v7 = *((unsigned __int8 *)a3 + i + 16);
    v5 = 0x100000001B3LL * (v7 ^ v5);
  }
  v8 = a1[3];
  v9 = 2 * (v5 & a1[6]);
  if ( *(_QWORD **)(v8 + 16 * (v5 & a1[6]) + 8) == a3 )
  {
    if ( *(_QWORD **)(v8 + 16 * (v5 & a1[6])) == a3 )
    {
      *(_QWORD *)(v8 + 16 * (v5 & a1[6])) = a1[1];
      *(_QWORD *)(a1[3] + 8 * v9 + 8) = a1[1];
    }
    else
    {
      *(_QWORD *)(v8 + 16 * (v5 & a1[6]) + 8) = a3[1];
    }
  }
  else if ( *(_QWORD **)(v8 + 16 * (v5 & a1[6])) == a3 )
  {
    *(_QWORD *)(v8 + 16 * (v5 & a1[6])) = *a3;
  }
  sub_18008A174(a1 + 1, a2, a3);
  return a2;
}
