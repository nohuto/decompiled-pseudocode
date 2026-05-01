/*
 * XREFs of ?SetExistingEvent@@YAXPEBG@Z @ 0x180089B40
 * Callers:
 *     ?_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180030CE4 (-_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Found.c)
 *     ?_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801BD1BC (-_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@F.c)
 *     ?OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801D40E0 (-OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAU.c)
 *     ?Prelaunch@XamlLauncher@@UEAAJXZ @ 0x18032DF90 (-Prelaunch@XamlLauncher@@UEAAJXZ.c)
 *     ?OnCortanaLaunchResult@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x180335A50 (-OnCortanaLaunchResult@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@In.c)
 *     ?OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x1803363D0 (-OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Intern.c)
 * Callees:
 *     <none>
 */

void __fastcall SetExistingEvent(LPCWSTR lpName)
{
  HANDLE v1; // rax
  void *v2; // rbx

  v1 = OpenEventW(2u, 0, lpName);
  v2 = v1;
  if ( v1 )
  {
    SetEvent(v1);
    CloseHandle(v2);
  }
}
