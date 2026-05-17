/*
 * XREFs of _RtlRealPredecessor@4 @ 0x4B35DFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__stdcall RtlRealPredecessor(_DWORD *a1)
{
  _DWORD *v1; // edx
  _DWORD *result; // eax
  _DWORD *i; // ecx

  v1 = a1;
  result = (_DWORD *)a1[1];
  if ( result )
  {
    while ( result[2] )
      result = (_DWORD *)result[2];
  }
  else
  {
    for ( i = (_DWORD *)*a1; (_DWORD *)i[1] == v1; i = (_DWORD *)*i )
      v1 = i;
    return v1 == (_DWORD *)i[2] ? i : 0;
  }
  return result;
}
