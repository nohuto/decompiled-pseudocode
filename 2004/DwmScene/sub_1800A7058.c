/*
 * XREFs of sub_1800A7058 @ 0x1800A7058
 * Callers:
 *     sub_1800A9910 @ 0x1800A9910 (sub_1800A9910.c)
 * Callees:
 *     sub_1800A5C38 @ 0x1800A5C38 (sub_1800A5C38.c)
 */

char __fastcall sub_1800A7058(__int64 *a1, __int64 *a2, __int64 *m)
{
  __int64 *j; // rbx
  __int64 **v6; // rax
  __int64 *i; // rax
  __int64 *v8; // rcx
  __int64 **v9; // rax
  __int64 *k; // rax
  __int64 *v11; // rcx

  j = a1;
  if ( a1 == a2 )
    return 1;
  while ( sub_1800A5C38((__int64)(j + 4), (__int64)(m + 4)) )
  {
    v6 = (__int64 **)j[2];
    if ( *((_BYTE *)v6 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v8 = *v6;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v8 + 25); v8 = (__int64 *)*v8 )
        j = v8;
    }
    v9 = (__int64 **)m[2];
    if ( *((_BYTE *)v9 + 25) )
    {
      for ( k = (__int64 *)m[1]; !*((_BYTE *)k + 25) && m == (__int64 *)k[2]; k = (__int64 *)k[1] )
        m = k;
      m = k;
    }
    else
    {
      v11 = *v9;
      for ( m = (__int64 *)m[2]; !*((_BYTE *)v11 + 25); v11 = (__int64 *)*v11 )
        m = v11;
    }
    if ( j == a2 )
      return 1;
  }
  return 0;
}
