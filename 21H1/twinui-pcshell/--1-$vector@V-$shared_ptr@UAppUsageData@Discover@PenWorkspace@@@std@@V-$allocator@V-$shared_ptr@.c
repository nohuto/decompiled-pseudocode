/*
 * XREFs of ??1?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@QEAA@XZ @ 0x1801FC20C
 * Callers:
 *     _PenWorkspace::Discover::RecentAppsCache::GetMRUApps_::_1_::dtor$0 @ 0x1801FD092 (_PenWorkspace--Discover--RecentAppsCache--GetMRUApps_--_1_--dtor$0.c)
 *     _PenWorkspace::Discover::RecentAppsCache::HaveUsedPen_::_1_::dtor$0 @ 0x1801FD2C8 (_PenWorkspace--Discover--RecentAppsCache--HaveUsedPen_--_1_--dtor$0.c)
 *     _PenWorkspace::Discover::RecentAppsCache::SaveDataToJson_::_1_::dtor$0 @ 0x1801FF78B (_PenWorkspace--Discover--RecentAppsCache--SaveDataToJson_--_1_--dtor$0.c)
 *     _PeoplePaneViewManager::ClosePeoplePane_::_1_::dtor$1 @ 0x18023CDB6 (_PeoplePaneViewManager--ClosePeoplePane_--_1_--dtor$1.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$13 @ 0x18032601C (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$13.c)
 *     _TouchKeyboardExperienceManager::OnInputAppChangeApproved_::_1_::dtor$1 @ 0x18032C799 (_TouchKeyboardExperienceManager--OnInputAppChangeApproved_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089424 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UKBViewInfo@@@0@0AEAV?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@0@@Z @ 0x1801FB064 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@YAXPEAV-$shared_ptr@.c)
 */

void __fastcall std::vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>::~vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>(
        __int64 *a1)
{
  void *v1; // rdi

  v1 = (void *)*a1;
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<KBViewInfo>>>(*a1, a1[1]);
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)((a1[2] - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF0uLL));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
