/*
 * XREFs of ?NotifyView@SearchAppDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18001731C
 * Callers:
 *     ?OnViewUncloaking@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180084374 (-OnViewUncloaking@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewCloaking@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180084488 (-OnViewCloaking@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewHidden@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1800862C4 (-OnViewHidden@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnUIATreesUnlinked@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x180088D20 (-OnUIATreesUnlinked@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 *     ?NotifyShellModeChanged@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1801E42C0 (-NotifyShellModeChanged@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?NotifyTaskbarSearchBoxChanged@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1801E4410 (-NotifyTaskbarSearchBoxChanged@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnMessage@SearchAppDesktopExperienceView@@EEAAJI_K_J@Z @ 0x1801E4730 (-OnMessage@SearchAppDesktopExperienceView@@EEAAJI_K_J@Z.c)
 *     ?TryInvokeBack@SearchAppDesktopExperienceView@@EEAAJXZ @ 0x1801E5D00 (-TryInvokeBack@SearchAppDesktopExperienceView@@EEAAJXZ.c)
 * Callees:
 *     ?NotifyView@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18001738C (-NotifyView@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Fou.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002F5AC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppDesktopExperienceView::NotifyView(
        SearchAppDesktopExperienceView *this,
        const unsigned __int16 *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  const unsigned __int16 *v9; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v9 = a2;
  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v10, &v9);
  v6 = SearchAppDesktopExperienceView::NotifyView(this, *(HSTRING *)(v5 + 24), a3);
  v7 = v6;
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8EE,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v6,
      (int)v9);
  return v7;
}
