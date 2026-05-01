/*
 * XREFs of ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@@Z0@Z @ 0x180432B1C
 * Callers:
 *     ?VirtualDesktopCreated@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x1804339B0 (-VirtualDesktopCreated@-$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002D050 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AddRefCountWrappers@PEAUIVirtualDesktop@@@@YAJV?$tuple@PEAUIVirtualDesktop@@@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@1@@Z @ 0x1804324C8 (--$AddRefCountWrappers@PEAUIVirtualDesktop@@@@YAJV-$tuple@PEAUIVirtualDesktop@@@std@@PEAV-$tuple.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@@Z @ 0x180432E7C (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@$$ZV-$ComPtr@UIVirtual.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification2<IVirtualDesktopNotification,IVirtualDesktop *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  v10 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
    1u);
  v10 = 0LL;
  v11 = a3;
  v5 = AddRefCountWrappers<IVirtualDesktop *>(&v11, &v10);
  v7 = v5;
  if ( v5 >= 0 )
  {
    v11 = v10;
    v10 = 0LL;
    v7 = ____QueueNotification2_UIVirtualDesktopNotification__PEAUIVirtualDesktop____ZV__ComPtr_UIVirtualDesktop___WRL_Microsoft___CVirtualDesktopNotifications__AEAAJP8IVirtualDesktopNotification__EAAJPEAUIVirtualDesktop___ZV__tuple_V__ComPtr_UIVirtualDesktop___WRL_Microsoft___std___Z(
           a1,
           v6,
           &v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xED,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return v7;
}
