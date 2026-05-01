/*
 * XREFs of ?AddPeoplePaneToTabletModeLayout@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18023C6B8
 * Callers:
 *     ?AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18023C7F0 (-AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?GetTabletModePositioner@PeoplePaneViewManager@@AEAAJPEAPEAUITabletModePositioner@@@Z @ 0x18023DE58 (-GetTabletModePositioner@PeoplePaneViewManager@@AEAAJPEAPEAUITabletModePositioner@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PeoplePaneViewManager::AddPeoplePaneToTabletModeLayout(
        PeoplePaneViewManager *this,
        struct IApplicationView *a2)
{
  int TabletModePositioner; // eax
  unsigned int v5; // ebx
  struct ITabletModePositioner *v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 v11; // [rsp+50h] [rbp+20h] BYREF
  struct ITabletModePositioner *v12; // [rsp+58h] [rbp+28h] BYREF

  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  TabletModePositioner = PeoplePaneViewManager::GetTabletModePositioner(this, &v12);
  v5 = TabletModePositioner;
  if ( TabletModePositioner >= 0 )
  {
    v11 = 0LL;
    v6 = v12;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    v7 = (*(__int64 (__fastcall **)(struct ITabletModePositioner *, GUID *, GUID *, __int64 *))(*(_QWORD *)v6 + 80LL))(
           v6,
           &CLSID_AppSwitchOperation,
           &GUID_b3b709e2_bf68_4d75_b725_6b7d34fa01d3,
           &v11);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *, _QWORD))(*(_QWORD *)v11 + 40LL))(v11, a2, 0LL);
      v5 = v7;
      if ( v7 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(struct ITabletModePositioner *, __int64))(*(_QWORD *)v12 + 88LL))(v12, v11);
        v5 = v7;
        if ( v7 >= 0 )
        {
          v5 = 0;
          goto LABEL_11;
        }
        v8 = 689LL;
      }
      else
      {
        v8 = 688LL;
      }
    }
    else
    {
      v8 = 687LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v7);
LABEL_11:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2AC,
    (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)(unsigned int)TabletModePositioner);
LABEL_12:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return v5;
}
