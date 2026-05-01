/*
 * XREFs of ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x180446CE0
 * Callers:
 *     ?ViewAddedInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180079770 (-ViewAddedInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?ViewAppIdChangedInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180085DA0 (-ViewAppIdChangedInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?PinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z @ 0x1804465D0 (-PinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z.c)
 *     ?PinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180446A60 (-PinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180446D30 (-PinViewInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetViewCollectionInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationViewCollection@@@Z @ 0x180447100 (-SetViewCollectionInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationViewCollection@@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180043A64 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PinViewNoGroupPropagateInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x180446E70 (-PinViewNoGroupPropagateInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

__int64 __fastcall VirtualPinnedAppsHandler::PinViewInternal(
        VirtualPinnedAppsHandler *this,
        struct IApplicationView *a2,
        bool a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = VirtualPinnedAppsHandler::PinViewNoGroupPropagateInternal(this, a2, a3);
  v4 = v3;
  if ( v3 >= 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShell>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetImpl'::`2'::impl,
      0,
      3u);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
