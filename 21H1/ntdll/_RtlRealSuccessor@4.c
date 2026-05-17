/*
 * XREFs of _RtlRealSuccessor@4 @ 0x4B35E030
 * Callers:
 *     _RtlEnumerateGenericTableWithoutSplaying@8 @ 0x4B2AB9A0 (_RtlEnumerateGenericTableWithoutSplaying@8.c)
 *     _RtlEnumerateGenericTable@8 @ 0x4B35E0A0 (_RtlEnumerateGenericTable@8.c)
 * Callees:
 *     <none>
 */

_DWORD *__stdcall RtlRealSuccessor(_DWORD *a1)
{
  _DWORD *v1; // edx
  _DWORD *result; // eax
  _DWORD *i; // ecx

  v1 = a1;
  result = (_DWORD *)a1[2];
  if ( result )
  {
    while ( result[1] )
      result = (_DWORD *)result[1];
  }
  else
  {
    for ( i = (_DWORD *)*a1; (_DWORD *)i[2] == v1; i = (_DWORD *)*i )
      v1 = i;
    return v1 == (_DWORD *)i[1] ? i : 0;
  }
  return result;
}
