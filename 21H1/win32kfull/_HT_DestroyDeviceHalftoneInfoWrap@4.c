/*
 * XREFs of _HT_DestroyDeviceHalftoneInfoWrap@4 @ 0xAD636
 * Callers:
 *     <none>
 * Callees:
 *     _CleanUpDHI @ 0xAD654 (_CleanUpDHI.c)
 */

int __stdcall HT_DestroyDeviceHalftoneInfoWrap(PVOID pv)
{
  int result; // eax

  if ( pv )
  {
    if ( *((_DWORD *)pv + 8) == 1414021956 )
      return CleanUpDHI(pv);
  }
  return result;
}
