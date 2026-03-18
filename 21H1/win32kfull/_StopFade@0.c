/*
 * XREFs of _StopFade@0 @ 0x1538B2
 * Callers:
 *     _EditionHandleSonarKeyEvent@8 @ 0xAB072 (_EditionHandleSonarKeyEvent@8.c)
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 *     _xxxDwmStopRedirection@4 @ 0xCEE26 (_xxxDwmStopRedirection@4.c)
 *     _EditionStopSonar@0 @ 0xD4D1E (_EditionStopSonar@0.c)
 *     _zzzDwmStartRedirection@0 @ 0xE08D6 (_zzzDwmStartRedirection@0.c)
 *     _xxxTooltipWndProc@16 @ 0xE4592 (_xxxTooltipWndProc@16.c)
 *     _zzzAnimateFade@0 @ 0x153DEC (_zzzAnimateFade@0.c)
 *     _zzzStartSonar@0 @ 0x15406B (_zzzStartSonar@0.c)
 *     _MNAnimate@8 @ 0x1A9493 (_MNAnimate@8.c)
 * Callees:
 *     _GreGetLayout@4 @ 0x566A8 (_GreGetLayout@4.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 *     _DeleteFadeSprite@0 @ 0x153705 (_DeleteFadeSprite@0.c)
 */

HDEV __stdcall StopFade()
{
  struct XDCOBJ *v0; // ebx
  _DWORD *v1; // eax
  HDEV v2; // edx
  HDC DCEx; // esi
  HDEV v4; // edi
  unsigned __int8 Layout; // al
  int StockObject; // eax
  HDEV result; // eax

  v0 = 0;
  FindTimer(_gTermIO[1], 65526, 2u, 1, 0);
  v1 = DeleteFadeSprite();
  v2 = _gfade[9];
  if ( ((unsigned __int8)v2 & 2) == 0 && ((unsigned __int8)v2 & 1) != 0 )
  {
    if ( v1 )
    {
      DCEx = (HDC)_GetDCEx(v1, 0, 3);
      v4 = 0;
    }
    else
    {
      v4 = _gfade[3];
      v0 = (struct XDCOBJ *)_gfade[4];
      DCEx = *(HDC *)(_gpDispInfo + 28);
    }
    Layout = GreGetLayout(DCEx);
    NtGdiBitBltInternal(
      DCEx,
      (LONG)v4,
      v0,
      (int)_gfade[5],
      (int)_gfade[6],
      (HDC)_gfade[1],
      0,
      0,
      (Layout << 31) + 13369376,
      0,
      0);
    _ReleaseDC(DCEx);
  }
  StockObject = GreGetStockObject(21);
  GreSelectBitmap(_gfade[1], StockObject);
  GreCleanDC(_gfade[1]);
  GreSetDCOwnerEx(_gfade[1], 0, 0, 1);
  GreDeleteObject(_gfade[2]);
  _gfade[2] = 0;
  result = _gfade[0];
  _gfade[9] = 0;
  return result;
}
