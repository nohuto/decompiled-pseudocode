/*
 * XREFs of sub_18008F920 @ 0x18008F920
 * Callers:
 *     sub_18008AF94 @ 0x18008AF94 (sub_18008AF94.c)
 *     sub_18008F890 @ 0x18008F890 (sub_18008F890.c)
 * Callees:
 *     sub_18008FA44 @ 0x18008FA44 (sub_18008FA44.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18008F920(_QWORD *a1, __int64 a2, _QWORD *a3)
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
  sub_18008FA44(a1 + 1, a2, a3);
  return a2;
}
