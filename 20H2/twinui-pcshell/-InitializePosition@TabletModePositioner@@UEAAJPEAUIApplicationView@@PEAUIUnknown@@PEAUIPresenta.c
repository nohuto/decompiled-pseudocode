/*
 * XREFs of ?InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1803F8A50
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x18001DB14 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x1800239E0 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z @ 0x18039BF90 (-IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01W4APP_TO_APP_SWITCH_FLAGS@@@Z @ 0x1803F3BB8 (-AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_P.c)
 *     ?CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1803F5CA8 (-CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUI.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x1803FEFE0 (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabletModePositioner::InitializePosition(
        TabletModePositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        struct IPresentationRequestedArgs *a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  PositionerPropertySetHelpers *v9; // rcx
  int DetailsForActivation; // eax
  unsigned int v11; // edi
  struct IApplicationView *v12; // rdx
  int inited; // eax
  __int64 v14; // rdx
  struct IUnknownVtbl *lpVtbl; // rbx
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v21; // [rsp+40h] [rbp-10h]
  int v22; // [rsp+44h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IUnknown v24; // [rsp+78h] [rbp+28h] BYREF

  v19 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
         a2,
         &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b,
         &v19) < 0
    || IsPeopleExperienceHostView(a2, v7, v8) )
  {
    goto LABEL_23;
  }
  v20 = 0LL;
  v21 = 0;
  v22 = 0;
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v9,
                           (struct IApplicationView *)a3,
                           &v24,
                           (enum PositionerPropertySetHelpers::ActivationPropertyFlags *)&v20);
  v11 = DetailsForActivation;
  if ( DetailsForActivation >= 0 )
  {
    if ( ((__int64)v24.lpVtbl & 3) != 0 )
    {
      v24.lpVtbl = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
      inited = TabletModePositioner::CreateAndInitApplicationViewOperation(
                 (TabletModePositioner *)((char *)this - 128),
                 v12,
                 (struct IApplicationViewOperation **)&v24);
      v11 = inited;
      if ( inited < 0 )
      {
        v14 = 760LL;
LABEL_21:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)inited);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
        goto LABEL_24;
      }
      lpVtbl = v24.lpVtbl;
      inited = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, __int64))v24.lpVtbl->QueryInterface + 6))(
                 v24.lpVtbl,
                 3LL);
      v11 = inited;
      if ( inited < 0 )
      {
        v14 = 761LL;
        goto LABEL_21;
      }
      inited = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, __int64))lpVtbl->QueryInterface + 9))(lpVtbl, 1LL);
      v11 = inited;
      if ( inited < 0 )
      {
        v14 = 762LL;
        goto LABEL_21;
      }
      inited = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IUnknownVtbl *))(*(_QWORD *)a2 + 320LL))(
                 a2,
                 lpVtbl);
      v11 = inited;
      if ( inited < 0 )
      {
        v14 = 763LL;
        goto LABEL_21;
      }
    }
    else
    {
      v24.lpVtbl = 0LL;
      v16 = v20;
      if ( v20
        && (v17 = *((_QWORD *)this + 26),
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24),
            (*(int (__fastcall **)(__int64, __int64, struct IUnknown *))(*(_QWORD *)v17 + 48LL))(v17, v16, &v24) >= 0) )
      {
        inited = TabletModePositioner::AppToAppSwitchHelper(
                   (IUnknown *)this - 16,
                   (__int64)v24.lpVtbl,
                   v21,
                   (__int64)a2,
                   v22,
                   0);
        v11 = inited;
        if ( inited < 0 )
        {
          v14 = 771LL;
          goto LABEL_21;
        }
      }
      else
      {
        inited = TabletModePositioner::SwitchToAppHelper((char *)this - 128, a2, 0LL, 0LL, 0LL);
        v11 = inited;
        if ( inited < 0 )
        {
          v14 = 776LL;
          goto LABEL_21;
        }
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 21, (__int64)a2);
LABEL_23:
    v11 = 0;
    goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2F0,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)DetailsForActivation);
LABEL_24:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  return v11;
}
