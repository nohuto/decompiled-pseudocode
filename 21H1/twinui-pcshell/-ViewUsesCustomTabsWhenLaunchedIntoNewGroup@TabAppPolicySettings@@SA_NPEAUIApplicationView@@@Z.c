/*
 * XREFs of ?ViewUsesCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@SA_NPEAUIApplicationView@@@Z @ 0x180262A74
 * Callers:
 *     ?EvaluateViewGroupingAndManagement@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH@Z @ 0x18024CFB0 (-EvaluateViewGroupingAndManagement@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH.c)
 *     _anonymous_namespace_::IsTabGroupAppManaged @ 0x18024FF98 (_anonymous_namespace_--IsTabGroupAppManaged.c)
 * Callees:
 *     _lambda_bff2fef391fc69882957931d698f6855_::operator() @ 0x180261D54 (_lambda_bff2fef391fc69882957931d698f6855_--operator().c)
 */

char __fastcall TabAppPolicySettings::ViewUsesCustomTabsWhenLaunchedIntoNewGroup(struct IApplicationView *a1)
{
  __int64 *v2[3]; // [rsp+20h] [rbp-18h] BYREF
  struct IApplicationView *v3; // [rsp+40h] [rbp+8h] BYREF
  char v4; // [rsp+48h] [rbp+10h] BYREF

  v3 = a1;
  v4 = 0;
  v2[0] = (__int64 *)&v3;
  v2[1] = (__int64 *)&v4;
  lambda_bff2fef391fc69882957931d698f6855_::operator()(v2);
  return v4;
}
