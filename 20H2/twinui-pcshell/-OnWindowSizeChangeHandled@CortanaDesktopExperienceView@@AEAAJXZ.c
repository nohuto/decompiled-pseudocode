/*
 * XREFs of ?OnWindowSizeChangeHandled@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18020F260
 * Callers:
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18020E3B8 (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x18020939C (CortanaHelpers--AllowCortanaAboveLock.c)
 *     ?EnsureForegroundRightsForAmbientModeIfNeeded@CortanaDesktopExperienceView@@AEAAXXZ @ 0x18020B088 (-EnsureForegroundRightsForAmbientModeIfNeeded@CortanaDesktopExperienceView@@AEAAXXZ.c)
 *     ?SetZBand@CortanaDesktopExperienceView@@AEAAJW4ZBID@@@Z @ 0x1802109CC (-SetZBand@CortanaDesktopExperienceView@@AEAAJW4ZBID@@@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnWindowSizeChangeHandled(CortanaDesktopExperienceView *this)
{
  unsigned int v2; // edi
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 13;
  if ( (unsigned int)(*((_DWORD *)this + 35) - 3) <= 1 && *((_BYTE *)this + 242) )
    v2 = CortanaHelpers::AllowCortanaAboveLock() != 0 ? 18 : 13;
  v3 = CortanaDesktopExperienceView::SetZBand(this, v2);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5BB,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v3);
  CortanaDesktopExperienceView::EnsureForegroundRightsForAmbientModeIfNeeded(this);
  return 0LL;
}
