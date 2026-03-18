/*
 * XREFs of ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C0107E40
 * Callers:
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C00A76A0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C010786C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C0107C04 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026D3AC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026DAB4 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 * Callees:
 *     DwmAsyncShowSprite @ 0x1C0112BD8 (DwmAsyncShowSprite.c)
 */

void __fastcall vSpDwmUpdateSpriteVisibility(struct DWMSPRITE *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  void *v4; // rax

  if ( (unsigned __int8)a2 != (*((_DWORD *)a1 + 41) & 1) )
  {
    v3 = (unsigned __int8)a2 | *((_DWORD *)a1 + 41) & 0xFFFFFFFE;
    *((_DWORD *)a1 + 41) = v3;
    v4 = (void *)UserReferenceDwmApiPort(a1, a2, a3, v3);
    DwmAsyncShowSprite(v4);
  }
}
