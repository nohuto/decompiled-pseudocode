/*
 * XREFs of _RealSuccessor@4 @ 0x4B2AB895
 * Callers:
 *     _RtlEnumerateGenericTableWithoutSplayingAvl@8 @ 0x4B2AB850 (_RtlEnumerateGenericTableWithoutSplayingAvl@8.c)
 *     _RtlEnumerateGenericTableLikeADirectory@28 @ 0x4B35E1B0 (_RtlEnumerateGenericTableLikeADirectory@28.c)
 *     _RtlGetElementGenericTableAvl@8 @ 0x4B35E290 (_RtlGetElementGenericTableAvl@8.c)
 * Callees:
 *     <none>
 */

_DWORD *__thiscall RealSuccessor(_DWORD *this)
{
  _DWORD *v1; // edx
  _DWORD *result; // eax
  _DWORD *i; // ecx

  v1 = this;
  result = (_DWORD *)this[2];
  if ( result )
  {
    while ( result[1] )
      result = (_DWORD *)result[1];
  }
  else
  {
    for ( i = (_DWORD *)*this; (_DWORD *)i[2] == v1; i = (_DWORD *)*i )
      v1 = i;
    return v1 == (_DWORD *)i[1] ? i : 0;
  }
  return result;
}
