/*
 * XREFs of ?OnConnected@ActivationControllerBamoProxy@@MEAAJXZ @ 0x18000F040
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputForegroundManager@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18001D2A4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputForegroundManager@@@details@wil@@QEA.c)
 *     ??$MakeAndInitialize@VForegroundManager@@UIForegroundManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIForegroundManager@@@Z @ 0x180033604 (--$MakeAndInitialize@VForegroundManager@@UIForegroundManager@@$$V@Details@WRL@Microsoft@@YAJPEAP.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ActivationControllerBamoProxy::OnConnected(ActivationControllerBamoProxy *this, __int64 a2)
{
  struct IForegroundManager *v3; // rcx
  int v5; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IForegroundManager *v8; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputForegroundManager>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_InputForegroundManager>::GetImpl'::`2'::impl,
    a2);
  v3 = ISMStatics::s_foregroundManager;
  if ( !ISMStatics::s_foregroundManager )
  {
    v8 = 0LL;
    v5 = Microsoft::WRL::Details::MakeAndInitialize<ForegroundManager,IForegroundManager,>(&v8);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x15,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
        (const char *)(unsigned int)v5,
        v6);
      __debugbreak();
    }
    v3 = v8;
    v8 = 0LL;
    ISMStatics::s_foregroundManager = v3;
  }
  (*(void (__fastcall **)(struct IForegroundManager *, ActivationControllerBamoProxy *))(*(_QWORD *)v3 + 40LL))(
    v3,
    this);
  return 0LL;
}
