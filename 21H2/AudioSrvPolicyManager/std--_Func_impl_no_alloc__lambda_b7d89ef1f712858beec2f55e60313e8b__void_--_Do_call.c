/*
 * XREFs of std::_Func_impl_no_alloc__lambda_b7d89ef1f712858beec2f55e60313e8b__void_::_Do_call @ 0x1800093C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18001E7B8 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_b7d89ef1f712858beec2f55e60313e8b__void_::_Do_call(__int64 a1)
{
  CApplicationManager::ApplyPBMPolicyForAllAppsInSession(g_ApplicationManager, *(_DWORD *)(a1 + 8), 0);
  return CApplicationManager::ApplyPBMPolicyForAllAppsInSession(g_ApplicationManager, *(_DWORD *)(a1 + 8), 1);
}
