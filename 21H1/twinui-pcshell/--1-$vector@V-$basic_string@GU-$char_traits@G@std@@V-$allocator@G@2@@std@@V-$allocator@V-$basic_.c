/*
 * XREFs of ??1?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x1801769A8
 * Callers:
 *     __lambda_d0f838cfdd25b27c1c6d7e08a6f313dc_::operator()_::_1_::dtor$1 @ 0x1800A8D23 (__lambda_d0f838cfdd25b27c1c6d7e08a6f313dc_--operator()_--_1_--dtor$1.c)
 *     _CustomShellManager::CustomShellManager_::_1_::dtor$3 @ 0x1801776F0 (_CustomShellManager--CustomShellManager_--_1_--dtor$3.c)
 *     _RetailDemoExperienceManager::_ParseExperienceArguments_::_1_::dtor$0 @ 0x1801CB0ED (_RetailDemoExperienceManager--_ParseExperienceArguments_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::_ParseExperienceArguments_::_1_::dtor$2 @ 0x1801CB105 (_RetailDemoExperienceManager--_ParseExperienceArguments_--_1_--dtor$2.c)
 *     _RetailDemoExperienceManager::_SplitString_::_1_::dtor$0 @ 0x1801CB783 (_RetailDemoExperienceManager--_SplitString_--_1_--dtor$0.c)
 *     _AppUsageTracker::GetActiveApps_::_1_::dtor$0 @ 0x180433F3A (_AppUsageTracker--GetActiveApps_--_1_--dtor$0.c)
 *     _AppUsageTracker::GetActiveApps_::_1_::dtor$1 @ 0x180433F61 (_AppUsageTracker--GetActiveApps_--_1_--dtor$1.c)
 *     _UwpAppStateManager::GetActiveApps_::_1_::dtor$0 @ 0x180435D2C (_UwpAppStateManager--GetActiveApps_--_1_--dtor$0.c)
 *     _Win32AppStateManager::GetActiveApps_::_1_::dtor$0 @ 0x180438F2C (_Win32AppStateManager--GetActiveApps_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<std::wstring>::~vector<std::wstring>(_QWORD *a1)
{
  std::vector<std::wstring>::_Tidy(a1);
}
