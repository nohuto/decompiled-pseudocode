/*
 * XREFs of _HKLtoPKLq@8 @ 0xA8054
 * Callers:
 *     _NtUserGetInputLocaleInfo@8 @ 0xA7F96 (_NtUserGetInputLocaleInfo@8.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall HKLtoPKLq(int a1, int a2)
{
  _DWORD *v2; // ecx
  _DWORD *v3; // esi
  _DWORD *result; // eax

  v2 = *(_DWORD **)(a1 + 240);
  v3 = 0;
  if ( !v2 )
    return 0;
  result = v2;
  do
  {
    if ( result[5] == a2 )
    {
      if ( (int)result[4] >= 0 )
        return result;
      v3 = result;
    }
    result = (_DWORD *)result[2];
  }
  while ( result != v2 );
  return v3;
}
