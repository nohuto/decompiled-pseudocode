/*
 * XREFs of ?GroupManagementEnabledForCaller@WindowGroupingUtility@@YG_NXZ @ 0x9272E
 * Callers:
 *     _lambda_3dfc3574f1764bae2e3df8ef16480b1e_::operator() @ 0xEF93E (_lambda_3dfc3574f1764bae2e3df8ef16480b1e_--operator().c)
 *     _anonymous_namespace_::TryExecuteIfPolicyAllows__lambda_8f4b63029e330354df5e58e7f72e89f8___ @ 0xF4F98 (_anonymous_namespace_--TryExecuteIfPolicyAllows__lambda_8f4b63029e330354df5e58e7f72e89f8___.c)
 * Callees:
 *     <none>
 */

int WindowGroupingUtility::GroupManagementEnabledForCaller()
{
  int v0; // eax

  v0 = *(_DWORD *)(_gptiCurrent + 248);
  if ( v0 )
    return anonymous_namespace_::GroupManagementEnabledForDesktop(***(_DWORD ***)(v0 + 4));
  else
    return anonymous_namespace_::GroupManagementEnabledForDesktop(-1);
}
