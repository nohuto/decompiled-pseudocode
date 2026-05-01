/*
 * XREFs of ?IsViewVisible@SearchAppDesktopExperienceView@@AEAA_NXZ @ 0x18001C8F0
 * Callers:
 *     ?OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180019AD4 (-OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18004E7F0 (-Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 *     ?DismissCortanaApp@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180080918 (-DismissCortanaApp@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?InputHostHiding@SearchAppDesktopExperienceView@@EEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x180207260 (-InputHostHiding@SearchAppDesktopExperienceView@@EEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z.c)
 *     ?InputHostShowing@SearchAppDesktopExperienceView@@EEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x1802072C0 (-InputHostShowing@SearchAppDesktopExperienceView@@EEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MO.c)
 *     ?OnWorkAreaChanged@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x180207D00 (-OnWorkAreaChanged@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall SearchAppDesktopExperienceView::IsViewVisible(SearchAppDesktopExperienceView *this)
{
  __int64 v1; // rcx
  char v2; // bl
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 19);
  v2 = 0;
  v4 = 0;
  if ( v1 && (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v1 + 80LL))(v1, &v4) >= 0 )
    return v4 != 0;
  return v2;
}
