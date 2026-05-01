/*
 * XREFs of ?CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1803F6108
 * Callers:
 *     ?CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1803F5CA8 (-CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUI.c)
 *     ?GetChromeConfigurationForView@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1803F72B0 (-GetChromeConfigurationForView@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIAppl.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180033DB0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180033F70 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18003B8F8 (-IsPPIEdition@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Hub_AppCloseButton@@@details@wil@@QEAA_NXZ @ 0x180094310 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Hub_AppCloseButton@@@details@wil@.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x180178F58 (--$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplica.c)
 *     ??1?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAA@XZ @ 0x180179B1C (--1-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z @ 0x180181B60 (-SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z.c)
 *     ?OverlayTitlebarsInTabletMode@TitlebarOverlayHelpers@@YA_NXZ @ 0x1803F9CE4 (-OverlayTitlebarsInTabletMode@TitlebarOverlayHelpers@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositioner::CreateTitlebarConfiguration(
        struct IApplicationView *a1,
        struct IApplicationViewTitlebarConfiguration **a2)
{
  unsigned int v3; // edi
  TitlebarOverlayHelpers *v4; // rcx
  volatile int *v5; // rbx
  unsigned __int8 IsEnabled; // al
  _DWORD *v7; // rcx
  _DWORD *v8; // r9
  const struct _GUID *v9; // rdx
  int CanCastTo; // eax
  void (*v11)(void); // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile int *v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = (volatile int *)a1;
  v3 = 0;
  *a2 = 0LL;
  Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration,>(&v14);
  v5 = v14;
  if ( !v14 )
  {
    v3 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCA6,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_18;
  }
  if ( TitlebarOverlayHelpers::OverlayTitlebarsInTabletMode(v4) )
  {
    *((_WORD *)v5 + 24) = 1;
    *((_DWORD *)v5 + 13) = 1;
    *((_DWORD *)v5 + 14) = 1;
  }
  else
  {
    *((_WORD *)v5 + 24) = 257;
    *(_QWORD *)(v5 + 13) = 1LL;
  }
  *((_DWORD *)v5 + 22) = 0;
  if ( IsPPIEdition() )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Hub_AppCloseButton>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Hub_AppCloseButton>::GetImpl'::`2'::impl);
    ApplicationViewTitlebarConfiguration::SetVisibleButtons((__int64)v5, 55, IsEnabled != 0 ? 20 : 16);
    *((_DWORD *)v5 + 19) = 0;
  }
  else
  {
    ApplicationViewTitlebarConfiguration::SetVisibleButtons((__int64)v5, 55, 20);
    *((_DWORD *)v5 + 19) = 64;
  }
  *(_QWORD *)(v5 + 17) = 255LL;
  *((_DWORD *)v5 + 20) = 1;
  *((_BYTE *)v5 + 84) = 1;
  *a2 = 0LL;
  if ( InlineIsEqualGUID(&GUID_47dcddaf_0882_4312_b34f_a5ee46048bd6, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *a2 = (struct IApplicationViewTitlebarConfiguration *)v5;
    v11 = *(void (**)(void))(*(_QWORD *)v5 + 8LL);
    goto LABEL_17;
  }
  if ( InlineIsEqualGUID(v7, v8) )
  {
    *a2 = (struct IApplicationViewTitlebarConfiguration *)v5;
LABEL_15:
    v11 = *(void (**)(void))(*(_QWORD *)*a2 + 8LL);
LABEL_17:
    v11();
    goto LABEL_18;
  }
  CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v5 + 2), v9, (void **)a2);
  if ( CanCastTo == -2147467262 )
    CanCastTo = -2147467262;
  if ( CanCastTo >= 0 )
    goto LABEL_15;
LABEL_18:
  Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::~ComPtr<ApplicationViewTitlebarConfiguration>(&v14);
  return v3;
}
