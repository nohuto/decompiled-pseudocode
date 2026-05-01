/*
 * XREFs of ?CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1803D5638
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1803D39B4 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z @ 0x1803D4588 (-CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z.c)
 *     ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803D4860 (-ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 *     ?InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1803D7F00 (-InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresenta.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002C3A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wi.c)
 *     InlineIsEqualGUID @ 0x18003C4F0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18007BA64 (--4-$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplication.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x1801803A4 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIApplicationViewTabOperation@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180181894 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_180181894.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180182CB8 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1803D5A38 (-CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationV.c)
 */

__int64 __fastcall TabletModePositioner::CreateAndInitApplicationViewOperation(
        TabletModePositioner *this,
        struct IApplicationView *a2,
        struct IApplicationViewOperation **a3)
{
  __int64 v5; // rbx
  int CanCastTo; // ebx
  __int64 v7; // rcx
  struct IApplicationViewTitlebarConfiguration *v8; // rcx
  __m128i si128; // xmm0
  struct IApplicationView *v10; // rcx
  _DWORD *v11; // rcx
  _DWORD *v12; // rcx
  _DWORD *v13; // r9
  _DWORD *v14; // rdx
  __int128 v16; // [rsp+30h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IApplicationViewTitlebarConfiguration *v18; // [rsp+78h] [rbp+28h] BYREF
  __int64 v19; // [rsp+80h] [rbp+30h] BYREF

  v18 = a2;
  *a3 = 0LL;
  Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v19);
  v5 = v19;
  if ( !v19 )
  {
    CanCastTo = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBB6,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_17;
  }
  *(_DWORD *)(v19 + 116) = 255;
  *(_DWORD *)(v5 + 120) = 23;
  *(_DWORD *)(v5 + 180) = 1;
  *(_DWORD *)(v5 + 200) = 0;
  *(_QWORD *)(v5 + 220) = 0LL;
  *(_QWORD *)(v5 + 228) = 0LL;
  *(_QWORD *)(v5 + 204) = 0LL;
  *(_QWORD *)(v5 + 212) = 0LL;
  *(_BYTE *)(v5 + 236) = 1;
  *(_QWORD *)(v5 + 240) = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetImpl'::`2'::impl,
    1u);
  v7 = *((_QWORD *)this + 56);
  if ( v7 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64, __int64, struct IApplicationViewTitlebarConfiguration **))(*(_QWORD *)v7 + 32LL))(
      v7,
      2LL,
      &v18);
    Microsoft::WRL::ComPtr<IApplicationViewTitlebarConfiguration>::operator=((__int64 *)(v5 + 184), (__int64)v18);
    v8 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  *(_QWORD *)&v16 = 0LL;
  *(_OWORD *)(v5 + 132) = 0LL;
  *((_QWORD *)&v16 + 1) = si128.m128i_i64[0];
  *(_BYTE *)(v5 + 128) = 1;
  v18 = 0LL;
  *(_OWORD *)(v5 + 148) = v16;
  *(_OWORD *)(v5 + 164) = si128.m128i_u64[1];
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  TabletModePositioner::CreateTitlebarConfiguration(v10, &v18);
  Microsoft::WRL::ComPtr<IApplicationViewTitlebarConfiguration>::operator=((__int64 *)(v5 + 192), (__int64)v18);
  *(_DWORD *)(v5 + 124) = 1;
  *a3 = 0LL;
  if ( InlineIsEqualGUID(&GUID_cc6192be_2002_4cd1_a603_e3b6795b4000, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v11, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *a3 = (struct IApplicationViewOperation *)v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    CanCastTo = 0;
    goto LABEL_13;
  }
  if ( InlineIsEqualGUID(v12, v13) )
  {
    *a3 = (struct IApplicationViewOperation *)v5;
    CanCastTo = 0;
LABEL_11:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    goto LABEL_13;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::ComposableShell::Tabs::IApplicationViewTabOperation,Microsoft::WRL::FtmBase>::CanCastTo(
                v5 + 8,
                v14);
  if ( CanCastTo >= 0 )
    goto LABEL_11;
LABEL_13:
  if ( CanCastTo >= 0 )
    CanCastTo = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBD8,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)CanCastTo);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
LABEL_17:
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v19);
  return (unsigned int)CanCastTo;
}
