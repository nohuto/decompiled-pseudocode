/*
 * XREFs of sub_180083264 @ 0x180083264
 * Callers:
 *     sub_18008252C @ 0x18008252C (sub_18008252C.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_180083264(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 *v3; // r11
  __int64 *v6; // r10
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 *v10; // r10
  __int64 *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // r10
  __int64 *i; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  if ( a2 == a3 )
    return a1;
  v6 = a1;
  do
  {
    a2 -= 2;
    if ( v6 == a2 )
      break;
    v7 = *v6;
    *v6 = *a2;
    v8 = a2[1];
    *a2 = v7;
    v9 = v6[1];
    v6[1] = v8;
    v6 += 2;
    a2[1] = v9;
  }
  while ( v6 != a2 );
  v10 = v3;
  v11 = a3;
  do
  {
    v11 -= 2;
    if ( v10 == v11 )
      break;
    v12 = *v10;
    *v10 = *v11;
    v13 = v11[1];
    *v11 = v12;
    v14 = v10[1];
    v10[1] = v13;
    v10 += 2;
    v11[1] = v14;
  }
  while ( v10 != v11 );
  v15 = a1;
  for ( i = a3; v15 != i; i[1] = v19 )
  {
    i -= 2;
    if ( v15 == i )
      break;
    v17 = *v15;
    *v15 = *i;
    v18 = i[1];
    *i = v17;
    v19 = v15[1];
    v15[1] = v18;
    v15 += 2;
  }
  return (__int64 *)((char *)a1 + (((char *)a3 - (char *)v3) & 0xFFFFFFFFFFFFFFF0uLL));
}
