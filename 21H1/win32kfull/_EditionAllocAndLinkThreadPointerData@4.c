/*
 * XREFs of _EditionAllocAndLinkThreadPointerData@4 @ 0x15B97A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__stdcall EditionAllocAndLinkThreadPointerData(_DWORD *a1)
{
  _DWORD *result; // eax
  int v2; // edx

  result = (_DWORD *)Win32AllocPoolZInit(32, 1953526613);
  if ( result )
  {
    v2 = *a1;
    if ( *(_DWORD **)(*a1 + 4) != a1 )
      __fastfail(3u);
    *result = v2;
    result[1] = a1;
    *(_DWORD *)(v2 + 4) = result;
    *a1 = result;
    ++a1[2];
  }
  return result;
}
