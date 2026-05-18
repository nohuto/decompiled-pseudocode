/*
 * XREFs of sub_18008150C @ 0x18008150C
 * Callers:
 *     sub_18008163C @ 0x18008163C (sub_18008163C.c)
 * Callees:
 *     sub_18008128C @ 0x18008128C (sub_18008128C.c)
 *     sub_1800815B0 @ 0x1800815B0 (sub_1800815B0.c)
 */

__int64 **__fastcall sub_18008150C(__int64 ***a1, __int64 **a2, __int64 *a3, __int64 *a4)
{
  __int64 *j; // rbx
  __int64 **v8; // rax
  __int64 *v9; // r8
  __int64 *i; // rax
  __int64 *v11; // rcx
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF

  j = a3;
  if ( a3 == **a1 && a4 == (__int64 *)*a1 )
  {
    sub_18008128C(a1);
    *a2 = **a1;
  }
  else
  {
    while ( j != a4 )
    {
      v8 = (__int64 **)j[2];
      v9 = j;
      if ( *((_BYTE *)v8 + 25) )
      {
        for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
          j = i;
        j = i;
      }
      else
      {
        v11 = *v8;
        for ( j = (__int64 *)j[2]; !*((_BYTE *)v11 + 25); v11 = (__int64 *)*v11 )
          j = v11;
      }
      sub_1800815B0(a1, v13, v9);
    }
    *a2 = j;
  }
  return a2;
}
