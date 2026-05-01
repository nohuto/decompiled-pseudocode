/*
 * XREFs of ?_EnsureHolographicViewConfiguration@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1802211C0
 * Callers:
 *     ?EnterFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x18021D880 (-EnterFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?ExitFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x18021D9A0 (-ExitFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1802236B0 (-_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18007BA64 (--4-$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplication.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ViewPresentationMode@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180093530 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ViewPresentationMode@@@details@wil@@QEAAX.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x1801803A4 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180182CB8 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_CreateTitleBarConfiguration@HolographicPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180220F2C (-_CreateTitleBarConfiguration@HolographicPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfigu.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1802218F0 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HolographicPositioner::_EnsureHolographicViewConfiguration(
        HolographicPositioner *this,
        struct IApplicationView *a2)
{
  int v3; // eax
  __int64 v4; // r8
  unsigned int v5; // ebx
  __int64 v6; // rbx
  HolographicPositioner *v7; // rcx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v13[3]; // [rsp+28h] [rbp-48h] BYREF
  __m256i v14; // [rsp+40h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  int v16; // [rsp+A0h] [rbp+30h] BYREF
  struct IApplicationViewTitlebarConfiguration *v17; // [rsp+A8h] [rbp+38h] BYREF

  HolographicPositioner::_FindViewHostItem(this, v13, a2);
  if ( v13[0] )
  {
    v14.m256i_i64[0] = 0LL;
    *(__m128i *)&v14.m256i_u64[1] = _mm_load_si128((const __m128i *)&_xmm);
    v14.m256i_i64[3] = 0LL;
    v16 = 0;
    v3 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v13[0] + 112LL))(v13[0], &v16);
    v5 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x766,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v3);
      goto LABEL_13;
    }
    v14.m256i_i32[0] = v16 == 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ViewPresentationMode>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetImpl'::`2'::impl,
      1u,
      v4);
    v14.m256i_i32[2] = 1;
    v14.m256i_i32[4] = 1;
    v14.m256i_i32[7] = 1;
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v12);
    v6 = v12;
    if ( !v12 )
    {
      v5 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x776,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)0x8007000ELL);
LABEL_10:
      Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v12);
      goto LABEL_13;
    }
    *(_OWORD *)(v12 + 132) = 0LL;
    *(__m256i *)(v6 + 148) = v14;
    *(_BYTE *)(v6 + 128) = 1;
    *(_DWORD *)(v6 + 116) = 255;
    *(_DWORD *)(v6 + 120) = 16;
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
    v8 = HolographicPositioner::_CreateTitleBarConfiguration(v7, &v17);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x77E,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<IApplicationViewTitlebarConfiguration>::operator=((__int64 *)(v6 + 192), (__int64)v17);
    *(_DWORD *)(v6 + 124) = 0;
    *(_QWORD *)(v6 + 220) = 0LL;
    *(_QWORD *)(v6 + 228) = 0LL;
    *(_QWORD *)(v6 + 204) = 0LL;
    *(_QWORD *)(v6 + 212) = 0LL;
    *(_BYTE *)(v6 + 236) = 1;
    *(_QWORD *)(v6 + 240) = 0LL;
    *(_DWORD *)(v6 + 80) = 2;
    *(_DWORD *)(v6 + 180) = 8;
    v9 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 320LL))(a2, v6);
    v5 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x78E,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v9);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      goto LABEL_10;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v12);
  }
  v5 = 0;
LABEL_13:
  v10 = v13[0];
  if ( v13[0] )
  {
    v13[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v5;
}
