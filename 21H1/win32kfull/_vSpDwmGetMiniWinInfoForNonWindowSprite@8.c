/*
 * XREFs of _vSpDwmGetMiniWinInfoForNonWindowSprite@8 @ 0xD2CCC
 * Callers:
 *     ?GreCreateSpriteInternal@@YGPAXPAUHDEV__@@PAUHWND__@@PAUtagRECT@@PAUtagMINIWINDOWINFO@@KHHHHHPBG@Z @ 0x1F714 (-GreCreateSpriteInternal@@YGPAXPAUHDEV__@@PAUHWND__@@PAUtagRECT@@PAUtagMINIWINDOWINFO@@KHHHHHPBG.c)
 *     ?GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@PAUtagMINIWINDOWINFO@@HH@Z @ 0x603A0 (-GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_.c)
 *     _bSetDevDragRect@16 @ 0xB08E8 (_bSetDevDragRect@16.c)
 *     _bSetDevPreviewRect@24 @ 0x1E3D0B (_bSetDevPreviewRect@24.c)
 * Callees:
 *     <none>
 */

int __fastcall vSpDwmGetMiniWinInfoForNonWindowSprite(_DWORD *a1, _DWORD *a2)
{
  int result; // eax

  if ( a2 )
  {
    *a1 = *a2;
    a1[1] = a2[1];
    a1[2] = a2[2];
    a1[3] = a2[3];
    a1[4] = *a1;
    a1[5] = a1[1];
    a1[6] = a1[2];
    a1[7] = a1[3];
  }
  a1[8] = 0;
  a1[9] = 0;
  a1[10] = 0;
  a1[11] = 0;
  result = gdwRitInputDesktopId;
  a1[12] = gdwRitInputDesktopId;
  return result;
}
