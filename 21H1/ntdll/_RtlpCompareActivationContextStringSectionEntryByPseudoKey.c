/*
 * XREFs of _RtlpCompareActivationContextStringSectionEntryByPseudoKey @ 0x4B2DC300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl RtlpCompareActivationContextStringSectionEntryByPseudoKey(_DWORD *a1, _DWORD *a2)
{
  if ( *a2 <= *a1 )
    return *a2 < *a1;
  else
    return -1;
}
