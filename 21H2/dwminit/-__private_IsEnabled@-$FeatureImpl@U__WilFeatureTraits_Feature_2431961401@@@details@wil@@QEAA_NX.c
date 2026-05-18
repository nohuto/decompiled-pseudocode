/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2431961401@@@details@wil@@QEAA_NXZ @ 0x18000BB1C
 * Callers:
 *     ??1CApiPortClient@@QEAA@XZ @ 0x18000B354 (--1CApiPortClient@@QEAA@XZ.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z @ 0x18000B5B8 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000B85C (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ??1CPortClient@@UEAA@XZ @ 0x18000BF4C (--1CPortClient@@UEAA@XZ.c)
 *     ?ConnectWithName@CPortClient@@QEAAJPEBG@Z @ 0x18000BFE0 (-ConnectWithName@CPortClient@@QEAAJPEBG@Z.c)
 *     ?Disconnect@CPortClient@@QEAAXXZ @ 0x18000C1D4 (-Disconnect@CPortClient@@QEAAXXZ.c)
 *     ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXI1FPEAJ@Z @ 0x18000C3B4 (-SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXI1FPEAJ@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_2431961401@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000BB58 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_2431961401@@@details@wil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_2431961401@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000BC94 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_2431961401@@@details@wil@@QEAAX_NW4Report.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_2431961401>::__private_IsEnabled(__int64 a1)
{
  char v2; // bl
  __int64 v3; // rdx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_2431961401>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  LOBYTE(v3) = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_2431961401>::ReportUsage(a1, v3);
  return v2;
}
