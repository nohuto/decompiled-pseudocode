/*
 * XREFs of vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C01281E0
 * Callers:
 *     bSetDevDragRect @ 0x1C002A4E0 (bSetDevDragRect.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C00A76A0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C00C6A5C (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     bSetDevPreviewRect @ 0x1C02855DC (bSetDevPreviewRect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall vSpDwmGetMiniWinInfoForNonWindowSprite(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax

  if ( a2 )
  {
    v2 = *a2;
    *(_OWORD *)a1 = *a2;
    *(_OWORD *)(a1 + 16) = v2;
  }
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  result = gdwRitInputDesktopId;
  *(_QWORD *)(a1 + 48) = gdwRitInputDesktopId;
  return result;
}
