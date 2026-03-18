/*
 * XREFs of RtlFcpCompareFeatureIdToFeature @ 0x1409167A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFcpCompareFeatureIdToFeature(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 <= *a2 )
    return (unsigned int)-(*a1 < *a2);
  else
    return 1LL;
}
