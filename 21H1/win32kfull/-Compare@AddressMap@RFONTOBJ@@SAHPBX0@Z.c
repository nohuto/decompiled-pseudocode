/*
 * XREFs of ?Compare@AddressMap@RFONTOBJ@@SAHPBX0@Z @ 0x208C58
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl RFONTOBJ::AddressMap::Compare(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return 0;
  else
    return *a1 < *a2 ? -1 : 1;
}
