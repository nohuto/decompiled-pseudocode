/*
 * XREFs of ?CreateWindowArrangementViewForDrag@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAPEAUIUnknown@@@Z @ 0x180401830
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000BE8C (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCachedWindowArrangementViewLifetime@TabletModeViewManager@@UIUnknown@@PEAV2@PEAUIWindowArrangementView@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@$$QEAPEAVTabletModeViewManager@@$$QEAPEAUIWindowArrangementView@@@Z @ 0x180400E5C (--$MakeAndInitialize@VCachedWindowArrangementViewLifetime@TabletModeViewManager@@UIUnknown@@PEAV.c)
 *     ?GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@PEAPEAUIAppLayout@@@Z @ 0x180401B1C (-GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARR.c)
 *     ?WindowArrangementView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1804113A0 (-WindowArrangementView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabletModeViewManager::CreateWindowArrangementViewForDrag(
        TabletModeViewManager *this,
        struct IApplicationView *a2,
        struct IUnknown **a3)
{
  unsigned int v6; // ebx
  const struct _GUID *v7; // rcx
  int Instance; // eax
  char v9; // si
  int AppLayoutForDropFeedback; // eax
  __int64 v11; // rdx
  struct TabletModeViewManager *v13[2]; // [rsp+30h] [rbp-20h] BYREF
  char v14; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  IUnknown *punk; // [rsp+90h] [rbp+40h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+50h] BYREF
  IUnknown *v18; // [rsp+A8h] [rbp+58h] BYREF

  *a3 = 0LL;
  if ( !*((_QWORD *)this + 5) )
  {
    punk = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
    Instance = WindowArrangementView_CreateInstance(v7, (void **)&punk);
    v6 = Instance;
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD1,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)Instance);
LABEL_15:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
      return v6;
    }
    IUnknown_SetSite(punk, (IUnknown *)this - 11);
    v13[1] = (struct TabletModeViewManager *)&punk;
    v9 = 1;
    v14 = 1;
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    AppLayoutForDropFeedback = TabletModeViewManager::GetAppLayoutForDropFeedback((char *)this - 88, a2, 3LL, &v17);
    v6 = AppLayoutForDropFeedback;
    if ( AppLayoutForDropFeedback >= 0 )
    {
      AppLayoutForDropFeedback = ((__int64 (__fastcall *)(IUnknown *, struct IApplicationView *, __int64))punk->lpVtbl[1].QueryInterface)(
                                   punk,
                                   a2,
                                   v17);
      v6 = AppLayoutForDropFeedback;
      if ( AppLayoutForDropFeedback >= 0 )
      {
        v18 = punk;
        v13[0] = (TabletModeViewManager *)((char *)this - 88);
        AppLayoutForDropFeedback = Microsoft::WRL::Details::MakeAndInitialize<TabletModeViewManager::CachedWindowArrangementViewLifetime,IUnknown,TabletModeViewManager *,IWindowArrangementView *>(
                                     a3,
                                     v13,
                                     (struct IWindowArrangementView **)&v18);
        v6 = AppLayoutForDropFeedback;
        if ( AppLayoutForDropFeedback >= 0 )
        {
          Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 6, (__int64 *)&punk);
          v14 = 0;
          v6 = 0;
          v9 = 0;
LABEL_13:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
          if ( v9 )
          {
            v14 = 0;
            IUnknown_SetSite(punk, 0LL);
          }
          goto LABEL_15;
        }
        v11 = 220LL;
      }
      else
      {
        v11 = 218LL;
      }
    }
    else
    {
      v11 = 217LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
      (const char *)(unsigned int)AppLayoutForDropFeedback);
    goto LABEL_13;
  }
  v6 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCE,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
    (const char *)0x8007139FLL);
  return v6;
}
