/*
 * XREFs of HvpViewMapTouchPages @ 0x1406FBF74
 * Callers:
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x1406086BC (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeValid @ 0x1406FB950 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x1406FBE64 (HvpViewMapMakeViewRangeCOWByCaller.c)
 * Callees:
 *     HvpInpageErrorFilter @ 0x140873740 (HvpInpageErrorFilter.c)
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
