/*
 * XREFs of ?GetChromeConfigurationForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1803CB240
 * Callers:
 *     ?GetChromeConfigurationForView@CDesktopPositioner@@W7EAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800D9180 (-GetChromeConfigurationForView@CDesktopPositioner@@W7EAAJPEAUIApplicationView@@PEAHPEAPEAUIAppli.c)
 *     ?GetChromeConfigurationForView@CDesktopPositioner@@WBA@EAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800D9190 (-GetChromeConfigurationForView@CDesktopPositioner@@WBA@EAAJPEAUIApplicationView@@PEAHPEAPEAUIApp.c)
 * Callees:
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18002FF74 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDesktopPositioner::GetChromeConfigurationForView(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        int *a3,
        struct IApplicationViewTitlebarConfiguration **a4)
{
  int TitlebarConfiguration; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a4 = 0LL;
  *a3 = 1;
  TitlebarConfiguration = CDesktopPositioner::_CreateTitlebarConfiguration(this, a2, a4);
  v5 = TitlebarConfiguration;
  if ( TitlebarConfiguration >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x139,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)TitlebarConfiguration);
  return v5;
}
