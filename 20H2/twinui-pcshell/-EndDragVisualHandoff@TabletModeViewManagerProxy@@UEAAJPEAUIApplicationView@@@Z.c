/*
 * XREFs of ?EndDragVisualHandoff@TabletModeViewManagerProxy@@UEAAJPEAUIApplicationView@@@Z @ 0x180383CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?GetTabletModeViewManager@TabletModeViewManagerProxy@@AEAAJPEAPEAUITabletModeViewManager@@@Z @ 0x180383D64 (-GetTabletModeViewManager@TabletModeViewManagerProxy@@AEAAJPEAPEAUITabletModeViewManager@@@Z.c)
 */

__int64 __fastcall TabletModeViewManagerProxy::EndDragVisualHandoff(
        TabletModeViewManagerProxy *this,
        struct IApplicationView *a2)
{
  int TabletModeViewManager; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ITabletModeViewManager *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  TabletModeViewManager = TabletModeViewManagerProxy::GetTabletModeViewManager(
                            (TabletModeViewManagerProxy *)((char *)this - 8),
                            &v8);
  v5 = TabletModeViewManager;
  if ( TabletModeViewManager >= 0 )
    v5 = (*(__int64 (__fastcall **)(struct ITabletModeViewManager *, struct IApplicationView *))(*(_QWORD *)v8 + 48LL))(
           v8,
           a2);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\tabletmodeviewmanagerproxy.cpp",
      (const char *)(unsigned int)TabletModeViewManager);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  return v5;
}
