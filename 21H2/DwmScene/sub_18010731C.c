/*
 * XREFs of sub_18010731C @ 0x18010731C
 * Callers:
 *     sub_18010662C @ 0x18010662C (sub_18010662C.c)
 * Callees:
 *     <none>
 */

__int128 *__fastcall sub_18010731C(__int128 *a1, __int128 *a2, __int128 *a3)
{
  __int128 *v5; // rdx
  __int128 *v6; // rax
  __int128 v7; // xmm1
  __int128 *v8; // rdx
  __int128 *v9; // rax
  __int128 v10; // xmm1
  __int128 *v11; // rdx
  __int128 *i; // rax
  __int128 v13; // xmm1

  if ( a1 == a2 )
    return a3;
  if ( a2 == a3 )
    return a1;
  v5 = a1;
  v6 = a2;
  do
  {
    if ( v5 == --v6 )
      break;
    v7 = *v5;
    *v5++ = *v6;
    *v6 = v7;
  }
  while ( v5 != v6 );
  v8 = a2;
  v9 = a3;
  do
  {
    if ( v8 == --v9 )
      break;
    v10 = *v8;
    *v8++ = *v9;
    *v9 = v10;
  }
  while ( v8 != v9 );
  v11 = a1;
  for ( i = a3; v11 != i; *i = v13 )
  {
    if ( v11 == --i )
      break;
    v13 = *v11;
    *v11++ = *i;
  }
  return (__int128 *)((char *)a1 + (((char *)a3 - (char *)a2) & 0xFFFFFFFFFFFFFFF0uLL));
}
