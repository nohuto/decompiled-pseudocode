/*
 * XREFs of ?MinimizeCortanaToBoxMode@XamlLauncherState@@UEAAXXZ @ 0x180334A00
 * Callers:
 *     ?OnCortanaDismissRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180087F90 (-OnCortanaDismissRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shel.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180336850 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x18005F5E0 (-IsSearchAndCortanaSplitEnabled@@YAEXZ.c)
 */

void __fastcall XamlLauncherState::MinimizeCortanaToBoxMode(XamlLauncherState *this)
{
  if ( IsSearchAndCortanaSplitEnabled() )
    *((_DWORD *)this + 260) = 2;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 96LL))(*((_QWORD *)this + 8));
}
