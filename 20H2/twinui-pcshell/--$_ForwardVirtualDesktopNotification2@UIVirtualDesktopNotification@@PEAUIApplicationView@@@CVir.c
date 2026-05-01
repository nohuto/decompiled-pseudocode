/*
 * XREFs of ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIApplicationView@@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIApplicationView@@@Z0@Z @ 0x18006392C
 * Callers:
 *     ?ViewVirtualDesktopChanged@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIApplicationView@@@Z @ 0x1800638F0 (-ViewVirtualDesktopChanged@-$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotificat.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIApplicationView@@$$ZV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIApplicationView@@@ZV?$tuple@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@Z @ 0x1800639DC (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIApplicationView@@$$ZV-$ComPtr@UIApplic.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180063B9C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification2<IVirtualDesktopNotification,IApplicationView *>(
        __int64 a1,
        char *a2,
        char *a3)
{
  char *v5; // rbx
  char **v6; // rdx
  char *v7; // rax
  int v8; // edi
  char *v10; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  char *v12; // [rsp+58h] [rbp+28h] BYREF
  char **v13; // [rsp+68h] [rbp+38h]

  v12 = a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
    a2);
  v5 = 0LL;
  v10 = 0LL;
  LODWORD(v12) = 0;
  v6 = &v12;
  v13 = &v12;
  v7 = 0LL;
  if ( a3 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)a3 + 8LL))(a3);
    v7 = a3;
    v6 = v13;
  }
  *(_DWORD *)v6 = 0;
  v10 = v7;
  v8 = (int)v12;
  if ( (int)v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC6,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v12);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  }
  else
  {
    v5 = v7;
    v8 = 0;
  }
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xED,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v8);
  }
  else
  {
    v12 = v5;
    v5 = 0LL;
    v10 = 0LL;
    v8 = ____QueueNotification2_UIVirtualDesktopNotification__PEAUIApplicationView____ZV__ComPtr_UIApplicationView___WRL_Microsoft___CVirtualDesktopNotifications__AEAAJP8IVirtualDesktopNotification__EAAJPEAUIApplicationView___ZV__tuple_V__ComPtr_UIApplicationView___WRL_Microsoft___std___Z(
           a1,
           v6,
           &v12);
  }
  if ( v5 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v8;
}
