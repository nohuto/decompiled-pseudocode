/*
 * XREFs of RIMIsEssentialUsage @ 0x1C01679D4
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0164C98 (RIMCreatePointerDeviceInfo.c)
 *     RIMPopulatePointerDevice @ 0x1C016A764 (RIMPopulatePointerDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMIsEssentialUsage(unsigned __int16 a1)
{
  unsigned int v1; // ebx
  unsigned __int16 v2; // ax

  v1 = 0;
  if ( a1 <= 0x4D30u )
  {
    if ( a1 != 19760 )
    {
      if ( a1 < 0x1130u )
        goto LABEL_20;
      if ( a1 > 0x1131u && a1 != 7472 )
      {
        if ( a1 <= 0x1D3Cu )
          goto LABEL_20;
        if ( a1 > 0x1D3Eu && a1 != 7489 )
        {
          if ( a1 <= 0x412Fu )
            goto LABEL_20;
          v2 = 16689;
          goto LABEL_19;
        }
      }
    }
    return 1;
  }
  if ( a1 == 19775 )
    return 1;
  if ( a1 <= 0x4D47u )
    goto LABEL_20;
  if ( a1 <= 0x4D49u )
    return 1;
  if ( a1 <= 0x512Fu )
    goto LABEL_20;
  if ( a1 <= 0x5131u || a1 == 23856 )
    return 1;
  if ( a1 <= 0x5D47u )
    goto LABEL_20;
  v2 = 23881;
LABEL_19:
  if ( a1 <= v2 )
    return 1;
LABEL_20:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 36, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
  return v1;
}
