/*
 * XREFs of HvpViewMapTouchPages @ 0x14068E100
 * Callers:
 *     HvpViewMapMakeViewRangeValid @ 0x14068DB00 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x14068DFF0 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x14068ED70 (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 * Callees:
 *     HvpInpageErrorFilter @ 0x140919FB8 (HvpInpageErrorFilter.c)
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
