/*
 * XREFs of sub_180031664 @ 0x180031664
 * Callers:
 *     sub_18002F8D8 @ 0x18002F8D8 (sub_18002F8D8.c)
 *     sub_180030058 @ 0x180030058 (sub_180030058.c)
 * Callees:
 *     sub_18002C93C @ 0x18002C93C (sub_18002C93C.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180031664(__int64 *a1, unsigned int *a2)
{
  __int64 *j; // rax
  __int64 v3; // r8
  __int64 **v4; // rcx
  __int64 *i; // rcx
  __int64 *v6; // rdx
  _QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF

  sub_18002C93C(a1, v8, a2);
  j = (__int64 *)v8[0];
  v3 = 0LL;
  while ( j != (__int64 *)v8[1] )
  {
    v4 = (__int64 **)j[2];
    ++v3;
    if ( *((_BYTE *)v4 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v6 = *v4;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v6 + 25); v6 = (__int64 *)*v6 )
        j = v6;
    }
  }
  return v3;
}
