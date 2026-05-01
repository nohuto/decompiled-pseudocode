/*
 * XREFs of ?GetChromeConfigurationForView@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1803D68D0
 * Callers:
 *     ?GetChromeConfigurationForView@TabletModePositioner@@W7EAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800D9580 (-GetChromeConfigurationForView@TabletModePositioner@@W7EAAJPEAUIApplicationView@@PEAHPEAPEAUIApp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1803D5A38 (-CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationV.c)
 */

__int64 __fastcall TabletModePositioner::GetChromeConfigurationForView(
        TabletModePositioner *this,
        struct IApplicationView *a2,
        int *a3,
        struct IApplicationViewTitlebarConfiguration **a4)
{
  int TitlebarConfiguration; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a4 = 0LL;
  *a3 = 0;
  TitlebarConfiguration = TabletModePositioner::CreateTitlebarConfiguration(this, a4);
  v5 = TitlebarConfiguration;
  if ( TitlebarConfiguration >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x236,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)TitlebarConfiguration);
  return v5;
}
