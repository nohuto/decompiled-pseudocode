/*
 * XREFs of ?GetViewGroupingPreference@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAA?AW4ViewGrouping@ViewManagement@UI@Windows@@XZ @ 0x180283198
 * Callers:
 *     _lambda_221251db4cf3622556bc46ff7d89c93b_::operator() @ 0x18028218C (_lambda_221251db4cf3622556bc46ff7d89c93b_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGroupingPreferenceFromPropertySet@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@PEAI@Z @ 0x180282D18 (-GetGroupingPreferenceFromPropertySet@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellH.c)
 *     ?GetSourceAppIdViewGroupingPreference@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAA?AW4ViewGrouping@ViewManagement@UI@Windows@@XZ @ 0x180282D84 (-GetSourceAppIdViewGroupingPreference@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAA-AW4ViewGro.c)
 *     ?GetTargetWindow@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAPEAUHWND__@@XZ @ 0x1802830F8 (-GetTargetWindow@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAPEAUHWND__@@XZ.c)
 */

__int64 __fastcall TabGroupingPolicy::TabGroupPolicyEvaluator::GetViewGroupingPreference(
        TabGroupingPolicy::TabGroupPolicyEvaluator *a1)
{
  HWND TargetWindow; // rax
  unsigned int *v3; // r8
  HRESULT WindowAttribute; // eax
  unsigned int v5; // ecx
  int GroupingPreferenceFromPropertySet; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int pvAttribute; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v10; // [rsp+40h] [rbp+18h] BYREF

  pvAttribute = 0;
  TargetWindow = TabGroupingPolicy::TabGroupPolicyEvaluator::GetTargetWindow(a1);
  if ( TargetWindow )
  {
    WindowAttribute = DwmGetWindowAttribute(TargetWindow, 0x13u, &pvAttribute, 4u);
    if ( WindowAttribute < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8D,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabgroupingpolicy.cpp",
        (const char *)(unsigned int)WindowAttribute);
  }
  v5 = pvAttribute;
  if ( !pvAttribute )
  {
    if ( !*(_QWORD *)a1 )
      return (unsigned int)TabGroupingPolicy::TabGroupPolicyEvaluator::GetSourceAppIdViewGroupingPreference(a1);
    GroupingPreferenceFromPropertySet = ViewSizePreferenceHelpers::GetGroupingPreferenceFromPropertySet(
                                          a1,
                                          (struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v10,
                                          v3);
    v5 = pvAttribute;
    if ( GroupingPreferenceFromPropertySet >= 0 )
      v5 = v10;
    pvAttribute = v5;
    if ( !v5 )
      return (unsigned int)TabGroupingPolicy::TabGroupPolicyEvaluator::GetSourceAppIdViewGroupingPreference(a1);
  }
  return v5;
}
