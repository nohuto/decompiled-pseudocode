/*
 * XREFs of ?DismissCortanaApp@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180080918
 * Callers:
 *     ?OnViewEventQueued@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18002FA70 (-OnViewEventQueued@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collecti.c)
 *     ?ControlLost@SearchAppDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAPEAUIInspectable@@@Z @ 0x180206D60 (-ControlLost@SearchAppDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 * Callees:
 *     ?IsViewVisible@SearchAppDesktopExperienceView@@AEAA_NXZ @ 0x18001C8F0 (-IsViewVisible@SearchAppDesktopExperienceView@@AEAA_NXZ.c)
 *     ?SetExplicitDismissEnabled@SearchAppDesktopExperienceView@@AEAAXE@Z @ 0x18008095C (-SetExplicitDismissEnabled@SearchAppDesktopExperienceView@@AEAAXE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::DismissCortanaApp(SearchAppDesktopExperienceView *this)
{
  if ( SearchAppDesktopExperienceView::IsViewVisible(this) )
  {
    SearchAppDesktopExperienceView::SetExplicitDismissEnabled(this, 0);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 32LL))(*((_QWORD *)this + 10));
    *((_BYTE *)this + 208) = 0;
  }
  return 0LL;
}
