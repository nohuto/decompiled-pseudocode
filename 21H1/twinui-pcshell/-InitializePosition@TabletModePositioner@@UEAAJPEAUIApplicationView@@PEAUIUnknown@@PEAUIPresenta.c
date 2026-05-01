/*
 * XREFs of ?InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1803D7F00
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x180025184 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18002A890 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z @ 0x18037B600 (-IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01W4APP_TO_APP_SWITCH_FLAGS@@@Z @ 0x1803D37F8 (-AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_P.c)
 *     ?CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1803D5638 (-CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUI.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x1803DE070 (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 */

__int64 __fastcall TabletModePositioner::InitializePosition(
        TabletModePositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        struct IPresentationRequestedArgs *a4)
{
  PositionerPropertySetHelpers *v7; // rcx
  int DetailsForActivation; // eax
  unsigned int v9; // edi
  struct IApplicationView *v10; // rdx
  int inited; // eax
  __int64 v12; // rdx
  struct IUnknownVtbl *lpVtbl; // rbx
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v19; // [rsp+40h] [rbp-10h]
  int v20; // [rsp+44h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IUnknown v22; // [rsp+78h] [rbp+28h] BYREF

  v17 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
         a2,
         &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b,
         &v17) < 0
    || IsPeopleExperienceHostView(a2) )
  {
    goto LABEL_23;
  }
  v18 = 0LL;
  v19 = 0;
  v20 = 0;
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v7,
                           (struct IApplicationView *)a3,
                           &v22,
                           (enum PositionerPropertySetHelpers::ActivationPropertyFlags *)&v18);
  v9 = DetailsForActivation;
  if ( DetailsForActivation >= 0 )
  {
    if ( ((__int64)v22.lpVtbl & 3) != 0 )
    {
      v22.lpVtbl = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
      inited = TabletModePositioner::CreateAndInitApplicationViewOperation(
                 (TabletModePositioner *)((char *)this - 128),
                 v10,
                 (struct IApplicationViewOperation **)&v22);
      v9 = inited;
      if ( inited < 0 )
      {
        v12 = 744LL;
LABEL_21:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)inited);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
        goto LABEL_24;
      }
      lpVtbl = v22.lpVtbl;
      inited = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, __int64))v22.lpVtbl->QueryInterface + 6))(
                 v22.lpVtbl,
                 3LL);
      v9 = inited;
      if ( inited < 0 )
      {
        v12 = 745LL;
        goto LABEL_21;
      }
      inited = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, __int64))lpVtbl->QueryInterface + 9))(lpVtbl, 1LL);
      v9 = inited;
      if ( inited < 0 )
      {
        v12 = 746LL;
        goto LABEL_21;
      }
      inited = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IUnknownVtbl *))(*(_QWORD *)a2 + 320LL))(
                 a2,
                 lpVtbl);
      v9 = inited;
      if ( inited < 0 )
      {
        v12 = 747LL;
        goto LABEL_21;
      }
    }
    else
    {
      v22.lpVtbl = 0LL;
      v14 = v18;
      if ( v18
        && (v15 = *((_QWORD *)this + 26),
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22),
            (*(int (__fastcall **)(__int64, __int64, struct IUnknown *))(*(_QWORD *)v15 + 48LL))(v15, v14, &v22) >= 0) )
      {
        inited = TabletModePositioner::AppToAppSwitchHelper(
                   (IUnknown *)this - 16,
                   (__int64)v22.lpVtbl,
                   v19,
                   (__int64)a2,
                   v20,
                   0);
        v9 = inited;
        if ( inited < 0 )
        {
          v12 = 755LL;
          goto LABEL_21;
        }
      }
      else
      {
        inited = TabletModePositioner::SwitchToAppHelper((char *)this - 128, a2, 0LL, 0LL, 0LL);
        v9 = inited;
        if ( inited < 0 )
        {
          v12 = 760LL;
          goto LABEL_21;
        }
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 21, (__int64)a2);
LABEL_23:
    v9 = 0;
    goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2E0,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)DetailsForActivation);
LABEL_24:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  return v9;
}
