/*
 * XREFs of ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180046658
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x180048A50 (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 *     _lambda_c6623334da8ed11a0378a692878c9731_::operator() @ 0x1803EA7E0 (_lambda_c6623334da8ed11a0378a692878c9731_--operator().c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PeopleBar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180030578 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PeopleBar@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180039250 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18004627C (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPositi.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x180046894 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     IsPeoplePane @ 0x180048760 (IsPeoplePane.c)
 *     ?_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18004889C (-_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIAppli.c)
 *     ?_UsePreferredSizeForStandaloneWindows@CDesktopPositioner@@AEBA_NPEAUIApplicationView@@@Z @ 0x1800489BC (-_UsePreferredSizeForStandaloneWindows@CDesktopPositioner@@AEBA_NPEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007C9C8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180212350 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z @ 0x1803F003C (-_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedA.c)
 *     ?_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1803F0364 (-_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CDesktopPositioner::_GetRestorePosition(
        IUnknown *punkSite,
        struct IApplicationView *a2,
        struct PositionerPropertySetHelpers::ViewSizePreferences *a3,
        struct IApplicationViewPosition **a4)
{
  struct IApplicationView *v6; // rdx
  int v7; // ebx
  HWND WindowForView; // rax
  __int64 v9; // rax
  int v10; // eax
  CDesktopPositioner *v11; // rcx
  int v12; // eax
  int LaunchPosition; // eax
  struct IUnknownVtbl *lpVtbl; // rdi
  int (__fastcall *v16)(struct IUnknownVtbl *, _QWORD, struct IApplicationView **); // rbx
  int (__fastcall *v17)(struct IApplicationView *, __int64 *); // rbx
  struct IApplicationView *v18; // rbx
  int (__fastcall *v19)(struct IApplicationView *, GUID *, __int64 *); // rdi
  int v20; // eax
  CDesktopPositioner *v21; // rcx
  int v22; // eax
  struct IApplicationView *v23; // [rsp+20h] [rbp-A9h]
  struct IApplicationView *v24; // [rsp+28h] [rbp-A1h] BYREF
  int v25; // [rsp+30h] [rbp-99h] BYREF
  __int64 v26; // [rsp+38h] [rbp-91h] BYREF
  struct IApplicationViewPosition **v27; // [rsp+40h] [rbp-89h]
  struct IOcclusionBasedApplicationViewPosition *v28; // [rsp+48h] [rbp-81h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-79h] BYREF
  __int64 v30; // [rsp+58h] [rbp-71h]
  __int64 v31; // [rsp+60h] [rbp-69h]
  int v32; // [rsp+68h] [rbp-61h] BYREF
  __int64 v33; // [rsp+70h] [rbp-59h] BYREF
  __int64 v34; // [rsp+78h] [rbp-51h] BYREF
  __int64 v35; // [rsp+80h] [rbp-49h]
  __int64 v36; // [rsp+88h] [rbp-41h]
  __int64 v37; // [rsp+90h] [rbp-39h] BYREF
  int v38; // [rsp+9Ch] [rbp-2Dh]
  unsigned int v39[2]; // [rsp+A0h] [rbp-29h] BYREF
  const char *v40; // [rsp+A8h] [rbp-21h]
  __int64 v41; // [rsp+B0h] [rbp-19h]
  __int16 v42; // [rsp+B8h] [rbp-11h]
  RECT rc; // [rsp+C0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v23 = a2;
  v27 = a4;
  *a4 = 0LL;
  *(_QWORD *)v39 = retaddr;
  v40 = "pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp";
  v41 = 0LL;
  v42 = 1447;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PeopleBar>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetImpl'::`2'::impl,
    1u);
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)&v37);
  if ( (unsigned __int8)IsPeoplePane(v23)
    && (LaunchPosition = CDesktopPositioner::_GetLaunchPosition(punkSite, v23, v27),
        v7 = LaunchPosition,
        LaunchPosition < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5AB,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)LaunchPosition,
      (int)v23);
  }
  else
  {
    v7 = 0;
  }
  if ( v7 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v7,
      (wil::ThreadErrorContext *)&v37,
      (struct wil::ThreadErrorContext *)0x60F183,
      (unsigned int)v39,
      (const struct DiagnosticsInfo *)v23);
  if ( v37 )
    *(_DWORD *)(v37 + 16) = v38;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5B0,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v7,
      (int)v23);
    return (unsigned int)v7;
  }
  if ( *v27 )
    return 0LL;
  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                          (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v23,
                          v6);
  if ( WindowForView && (GetWindowLongPtrW(WindowForView, -16) & 0x10000) != 0 )
  {
    rc = 0LL;
    v24 = 0LL;
    pv = 0LL;
    v30 = 0LL;
    v31 = 0LL;
    v9 = *(_QWORD *)v23;
    v30 = -1LL;
    v31 = -1LL;
    v10 = (*(__int64 (__fastcall **)(struct IApplicationView *, LPVOID *))(v9 + 488))(v23, &pv);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5C5,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v10,
        (int)v23);
    }
    else
    {
      if ( !pv )
      {
        if ( !a3 || !*(_QWORD *)a3 )
          goto LABEL_47;
        lpVtbl = punkSite[34].lpVtbl;
        v16 = (int (__fastcall *)(struct IUnknownVtbl *, _QWORD, struct IApplicationView **))*((_QWORD *)lpVtbl->QueryInterface
                                                                                             + 6);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
        if ( v16(lpVtbl, *(_QWORD *)a3, &v24) >= 0 )
        {
          v25 = 0;
          v34 = 0LL;
          v35 = 0LL;
          v36 = 0LL;
          v17 = *(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)v23 + 136LL);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v34);
          v35 = -1LL;
          v36 = -1LL;
          if ( v17(v23, &v34) >= 0 )
            (*(void (__fastcall **)(struct IApplicationView *, __int64, int *))(*(_QWORD *)v24 + 152LL))(v24, v34, &v25);
          v26 = 0LL;
          if ( v25 )
          {
            v18 = v24;
            v19 = *(int (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)v24 + 104LL);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
            if ( v19(v18, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, &v26) >= 0
              && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v26 + 32LL))(v26, &v32) >= 0 )
            {
              if ( v32 == 2 )
              {
                v20 = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)v26 + 24LL))(v26, &rc);
                if ( v20 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x5E4,
                    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                    (const char *)(unsigned int)v20,
                    (int)v23);
              }
              else
              {
                v28 = 0LL;
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
                if ( CDesktopPositioner::_GetFullPositionSnapshot(v21, v24, &v28) >= 0 )
                {
                  v22 = (*(__int64 (__fastcall **)(struct IOcclusionBasedApplicationViewPosition *, RECT *))(*(_QWORD *)v28 + 56LL))(
                          v28,
                          &rc);
                  if ( v22 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x5EF,
                      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                      (const char *)(unsigned int)v22,
                      (int)v23);
                }
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
              }
            }
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v34);
        }
        if ( !pv )
        {
LABEL_47:
          if ( !CDesktopPositioner::_UsePreferredSizeForStandaloneWindows(v11, v23)
            && !IsRectEmpty(&rc)
            && CDesktopPositioner::_GetOffsetPosition((CDesktopPositioner *)punkSite, &rc, v27) >= 0 )
          {
            goto LABEL_19;
          }
        }
      }
      v33 = 0LL;
      if ( (int)CDesktopPositioner::_GetPreferredPosition((CDesktopPositioner *)punkSite, v23, &rc, v27) >= 0
        || (v12 = CDesktopPositioner::_GetLaunchPosition(punkSite, v23, v27), v7 = v12, v12 >= 0) )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
LABEL_19:
        if ( pv )
        {
          CoTaskMemFree(pv);
          pv = 0LL;
        }
        v30 = 0LL;
        v31 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x602,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v12,
        (int)v23);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&pv);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    return (unsigned int)v7;
  }
  return 2147943568LL;
}
