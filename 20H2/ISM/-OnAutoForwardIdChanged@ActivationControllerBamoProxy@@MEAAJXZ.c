/*
 * XREFs of ?OnAutoForwardIdChanged@ActivationControllerBamoProxy@@MEAAJXZ @ 0x180104C50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetForegroundManager@ISMStatics@@SAPEAUIForegroundManager@@XZ @ 0x18001213C (-GetForegroundManager@ISMStatics@@SAPEAUIForegroundManager@@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputForegroundManager@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18001D2A4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputForegroundManager@@@details@wil@@QEA.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ActivationControllerBamoProxy::OnAutoForwardIdChanged(
        ActivationControllerBamoProxy *this,
        __int64 a2,
        __int64 a3)
{
  struct IForegroundManager *ForegroundManager; // r14
  void (__fastcall *v5)(struct IForegroundManager *, __int64, __int64); // rsi
  __int64 v6; // rbx
  __int64 v7; // rax

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputForegroundManager>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_InputForegroundManager>::GetImpl'::`2'::impl,
    1u,
    a3);
  ForegroundManager = ISMStatics::GetForegroundManager();
  v5 = *(void (__fastcall **)(struct IForegroundManager *, __int64, __int64))(*(_QWORD *)ForegroundManager + 56LL);
  v6 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 56LL))((char *)this + 8);
  v7 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 40LL))((char *)this + 8);
  v5(ForegroundManager, v7, v6);
  return 0LL;
}
