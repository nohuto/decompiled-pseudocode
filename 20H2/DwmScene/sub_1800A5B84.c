/*
 * XREFs of sub_1800A5B84 @ 0x1800A5B84
 * Callers:
 *     sub_1800A5080 @ 0x1800A5080 (sub_1800A5080.c)
 * Callees:
 *     sub_18006CD50 @ 0x18006CD50 (sub_18006CD50.c)
 *     sub_1800A5A10 @ 0x1800A5A10 (sub_1800A5A10.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800A5B84(__int64 *a1, __int64 a2)
{
  _QWORD *j; // rax
  __int64 v4; // rbx
  __int64 **v5; // rcx
  __int64 i; // rcx
  __int64 *v7; // rdx
  _QWORD *v9; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v10; // [rsp+28h] [rbp-20h]

  sub_18006CD50(a1, &v9, a2);
  j = v9;
  v4 = 0LL;
  while ( j != v10 )
  {
    v5 = (__int64 **)j[2];
    ++v4;
    if ( *((_BYTE *)v5 + 25) )
    {
      for ( i = j[1]; !*(_BYTE *)(i + 25) && j == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        j = (_QWORD *)i;
      j = (_QWORD *)i;
    }
    else
    {
      v7 = *v5;
      for ( j = (_QWORD *)j[2]; !*((_BYTE *)v7 + 25); v7 = (__int64 *)*v7 )
        j = v7;
    }
  }
  sub_1800A5A10((__int64)a1, &v9, v9, v10);
  return v4;
}
