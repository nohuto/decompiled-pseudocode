/*
 * XREFs of CompareVersions @ 0x14024F220
 * Callers:
 *     RtlGetProductInfo @ 0x14024F0E0 (RtlGetProductInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareVersions(_DWORD *a1, _DWORD *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax

  if ( *a1 > *a2 )
    return 1LL;
  if ( *a1 < *a2 )
    return 0xFFFFFFFFLL;
  v3 = a1[1];
  if ( v3 > a2[1] )
    return 1LL;
  if ( v3 < a2[1] )
    return 0xFFFFFFFFLL;
  v4 = a1[2];
  if ( v4 > a2[2] )
    return 1LL;
  if ( v4 < a2[2] )
    return 0xFFFFFFFFLL;
  v5 = a1[3];
  if ( v5 > a2[3] )
    return 1LL;
  if ( v5 >= a2[3] )
    return 0LL;
  return 0xFFFFFFFFLL;
}
