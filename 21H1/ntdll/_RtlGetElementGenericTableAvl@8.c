/*
 * XREFs of _RtlGetElementGenericTableAvl@8 @ 0x4B35E290
 * Callers:
 *     <none>
 * Callees:
 *     _RealPredecessor@4 @ 0x4B2A71B7 (_RealPredecessor@4.c)
 *     _RealSuccessor@4 @ 0x4B2AB895 (_RealSuccessor@4.c)
 */

_DWORD *__stdcall RtlGetElementGenericTableAvl(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // edx
  _DWORD *i; // ecx
  _DWORD *result; // eax
  int v5; // edx
  unsigned int j; // ebx
  unsigned int v7; // eax
  unsigned int v8; // ebx
  int v9; // edx

  v2 = a1[5];
  if ( a2 == -1 || a2 + 1 > a1[6] )
    return 0;
  i = (_DWORD *)a1[4];
  if ( !i )
  {
    for ( i = (_DWORD *)a1[2]; i[1]; i = (_DWORD *)i[1] )
      ;
    v2 = 0;
    a1[4] = i;
    a1[5] = 0;
  }
  if ( a2 == v2 )
    return i + 4;
  if ( a2 >= v2 )
  {
    v7 = a1[6] - a2;
    v8 = a2 - v2;
    if ( a2 - v2 > v7 )
    {
      for ( i = (_DWORD *)a1[2]; i[2]; i = (_DWORD *)i[2] )
        ;
      if ( v7 != 1 )
      {
        do
          i = RealPredecessor(i);
        while ( v9 != 1 );
      }
    }
    else
    {
      for ( ; v8; --v8 )
        i = RealSuccessor(i);
    }
  }
  else if ( a2 < v2 >> 1 )
  {
    for ( i = (_DWORD *)a1[2]; i[1]; i = (_DWORD *)i[1] )
      ;
    for ( j = a2; j; --j )
      i = RealSuccessor(i);
  }
  else if ( v2 != a2 )
  {
    do
      i = RealPredecessor(i);
    while ( v5 != 1 );
  }
  a1[4] = i;
  result = i + 4;
  a1[5] = a2;
  return result;
}
