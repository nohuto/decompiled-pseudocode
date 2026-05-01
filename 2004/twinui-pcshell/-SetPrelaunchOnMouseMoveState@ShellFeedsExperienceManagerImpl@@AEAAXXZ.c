/*
 * XREFs of ?SetPrelaunchOnMouseMoveState@ShellFeedsExperienceManagerImpl@@AEAAXXZ @ 0x18009C748
 * Callers:
 *     ?RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x18009C4B8 (-RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFe.c)
 * Callees:
 *     ?GetDeviceConfiguration@ShellFeedsDeviceHelper@@YA?BV?$tuple@W4DeviceType@ShellFeedsDeviceHelper@@_N_KK@std@@XZ @ 0x18009A994 (-GetDeviceConfiguration@ShellFeedsDeviceHelper@@YA-BV-$tuple@W4DeviceType@ShellFeedsDeviceHelper.c)
 *     ?GetDeviceType@ShellFeedsDeviceHelper@@YA?AW4DeviceType@1@XZ @ 0x18009AA3C (-GetDeviceType@ShellFeedsDeviceHelper@@YA-AW4DeviceType@1@XZ.c)
 *     ?TryGetLastInteractionTimePoint@ShellFeedsExperienceHelpers@@YA?AV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@XZ @ 0x18009C94C (-TryGetLastInteractionTimePoint@ShellFeedsExperienceHelpers@@YA-AV-$time_point@Usystem_clock@chr.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PerfTelemetry_36401589@@@details@wil@@QEAA_NXZ @ 0x18009E5B8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PerfTelemetry_36401589@.c)
 */

void __fastcall ShellFeedsExperienceManagerImpl::SetPrelaunchOnMouseMoveState(ShellFeedsExperienceManagerImpl *this)
{
  int DeviceType; // eax
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF
  char v4; // [rsp+50h] [rbp+8h] BYREF

  *((_QWORD *)this + 22) = *(_QWORD *)ShellFeedsExperienceHelpers::TryGetLastInteractionTimePoint(&v4);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_PerfTelemetry_36401589>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_PerfTelemetry_36401589>::GetImpl'::`2'::impl) )
    DeviceType = *(_DWORD *)(ShellFeedsDeviceHelper::GetDeviceConfiguration((__int64)v3) + 24);
  else
    DeviceType = ShellFeedsDeviceHelper::GetDeviceType();
  *((_BYTE *)this + 160) = (unsigned int)(DeviceType - 1) <= 1;
}
