/*
 * XREFs of ?ShouldAttachDevice@HeatProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x180189930
 * Callers:
 *     <none>
 * Callees:
 *     ?OnDeviceArrival@HeatProcessor@@QEAAJPEAUDeviceInfo@@@Z @ 0x180189558 (-OnDeviceArrival@HeatProcessor@@QEAAJPEAUDeviceInfo@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_HeatMultiDevice@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801898A4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Input_HeatMultiDevice@@@details@wil@@QEAA.c)
 */

bool __fastcall HeatProcessor::ShouldAttachDevice(HeatProcessor *this, struct DeviceInfo *a2, __int64 a3)
{
  __int64 v6; // r8
  const char *v7; // r9

  if ( *((_DWORD *)a2 + 1) != 2048 )
    return 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_HeatMultiDevice>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Input_HeatMultiDevice>::GetImpl'::`2'::impl,
    1u,
    a3);
  return (int)HeatProcessor::OnDeviceArrival((HeatProcessor *)((char *)this - 8), a2, v6, v7) >= 0;
}
