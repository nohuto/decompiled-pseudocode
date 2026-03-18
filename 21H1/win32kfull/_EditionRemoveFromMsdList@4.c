/*
 * XREFs of _EditionRemoveFromMsdList@4 @ 0x176477
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__stdcall EditionRemoveFromMsdList(_DWORD *a1)
{
  _DWORD *result; // eax
  int v2; // ecx
  _DWORD *v3; // edx

  result = a1;
  v2 = *a1;
  if ( *(_DWORD **)(*a1 + 4) != a1 || (v3 = (_DWORD *)a1[1], (_DWORD *)*v3 != a1) )
    __fastfail(3u);
  *v3 = v2;
  *(_DWORD *)(v2 + 4) = v3;
  return result;
}
