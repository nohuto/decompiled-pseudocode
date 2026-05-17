/*
 * XREFs of _LdrpSaveLocationsSearched@12 @ 0x4B334A5C
 * Callers:
 *     _LdrpSearchPath@36 @ 0x4B2D2450 (_LdrpSearchPath@36.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall LdrpSaveLocationsSearched(int a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v3; // eax
  unsigned int v4; // esi
  int i; // edi
  _DWORD *result; // eax

  v3 = a2;
  v4 = 0;
  for ( i = 0; v4 < *(unsigned __int16 *)(a1 + 68); ++v4 )
  {
    if ( v3 <= *(_DWORD *)(a1 + 4 * v4 + 44) )
      break;
    i |= 16 << *(_DWORD *)(a1 + 4 * v4 + 20);
    v3 = a2;
  }
  result = a3;
  *a3 = i;
  return result;
}
