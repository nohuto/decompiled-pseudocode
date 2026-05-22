/*
 * XREFs of ?OnDisconnected@ActivationControllerBamoProxy@@MEAAJXZ @ 0x180005320
 * Callers:
 *     <none>
 * Callees:
 *     ?GetForegroundManager@ISMStatics@@SAPEAUIForegroundManager@@XZ @ 0x180011D4C (-GetForegroundManager@ISMStatics@@SAPEAUIForegroundManager@@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputForegroundManager@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18001CF44 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputForegroundManager@@@details@wil@@QEA.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ActivationControllerBamoProxy::OnDisconnected(ActivationControllerBamoProxy *this, __int64 a2)
{
  struct IForegroundManager *ForegroundManager; // rax

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputForegroundManager>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_InputForegroundManager>::GetImpl'::`2'::impl,
    a2);
  ForegroundManager = ISMStatics::GetForegroundManager();
  (*(void (__fastcall **)(struct IForegroundManager *, ActivationControllerBamoProxy *))(*(_QWORD *)ForegroundManager
                                                                                       + 48LL))(
    ForegroundManager,
    this);
  return 0LL;
}
