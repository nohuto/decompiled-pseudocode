/*
 * XREFs of ?vSpDwmUpdateSpriteVisibility@@YGXPAVDWMSPRITE@@_N@Z @ 0xD0592
 * Callers:
 *     ?GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@PAUtagMINIWINDOWINFO@@HH@Z @ 0x603A0 (-GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_.c)
 *     ?DwmSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z @ 0xD014E (-DwmSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z.c)
 *     ?DwmMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@K@Z @ 0xD03E2 (-DwmMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@K@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YGJPAUHDC__@@KPAPAXPAPAU1@@Z @ 0x1CCEEA (-SpDdCreateFullscreenSprite@@YGJPAUHDC__@@KPAPAXPAPAU1@@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YGJPAUHDC__@@PAX@Z @ 0x1CD3D4 (-SpDdNotifyFullscreenSpriteUpdate@@YGJPAUHDC__@@PAX@Z.c)
 * Callees:
 *     _DwmAsyncShowSprite@12 @ 0xA73CA (_DwmAsyncShowSprite@12.c)
 */

void __fastcall vSpDwmUpdateSpriteVisibility(int *a1, unsigned __int8 a2)
{
  int v2; // esi
  void *v3; // eax
  int v4; // [esp-4h] [ebp-8h]

  if ( a2 != (a1[33] & 1) )
  {
    a1[33] = a2 | a1[33] & 0xFFFFFFFE;
    v2 = *a1;
    v4 = a2;
    v3 = (void *)UserReferenceDwmApiPort();
    DwmAsyncShowSprite(v3, v2, v4);
  }
}
