/*
 * XREFs of ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x18021F9B8
 * Callers:
 *     ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18021F72C (-GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV-$vector@V-$ComPtr@UIDiscoverRecent.c)
 *     ?HaveUsedPen@RecentAppsCache@Discover@PenWorkspace@@QEAAJPEAH@Z @ 0x18021FAE4 (-HaveUsedPen@RecentAppsCache@Discover@PenWorkspace@@QEAAJPEAH@Z.c)
 *     ?SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x180221994 (-SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@UViewEventRegistration@@@std@@@?$vector@V?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UViewEventRegistration@@@1@QEAV21@AEBV21@@Z @ 0x18021DAAC (--$_Emplace_reallocate@AEBV-$shared_ptr@UViewEventRegistration@@@std@@@-$vector@V-$shared_ptr@UV.c)
 *     ??$_Sort_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0_JP6A_NAEAV10@2@Z@Z @ 0x18021E658 (--$_Sort_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@s.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::GetSortedAppList(RTL_SRWLOCK *a1, __int64 a2)
{
  __int64 v2; // rsi
  RTL_SRWLOCK *v4; // r14
  const char *v5; // r9
  RTL_SRWLOCK *v6; // rdi
  _QWORD *Ptr; // r15
  _QWORD *v8; // rbx
  _QWORD *v9; // r8
  _QWORD *v10; // rdx
  __int64 v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = a2;
  v4 = a1 + 21;
  AcquireSRWLockShared(a1 + 21);
  v6 = v4;
  Ptr = a1[3].Ptr;
  v8 = (_QWORD *)*Ptr;
  try
  {
    while ( v8 != Ptr )
    {
      v9 = v8 + 6;
      v10 = *(_QWORD **)(v2 + 8);
      if ( *(_QWORD **)(v2 + 16) == v10 )
      {
        std::vector<std::shared_ptr<ViewEventRegistration>>::_Emplace_reallocate<std::shared_ptr<ViewEventRegistration> const &>(
          (__int64 *)v2,
          (__int64)v10,
          v9);
      }
      else
      {
        *v10 = 0LL;
        v10[1] = 0LL;
        v11 = v8[7];
        if ( v11 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
          v6 = v4;
        }
        *v10 = *v9;
        v10[1] = v8[7];
        *(_QWORD *)(v2 + 8) += 16LL;
      }
      v8 = (_QWORD *)*v8;
    }
    if ( v4 )
      ReleaseSRWLockShared(v6);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xEA,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      v5);
    v2 = a2;
  }
  std::_Sort_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
    *(__int64 **)v2,
    *(char **)(v2 + 8),
    (__int64)(*(_QWORD *)(v2 + 8) - *(_QWORD *)v2) >> 4,
    (__int64 (__fastcall *)(__int64 *, __int64 *))anonymous_namespace_::CompareAppUsageTimes);
  return 0LL;
}
