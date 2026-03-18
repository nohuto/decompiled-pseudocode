/*
 * XREFs of HvpViewMapTouchPages @ 0x140702ADC
 * Callers:
 *     HvpViewMapMakeViewRangeValid @ 0x1405DBF74 (HvpViewMapMakeViewRangeValid.c)
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x1406CA8C8 (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x1407045C0 (HvpViewMapMakeViewRangeCOWByCaller.c)
 * Callees:
 *     HvpInpageErrorFilter @ 0x140875CFC (HvpInpageErrorFilter.c)
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
