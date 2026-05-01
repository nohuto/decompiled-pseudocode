/*
 * XREFs of ??1?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x18019A8D8
 * Callers:
 *     _CustomShellManager::CustomShellManager_::_1_::dtor$3 @ 0x18019B620 (_CustomShellManager--CustomShellManager_--_1_--dtor$3.c)
 *     _RetailDemoExperienceManager::_ParseExperienceArguments_::_1_::dtor$0 @ 0x1801EEBAD (_RetailDemoExperienceManager--_ParseExperienceArguments_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::_ParseExperienceArguments_::_1_::dtor$2 @ 0x1801EEBC5 (_RetailDemoExperienceManager--_ParseExperienceArguments_--_1_--dtor$2.c)
 *     _RetailDemoExperienceManager::_SplitString_::_1_::dtor$0 @ 0x1801EF243 (_RetailDemoExperienceManager--_SplitString_--_1_--dtor$0.c)
 *     ?GetActiveApps@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@5@@Z @ 0x180454470 (-GetActiveApps@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAPEAU-$IVec.c)
 *     _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::GetActiveApps_::_1_::dtor$2 @ 0x18045466B (_Windows--Internal--FamilySafety--AppLimits--FamilyAppUsageManager--GetActiveApps_--_1_--dtor$2.c)
 *     _AppUsageTracker::GetActiveApps_::_1_::dtor$0 @ 0x180457BDA (_AppUsageTracker--GetActiveApps_--_1_--dtor$0.c)
 *     _AppUsageTracker::GetActiveApps_::_1_::dtor$1 @ 0x180457C01 (_AppUsageTracker--GetActiveApps_--_1_--dtor$1.c)
 *     _UwpAppStateManager::GetActiveApps_::_1_::dtor$0 @ 0x1804599CC (_UwpAppStateManager--GetActiveApps_--_1_--dtor$0.c)
 *     _Win32AppStateManager::GetActiveApps_::_1_::dtor$0 @ 0x18045CD0C (_Win32AppStateManager--GetActiveApps_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<std::wstring>::~vector<std::wstring>(_QWORD *a1)
{
  std::vector<std::wstring>::_Tidy(a1);
}
