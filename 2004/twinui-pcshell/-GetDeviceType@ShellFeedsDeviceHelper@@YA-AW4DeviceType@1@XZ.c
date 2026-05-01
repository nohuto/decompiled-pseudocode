/*
 * XREFs of ?GetDeviceType@ShellFeedsDeviceHelper@@YA?AW4DeviceType@1@XZ @ 0x18009AA3C
 * Callers:
 *     ?SetPrelaunchOnMouseMoveState@ShellFeedsExperienceManagerImpl@@AEAAXXZ @ 0x18009C748 (-SetPrelaunchOnMouseMoveState@ShellFeedsExperienceManagerImpl@@AEAAXXZ.c)
 * Callees:
 *     ?GetProcessorsCount@ShellFeedsDeviceHelper@@YAKXZ @ 0x18009AD20 (-GetProcessorsCount@ShellFeedsDeviceHelper@@YAKXZ.c)
 *     ?HasSSD@ShellFeedsDeviceHelper@@YA_NXZ @ 0x18009B174 (-HasSSD@ShellFeedsDeviceHelper@@YA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTestability@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18009C124 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTestability@@@details@wil@@QEAAX_NW4.c)
 */

__int64 ShellFeedsDeviceHelper::GetDeviceType()
{
  ShellFeedsDeviceHelper *v0; // rcx
  bool HasSSD; // bl
  unsigned __int64 v2; // rdi
  ShellFeedsDeviceHelper *v3; // rcx
  unsigned int ProcessorsCount; // eax
  __int64 result; // rax
  unsigned __int64 TotalMemoryInKilobytes; // [rsp+30h] [rbp+8h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsTestability>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_FeedsTestability>::GetImpl'::`2'::impl,
    0LL);
  HasSSD = ShellFeedsDeviceHelper::HasSSD(v0);
  TotalMemoryInKilobytes = 0LL;
  GetPhysicallyInstalledSystemMemory(&TotalMemoryInKilobytes);
  v2 = TotalMemoryInKilobytes >> 20;
  ProcessorsCount = ShellFeedsDeviceHelper::GetProcessorsCount(v3);
  if ( !HasSSD )
    return 3LL;
  if ( ProcessorsCount >= 8 && v2 >= 0x10 )
    return 1LL;
  if ( ProcessorsCount <= 2 )
    return 3LL;
  result = 2LL;
  if ( v2 <= 4 )
    return 3LL;
  return result;
}
