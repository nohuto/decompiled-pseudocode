/*
 * XREFs of ?ShowSearchOrCortana@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18004DC9C
 * Callers:
 *     ?OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18004DA50 (-OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@S.c)
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18004DB34 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180314E40 (-Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180315700 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?GetMainViewMode@ViewModeHelpers@Cortana@@YA?AW4MainViewMode@12@PEAUHSTRING__@@@Z @ 0x18004F4C4 (-GetMainViewMode@ViewModeHelpers@Cortana@@YA-AW4MainViewMode@12@PEAUHSTRING__@@@Z.c)
 *     ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x180053408 (-IsSearchAndCortanaSplitEnabled@@YAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncherState::ShowSearchOrCortana(XamlLauncherState *this, HSTRING a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // esi
  int MainViewMode; // eax
  int v7; // eax

  v4 = 1;
  v5 = 0;
  if ( IsSearchAndCortanaSplitEnabled() )
  {
    MainViewMode = Cortana::ViewModeHelpers::GetMainViewMode(a2);
    if ( MainViewMode != *((_DWORD *)this + 266) )
    {
      *((_DWORD *)this + 266) = MainViewMode;
      v4 = 6 - (MainViewMode != 2);
    }
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, _QWORD))(**((_QWORD **)this + 11) + 56LL))(
         *((_QWORD *)this + 11),
         a2,
         v4);
  if ( v7 < 0 )
    return (unsigned int)v7;
  return v5;
}
