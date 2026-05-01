/*
 * XREFs of ?MinimizeCortanaToBoxMode@XamlLauncherState@@UEAAXXZ @ 0x180335460
 * Callers:
 *     ?OnCortanaDismissRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1800884F0 (-OnCortanaDismissRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shel.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1803372B0 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x180053E38 (-IsSearchAndCortanaSplitEnabled@@YAEXZ.c)
 */

void __fastcall XamlLauncherState::MinimizeCortanaToBoxMode(XamlLauncherState *this)
{
  if ( IsSearchAndCortanaSplitEnabled() )
    *((_DWORD *)this + 260) = 2;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 96LL))(*((_QWORD *)this + 8));
}
