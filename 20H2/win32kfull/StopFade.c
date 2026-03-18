/*
 * XREFs of StopFade @ 0x1C01E77F0
 * Callers:
 *     xxxSwitchDesktop @ 0x1C002BDDC (xxxSwitchDesktop.c)
 *     zzzDwmStartRedirection @ 0x1C007FCE0 (zzzDwmStartRedirection.c)
 *     xxxDwmStopRedirection @ 0x1C0081030 (xxxDwmStopRedirection.c)
 *     EditionHandleSonarKeyEvent @ 0x1C0112B30 (EditionHandleSonarKeyEvent.c)
 *     xxxTooltipWndProc @ 0x1C011C5E0 (xxxTooltipWndProc.c)
 *     EditionStopSonar @ 0x1C01E7580 (EditionStopSonar.c)
 *     zzzAnimateFade @ 0x1C01E7DFC (zzzAnimateFade.c)
 *     zzzStartSonar @ 0x1C01E8068 (zzzStartSonar.c)
 *     MNAnimate @ 0x1C024BE4C (MNAnimate.c)
 * Callees:
 *     FindTimer @ 0x1C000BFEC (FindTimer.c)
 *     GreGetLayout @ 0x1C00417CC (GreGetLayout.c)
 *     NtGdiBitBltInternal @ 0x1C00B0060 (NtGdiBitBltInternal.c)
 *     DeleteFadeSprite @ 0x1C01E7500 (DeleteFadeSprite.c)
 */

__int64 StopFade()
{
  __int64 v0; // rax
  int v1; // ecx
  LONG v2; // edi
  HDC DCEx; // rbx
  LONG v4; // esi
  unsigned __int8 Layout; // al
  __int64 StockObject; // rax
  __int64 result; // rax

  FindTimer(gTermIO[1], 65526LL, 2u, 1, 0LL);
  v0 = DeleteFadeSprite();
  v1 = gfade[6];
  if ( (v1 & 2) == 0 && (v1 & 1) != 0 )
  {
    if ( v0 )
    {
      v2 = 0;
      DCEx = (HDC)_GetDCEx(v0, 0LL, 3LL);
      v4 = 0;
    }
    else
    {
      v2 = gfade[3];
      v4 = HIDWORD(gfade[3]);
      DCEx = *(HDC *)(gpDispInfo + 56LL);
    }
    Layout = GreGetLayout(DCEx);
    NtGdiBitBltInternal(DCEx, v2, v4, gfade[4], HIDWORD(gfade[4]), (HDC)gfade[1], 0, 0, (Layout << 31) + 13369376, 0, 0);
    _ReleaseDC(DCEx);
  }
  StockObject = GreGetStockObject(21LL);
  GreSelectBitmap(gfade[1], StockObject);
  GreCleanDC(gfade[1]);
  GreSetDCOwnerEx(gfade[1], 0LL, 0LL, 1LL);
  GreDeleteObject(gfade[2]);
  gfade[2] = 0LL;
  result = gfade[0];
  LODWORD(gfade[6]) = 0;
  return result;
}
