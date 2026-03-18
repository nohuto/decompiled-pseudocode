/*
 * XREFs of HvpViewMapTouchPages @ 0x140692C58
 * Callers:
 *     HvpViewMapMakeViewRangeValid @ 0x140686998 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x140696230 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x1406D4DA8 (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 * Callees:
 *     HvpInpageErrorFilter @ 0x14086E6B8 (HvpInpageErrorFilter.c)
 */

__int64 __fastcall HvpViewMapTouchPages(_BYTE *a1, __int64 a2, char a3)
{
  _BYTE *i; // [rsp+28h] [rbp-10h]

  for ( i = a1; i < &a1[a2]; i += 4096 )
  {
    if ( a3 )
      *i = *i;
  }
  return 0LL;
}
