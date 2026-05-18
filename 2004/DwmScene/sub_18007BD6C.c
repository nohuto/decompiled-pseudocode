/*
 * XREFs of sub_18007BD6C @ 0x18007BD6C
 * Callers:
 *     sub_180073FB4 @ 0x180073FB4 (sub_180073FB4.c)
 * Callees:
 *     sub_18006CD50 @ 0x18006CD50 (sub_18006CD50.c)
 *     sub_18007BC3C @ 0x18007BC3C (sub_18007BC3C.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18007BD6C(__int64 *a1, __int64 a2)
{
  __int64 *j; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 i; // rcx
  __int64 v7; // rdx
  __int64 *v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v10; // [rsp+28h] [rbp-20h]

  sub_18006CD50(a1, &v9, a2);
  j = v9;
  v4 = 0LL;
  while ( j != v10 )
  {
    v5 = j[2];
    ++v4;
    if ( *(_BYTE *)(v5 + 25) )
    {
      for ( i = j[1]; !*(_BYTE *)(i + 25) && j == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
        j = (__int64 *)i;
      j = (__int64 *)i;
    }
    else
    {
      v7 = *(_QWORD *)v5;
      for ( j = (__int64 *)j[2]; !*(_BYTE *)(v7 + 25); v7 = *(_QWORD *)v7 )
        j = (__int64 *)v7;
    }
  }
  sub_18007BC3C((__int64 ***)a1, &v9, v9, v10);
  return v4;
}
