/*
 * XREFs of ?IsStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x180084460
 * Callers:
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18005DBC4 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x1803335A0 (-DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 *     ?OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180334C20 (-OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Inter.c)
 *     ?OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180335550 (-OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@.c)
 * Callees:
 *     <none>
 */

char __fastcall XamlLauncherState::IsStartVisible(XamlLauncherState *this)
{
  int v1; // eax
  char v2; // dl

  v1 = *((_DWORD *)this + 10);
  v2 = 0;
  if ( v1 == 5 || v1 == 9 || v1 > 10 && (v1 <= 14 || (unsigned int)(v1 - 16) <= 1) )
    return 1;
  return v2;
}
