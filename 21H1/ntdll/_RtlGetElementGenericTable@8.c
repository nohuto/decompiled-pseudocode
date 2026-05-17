/*
 * XREFs of _RtlGetElementGenericTable@8 @ 0x4B35E0F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__stdcall RtlGetElementGenericTable(_DWORD *a1, int a2)
{
  unsigned int v2; // edx
  unsigned int v3; // esi
  _DWORD *i; // ecx
  unsigned int v5; // eax
  unsigned int j; // esi
  unsigned int v8; // ebx
  unsigned int v9; // eax

  v2 = a2 + 1;
  v3 = a1[4];
  i = (_DWORD *)a1[3];
  if ( a2 == -1 )
    return 0;
  v5 = a1[5];
  if ( v2 > v5 )
    return 0;
  if ( v2 != v3 )
  {
    if ( v2 >= v3 )
    {
      v8 = v2 - v3;
      v9 = v5 - a2;
      if ( v2 - v3 > v9 )
      {
        for ( i = a1 + 1; v9; --v9 )
          i = (_DWORD *)i[1];
      }
      else
      {
        for ( ; v8; --v8 )
          i = (_DWORD *)*i;
      }
    }
    else if ( v2 <= v3 >> 1 )
    {
      i = a1 + 1;
      do
      {
        i = (_DWORD *)*i;
        --v2;
      }
      while ( v2 );
    }
    else
    {
      for ( j = v3 - v2; j; --j )
        i = (_DWORD *)i[1];
    }
    a1[3] = i;
    a1[4] = a2 + 1;
  }
  return i + 3;
}
