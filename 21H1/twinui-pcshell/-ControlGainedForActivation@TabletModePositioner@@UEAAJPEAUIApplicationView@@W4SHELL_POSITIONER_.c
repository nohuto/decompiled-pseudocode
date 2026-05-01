/*
 * XREFs of ?ControlGainedForActivation@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1803D4F20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18002A890 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18003DB30 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003EF48 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z @ 0x18037B600 (-IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01W4APP_TO_APP_SWITCH_FLAGS@@@Z @ 0x1803D37F8 (-AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_P.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SurfaceHubProximalAppLaunch@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803D9704 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SurfaceHubProximalAppLaunch@@@details@wil.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x1803DE070 (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 */

__int64 __fastcall TabletModePositioner::ControlGainedForActivation(
        __int64 a1,
        struct IUnknown *a2,
        int a3,
        struct IApplicationView *a4)
{
  __int64 *v5; // rbx
  PositionerPropertySetHelpers *v10; // rcx
  int DetailsForActivation; // ebx
  __int64 v12; // rdx
  char lpVtbl; // bl
  const struct _GUID *v14; // rdx
  __int64 v15; // rcx
  int Instance; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // r14
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // [rsp+30h] [rbp-20h] BYREF
  struct IUnknown *v24; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v25; // [rsp+40h] [rbp-10h]
  int v26; // [rsp+44h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IUnknown v28; // [rsp+70h] [rbp+20h] BYREF

  v5 = (__int64 *)(a1 + 168);
  if ( (unsigned int)SHIsSameObject(a2, *(struct IUnknown **)(a1 + 168)) )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v5);
    return 0LL;
  }
  if ( IsPeopleExperienceHostView((struct IApplicationView *)a2) )
    return 0LL;
  v24 = 0LL;
  v25 = 0;
  v26 = 0;
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v10,
                           a4,
                           &v28,
                           (enum PositionerPropertySetHelpers::ActivationPropertyFlags *)&v24);
  if ( DetailsForActivation >= 0 )
  {
    lpVtbl = (char)v28.lpVtbl;
    if ( ((__int64)v28.lpVtbl & 1) != 0 )
      return 0LL;
    if ( ((__int64)v28.lpVtbl & 0x10) != 0 )
    {
      DetailsForActivation = ((__int64 (__fastcall *)(struct IUnknown *, __int64))a2->lpVtbl[9].AddRef)(a2, 1LL);
      if ( DetailsForActivation >= 0 )
        return 0LL;
      v12 = 801LL;
      goto LABEL_7;
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SurfaceHubProximalAppLaunch>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_SurfaceHubProximalAppLaunch>::GetImpl'::`2'::impl,
      0LL);
    if ( (lpVtbl & 2) != 0 )
    {
      DetailsForActivation = ((__int64 (__fastcall *)(struct IUnknown *, __int64))a2->lpVtbl[9].AddRef)(a2, 1LL);
      if ( DetailsForActivation < 0 )
      {
        v12 = 816LL;
        goto LABEL_7;
      }
      DetailsForActivation = ((__int64 (__fastcall *)(struct IUnknown *))a2->lpVtbl[14].Release)(a2);
      if ( DetailsForActivation < 0 )
      {
        v12 = 817LL;
        goto LABEL_7;
      }
LABEL_38:
      DetailsForActivation = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD))a2->lpVtbl[18].QueryInterface)(a2, 0LL);
      if ( DetailsForActivation >= 0 )
        return 0LL;
      v12 = 856LL;
      goto LABEL_7;
    }
    if ( (*(unsigned int (__fastcall **)(_QWORD, struct IUnknown *))(**(_QWORD **)(a1 + 120) + 184LL))(
           *(_QWORD *)(a1 + 120),
           a2) )
    {
      ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl[2].QueryInterface)(a2);
      goto LABEL_38;
    }
    v28.lpVtbl = 0LL;
    if ( a3 == 6 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
      Instance = CEnumerableObjectCollection::CreateInstance(v15, v14, (void **)&v28.lpVtbl);
      DetailsForActivation = Instance;
      if ( Instance >= 0 )
      {
        v24 = a2;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v24);
        v17 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, struct IUnknown *))v28.lpVtbl->QueryInterface + 5))(
                v28.lpVtbl,
                a2);
        DetailsForActivation = v17;
        if ( v17 >= 0 )
        {
          v23 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
          v18 = (*(__int64 (__fastcall **)(struct IUnknownVtbl *, GUID *, __int64 *))v28.lpVtbl->QueryInterface)(
                  v28.lpVtbl,
                  &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                  &v23);
          DetailsForActivation = v18;
          if ( v18 >= 0 )
          {
            (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 96LL))(a1, v23, 6LL);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
            goto LABEL_38;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x343,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v18);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x340,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v17);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x33D,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)Instance);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
      return (unsigned int)DetailsForActivation;
    }
    v19 = (__int64)v24;
    if ( v24
      && (v20 = *(_QWORD *)(a1 + 208),
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28),
          (*(int (__fastcall **)(__int64, __int64, struct IUnknown *))(*(_QWORD *)v20 + 48LL))(v20, v19, &v28) >= 0) )
    {
      v21 = TabletModePositioner::AppToAppSwitchHelper(
              (IUnknown *)(a1 - 128),
              (__int64)v28.lpVtbl,
              v25,
              (__int64)a2,
              v26,
              0);
      DetailsForActivation = v21;
      if ( v21 < 0 )
      {
        v22 = 846LL;
LABEL_36:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v21);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
        return (unsigned int)DetailsForActivation;
      }
    }
    else
    {
      v21 = TabletModePositioner::SwitchToAppHelper(a1 - 128, a2, 0LL, 0LL, 0LL);
      DetailsForActivation = v21;
      if ( v21 < 0 )
      {
        v22 = 851LL;
        goto LABEL_36;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
    goto LABEL_38;
  }
  v12 = 793LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)DetailsForActivation);
  return (unsigned int)DetailsForActivation;
}
