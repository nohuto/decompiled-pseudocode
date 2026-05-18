/*
 * XREFs of sub_1800CBC74 @ 0x1800CBC74
 * Callers:
 *     sub_1800CC828 @ 0x1800CC828 (sub_1800CC828.c)
 * Callees:
 *     sub_1800CC5B0 @ 0x1800CC5B0 (sub_1800CC5B0.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

char __fastcall sub_1800CBC74(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  char v4; // di
  __int64 v5; // rsi

  v2 = a1[1];
  v3 = *a1;
  v4 = 0;
  if ( (v2 - *a1) / 48 == (a2[1] - *a2) / 48LL )
  {
    if ( v3 == v2 )
    {
      return 1;
    }
    else
    {
      v5 = *a2 - v3;
      while ( (unsigned __int8)sub_1800CC5B0(v3, v5 + v3) )
      {
        v3 += 48LL;
        if ( v3 == v2 )
          return 1;
      }
    }
  }
  return v4;
}
