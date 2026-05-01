/*
 * XREFs of ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18004584C
 * Callers:
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180045C28 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002BA04 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@Q.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PeopleBar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003031C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PeopleBar@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?DefaultLaunchPositionOverride_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180044B8C (-DefaultLaunchPositionOverride_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x180045EAC (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@$$QEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Z @ 0x180045FB8 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRA.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x1800463E8 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?_ConvertScreenRectToWorkAreaRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x18004640C (-_ConvertScreenRectToWorkAreaRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ?_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z @ 0x1800464B0 (-_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007F164 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18008D664 (_CxxThrowException_0.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180093AA4 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x1801608DC (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ??$?4UIWICBitmapFlipRotator@@@?$ComPtr@UIWICBitmapSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@UIWICBitmapFlipRotator@@@12@@Z @ 0x18020082C (--$-4UIWICBitmapFlipRotator@@@-$ComPtr@UIWICBitmapSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$ComP.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CDesktopPositioner::_GetLaunchPosition(
        IUnknown *punkSite,
        struct IApplicationView *a2,
        struct IApplicationViewPosition **a3)
{
  unsigned int v4; // r14d
  struct wil::details::IFunctorHost *v5; // r8
  int (__fastcall **v6)(_QWORD, _QWORD, _QWORD); // rax
  int v7; // eax
  unsigned int v8; // ebx
  int (__fastcall **v9)(_QWORD, _QWORD, _QWORD); // rax
  int v10; // eax
  int Instance; // eax
  BOOL v12; // edi
  int DefaultRect; // eax
  CDesktopPositioner *v14; // rcx
  int fixed; // eax
  int v17; // eax
  struct IApplicationViewPosition *v18; // rcx
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-E0h]
  void *v21; // [rsp+30h] [rbp-D0h] BYREF
  IUnknown *punk; // [rsp+38h] [rbp-C8h] BYREF
  struct IApplicationView *v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  void *v26; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  struct IApplicationViewPosition **v28; // [rsp+68h] [rbp-98h] BYREF
  LPVOID v29; // [rsp+70h] [rbp-90h] BYREF
  __int64 v30; // [rsp+78h] [rbp-88h]
  __int64 v31; // [rsp+80h] [rbp-80h]
  LPVOID pv; // [rsp+88h] [rbp-78h] BYREF
  __int64 v33; // [rsp+90h] [rbp-70h]
  __int64 v34; // [rsp+98h] [rbp-68h]
  int v35; // [rsp+A0h] [rbp-60h]
  __int128 v36; // [rsp+A8h] [rbp-58h] BYREF
  int v37; // [rsp+B8h] [rbp-48h]
  _QWORD v38[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v39[3]; // [rsp+D0h] [rbp-30h] BYREF
  DiagnosticsInfo v40; // [rsp+100h] [rbp+0h] BYREF
  const char *v41; // [rsp+108h] [rbp+8h]
  __int64 v42; // [rsp+110h] [rbp+10h]
  __int16 v43; // [rsp+118h] [rbp+18h]
  _BYTE v44[8]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v45; // [rsp+128h] [rbp+28h]
  int v46; // [rsp+134h] [rbp+34h]
  struct tagRECT v47; // [rsp+148h] [rbp+48h] BYREF
  struct tagRECT v48; // [rsp+158h] [rbp+58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v23 = a2;
  v28 = a3;
  *a3 = 0LL;
  v39[0] = &v23;
  v39[1] = punkSite;
  v39[2] = &v28;
  v40 = (DiagnosticsInfo)retaddr;
  v41 = "pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp";
  v42 = 0LL;
  v43 = 1728;
  v4 = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PeopleBar>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetImpl'::`2'::impl,
    1u);
  v38[0] = &off_180472A98;
  v38[1] = v39;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v44, 0x60F183u, &v40);
  wil::details::RunFunctor((wil::details *)v38, (struct wil::details::IFunctor *)v44, v5);
  if ( v45 )
    *(_DWORD *)(v45 + 16) = v46;
  if ( *v28 )
    return 0LL;
  v21 = 0LL;
  pv = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v6 = *(int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v23;
  v33 = -1LL;
  v34 = -1LL;
  v7 = ((__int64 (__fastcall *)(struct IApplicationView *, LPVOID *))v6[17])(v23, &pv);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v29 = 0LL;
    v30 = 0LL;
    v31 = 0LL;
    v9 = *(int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v23;
    v30 = -1LL;
    v31 = -1LL;
    v10 = ((__int64 (__fastcall *)(struct IApplicationView *, LPVOID *))v9[61])(v23, &v29);
    v8 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6D3,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v10,
        v20);
LABEL_43:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v29);
      goto LABEL_44;
    }
    v25 = 0LL;
    if ( (*((int (__fastcall **)(struct IUnknownVtbl *, LPVOID, LPVOID, __int64 *))punkSite[31].lpVtbl->QueryInterface
          + 3))(
           punkSite[31].lpVtbl,
           pv,
           v29,
           &v25) >= 0 )
    {
      Microsoft::WRL::ComPtr<IWICBitmapSource>::operator=<IWICBitmapFlipRotator>(&v21, &v25);
      v4 = 0;
      goto LABEL_18;
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl,
      1u);
    punk = 0LL;
    Instance = DefaultLaunchPositionOverride_CreateInstance(0LL, (void **)&punk);
    v8 = Instance;
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6DD,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)Instance,
        v20);
LABEL_33:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&punk);
LABEL_42:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      goto LABEL_43;
    }
    IUnknown_SetSite(punk, punkSite);
    v36 = 0LL;
    v37 = 0;
    if ( ((int (__fastcall *)(IUnknown *, struct IApplicationView *, __int128 *))punk->lpVtbl[1].QueryInterface)(
           punk,
           v23,
           &v36) >= 0
      && (_BYTE)v37 )
    {
      v26 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      v17 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(&v26);
      v8 = v17;
      if ( v17 >= 0 )
      {
        v18 = (struct IApplicationViewPosition *)v26;
        v26 = 0LL;
        *v28 = v18;
        v8 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6E4,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v17,
          v20);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      goto LABEL_33;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&punk);
    v12 = 0;
    v24 = 0LL;
    if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v23)(
           v23,
           &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b,
           &v24) >= 0 )
    {
      v27 = 0LL;
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 24LL))(v24, &v27) >= 0 )
        v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v27 + 328LL))(v27, 0LL) != 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    }
    DefaultRect = CDesktopPositioner::_GetDefaultRect(punkSite, 0LL, v12, &v47);
    v8 = DefaultRect;
    if ( DefaultRect < 0 )
    {
      v19 = 1790LL;
    }
    else if ( LODWORD(punkSite[50].lpVtbl) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      DefaultRect = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(&v21);
      v8 = DefaultRect;
      if ( DefaultRect >= 0 )
        goto LABEL_17;
      v19 = 1794LL;
    }
    else
    {
      DefaultRect = CDesktopPositioner::_ConvertScreenRectToWorkAreaRect(v14, &v47, &v48);
      v8 = DefaultRect;
      if ( DefaultRect < 0 )
      {
        v19 = 1799LL;
      }
      else
      {
        v35 = 3;
        DefaultRect = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,enum ARRANGEMENT_BASED_VIEW_STATE,tagRECT &>(&v21);
        v8 = DefaultRect;
        if ( DefaultRect >= 0 )
        {
LABEL_17:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
LABEL_18:
          fixed = CDesktopPositioner::_FixPosition(punkSite, v4, v21, v28);
          v8 = fixed;
          if ( fixed < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x717,
              (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
              (const char *)(unsigned int)fixed,
              v20);
            goto LABEL_42;
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
          if ( v29 )
          {
            CoTaskMemFree(v29);
            v29 = 0LL;
          }
          v30 = 0LL;
          v31 = 0LL;
          if ( pv )
          {
            CoTaskMemFree(pv);
            pv = 0LL;
          }
          v33 = 0LL;
          v34 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
          return 0LL;
        }
        v19 = 1800LL;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)DefaultRect,
      v20);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    goto LABEL_42;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6D0,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v7,
    v20);
LABEL_44:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&pv);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  return v8;
}
