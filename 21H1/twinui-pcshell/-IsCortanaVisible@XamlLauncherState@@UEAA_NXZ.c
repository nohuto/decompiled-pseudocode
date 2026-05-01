/*
 * XREFs of ?IsCortanaVisible@XamlLauncherState@@UEAA_NXZ @ 0x180055570
 * Callers:
 *     ?DoesCortanaHaveForeground@XamlLauncherState@@UEAA_NXZ @ 0x180055530 (-DoesCortanaHaveForeground@XamlLauncherState@@UEAA_NXZ.c)
 *     ?IsCortanaShowing@XamlLauncherState@@UEAAJPEAH@Z @ 0x180313650 (-IsCortanaShowing@XamlLauncherState@@UEAAJPEAH@Z.c)
 *     ?OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180313AD0 (-OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Inter.c)
 * Callees:
 *     ?IsFullscreenCXHRunning@@YA_NXZ @ 0x1800555BC (-IsFullscreenCXHRunning@@YA_NXZ.c)
 */

char __fastcall XamlLauncherState::IsCortanaVisible(XamlLauncherState *this)
{
  char v1; // bl
  int v3; // eax

  v1 = 0;
  if ( *((_BYTE *)this + 945) || *((_BYTE *)this + 946) || IsFullscreenCXHRunning() )
    return 0;
  v3 = *((_DWORD *)this + 10);
  if ( v3 >= 4 && (v3 <= 5 || v3 > 6 && (v3 <= 10 || v3 > 11 && (v3 <= 14 || v3 == 21))) )
    return 1;
  return v1;
}
