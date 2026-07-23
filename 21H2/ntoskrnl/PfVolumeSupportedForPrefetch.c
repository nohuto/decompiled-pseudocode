/*
 * XREFs of PfVolumeSupportedForPrefetch @ 0x140272D2C
 * Callers:
 *     PfpVolumeOpenAndVerify @ 0x1406746EC (PfpVolumeOpenAndVerify.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfVolumeSupportedForPrefetch(_DWORD *a1)
{
  int v1; // eax

  if ( (unsigned int)(*a1 - 7) > 1 )
    return 1LL;
  v1 = a1[1];
  if ( (v1 & 0x10) != 0 )
    return 2LL;
  if ( (v1 & 1) != 0 )
    return 3LL;
  return ((unsigned __int8)~*((_BYTE *)a1 + 4) >> 3) & 4;
}
