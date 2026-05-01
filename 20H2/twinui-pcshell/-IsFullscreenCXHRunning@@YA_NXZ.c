/*
 * XREFs of ?IsFullscreenCXHRunning@@YA_NXZ @ 0x180046F1C
 * Callers:
 *     ?IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x180046E5C (-IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?IsCortanaVisible@XamlLauncherState@@UEAA_NXZ @ 0x180046ED0 (-IsCortanaVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x1800A3C9C (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool IsFullscreenCXHRunning(void)
{
  bool v0; // bl
  LSTATUS v1; // eax
  bool v2; // sf
  bool v4; // zf
  unsigned int pvData; // [rsp+60h] [rbp+18h] BYREF
  DWORD pdwType; // [rsp+68h] [rbp+20h] BYREF
  DWORD pcbData; // [rsp+70h] [rbp+28h] BYREF
  HKEY hkey; // [rsp+78h] [rbp+30h] BYREF

  v0 = 0;
  v1 = RegOpenKeyExW(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\CloudExperienceHost",
         0,
         0x20019u,
         &hkey);
  v2 = v1 < 0;
  if ( v1 > 0 )
    v2 = 1;
  if ( !v2 )
  {
    pdwType = 0;
    pcbData = 4;
    if ( !RegGetValueW(hkey, L"Fullscreen", L"FullscreenCXHRunning", 0x10000012u, &pdwType, &pvData, &pcbData) )
    {
      if ( pdwType == 4 )
      {
        v4 = pvData == 1;
        if ( pvData > 1 )
          goto LABEL_13;
      }
      else
      {
        if ( pcbData != 4 || (unsigned __int16)(pvData - 48) > 1u )
          goto LABEL_13;
        v4 = (_WORD)pvData == 49;
      }
      v0 = v4;
    }
LABEL_13:
    RegCloseKey(hkey);
  }
  return v0;
}
