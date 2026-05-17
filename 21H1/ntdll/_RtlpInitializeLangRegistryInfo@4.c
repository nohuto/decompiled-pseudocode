/*
 * XREFs of _RtlpInitializeLangRegistryInfo@4 @ 0x4B3545F0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpMuiRegCreateAndLoadRegistryInfo@4 @ 0x4B2AC270 (_RtlpMuiRegCreateAndLoadRegistryInfo@4.c)
 */

int __stdcall RtlpInitializeLangRegistryInfo(_DWORD *a1)
{
  int result; // eax

  result = 0;
  if ( !a1 )
    return -1073741811;
  if ( !*a1 )
    return RtlpMuiRegCreateAndLoadRegistryInfo(a1);
  return result;
}
