/*
 * XREFs of RtlGetElementGenericTable @ 0x18007E690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlGetElementGenericTable(__int64 a1, int a2)
{
  unsigned int v2; // r10d
  unsigned int v3; // r11d
  _QWORD *j; // r8
  int v5; // r9d
  unsigned int v6; // eax
  unsigned int v7; // edx
  unsigned int v8; // eax
  unsigned int i; // r10d

  v2 = *(_DWORD *)(a1 + 32);
  v3 = a2 + 1;
  j = *(_QWORD **)(a1 + 24);
  v5 = a2 + 1;
  if ( a2 == -1 )
    return 0LL;
  v6 = *(_DWORD *)(a1 + 36);
  if ( v3 > v6 )
    return 0LL;
  if ( v3 != v2 )
  {
    if ( v3 < v2 )
    {
      if ( v3 <= v2 >> 1 )
      {
        j = (_QWORD *)(a1 + 8);
        do
        {
          j = (_QWORD *)*j;
          --v5;
        }
        while ( v5 );
      }
      else
      {
        for ( i = v2 - v3; i; --i )
          j = (_QWORD *)j[1];
      }
    }
    else
    {
      v7 = v3 - v2;
      v8 = v6 - v3 + 1;
      if ( v3 - v2 > v8 )
      {
        for ( j = (_QWORD *)(a1 + 8); v8; --v8 )
          j = (_QWORD *)j[1];
      }
      else
      {
        for ( ; v7; --v7 )
          j = (_QWORD *)*j;
      }
    }
    *(_QWORD *)(a1 + 24) = j;
    *(_DWORD *)(a1 + 32) = v3;
  }
  return j + 2;
}
