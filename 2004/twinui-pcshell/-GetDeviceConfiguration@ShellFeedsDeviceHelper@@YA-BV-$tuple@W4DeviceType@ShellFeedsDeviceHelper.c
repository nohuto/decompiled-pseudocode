/*
 * XREFs of ?GetDeviceConfiguration@ShellFeedsDeviceHelper@@YA?BV?$tuple@W4DeviceType@ShellFeedsDeviceHelper@@_N_KK@std@@XZ @ 0x18009A994
 * Callers:
 *     ?SetPrelaunchOnMouseMoveState@ShellFeedsExperienceManagerImpl@@AEAAXXZ @ 0x18009C748 (-SetPrelaunchOnMouseMoveState@ShellFeedsExperienceManagerImpl@@AEAAXXZ.c)
 * Callees:
 *     ?GetProcessorsCount@ShellFeedsDeviceHelper@@YAKXZ @ 0x18009AD20 (-GetProcessorsCount@ShellFeedsDeviceHelper@@YAKXZ.c)
 *     ?HasSSD@ShellFeedsDeviceHelper@@YA_NXZ @ 0x18009B174 (-HasSSD@ShellFeedsDeviceHelper@@YA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTestability@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18009C124 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTestability@@@details@wil@@QEAAX_NW4.c)
 */

__int64 __fastcall ShellFeedsDeviceHelper::GetDeviceConfiguration(__int64 a1)
{
  ShellFeedsDeviceHelper *v2; // rcx
  bool HasSSD; // si
  unsigned __int64 v4; // rdi
  ShellFeedsDeviceHelper *v5; // rcx
  unsigned int ProcessorsCount; // eax
  __int64 result; // rax
  unsigned __int64 TotalMemoryInKilobytes; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsTestability>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_FeedsTestability>::GetImpl'::`2'::impl,
    0LL);
  HasSSD = ShellFeedsDeviceHelper::HasSSD(v2);
  TotalMemoryInKilobytes = 0LL;
  GetPhysicallyInstalledSystemMemory(&TotalMemoryInKilobytes);
  v4 = TotalMemoryInKilobytes >> 20;
  ProcessorsCount = ShellFeedsDeviceHelper::GetProcessorsCount(v5);
  if ( !HasSSD )
    goto LABEL_8;
  if ( ProcessorsCount < 8 || v4 < 0x10 )
  {
    if ( ProcessorsCount > 2 && v4 > 4 )
    {
      *(_DWORD *)(a1 + 24) = 2;
      goto LABEL_9;
    }
LABEL_8:
    *(_DWORD *)(a1 + 24) = 3;
    goto LABEL_9;
  }
  *(_DWORD *)(a1 + 24) = 1;
LABEL_9:
  *(_DWORD *)a1 = ProcessorsCount;
  result = a1;
  *(_BYTE *)(a1 + 16) = HasSSD;
  *(_QWORD *)(a1 + 8) = v4;
  return result;
}
