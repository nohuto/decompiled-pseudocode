/*
 * XREFs of _CClassicWindowManager::GetIntersectingMonitors_::_1_::dtor$2 @ 0x1800DDB77
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CClassicWindowManager::GetIntersectingMonitors_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll(a2 + 64);
}
