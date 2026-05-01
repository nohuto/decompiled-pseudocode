/*
 * XREFs of sub_18003CBB4 @ 0x18003CBB4
 * Callers:
 *     sub_18003CB74 @ 0x18003CB74 (sub_18003CB74.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18003CBB4(unsigned int *a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v4; // [rsp+34h] [rbp-24h] BYREF
  int v5; // [rsp+38h] [rbp-20h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h] BYREF

  v5 = 0;
  v4 = 0;
  v3 = 4;
  v6 = 0x13920028A3BD5C75LL;
  if ( !a1 )
    return 3221225485LL;
  *a1 = 0;
  result = ZwQueryWnfStateData(&v6, 0LL, 0LL, &v5, &v4, &v3);
  if ( (int)result >= 0 && v3 == 4 && v4 < 4 )
  {
    if ( v5 )
      *a1 = v4;
  }
  return result;
}
