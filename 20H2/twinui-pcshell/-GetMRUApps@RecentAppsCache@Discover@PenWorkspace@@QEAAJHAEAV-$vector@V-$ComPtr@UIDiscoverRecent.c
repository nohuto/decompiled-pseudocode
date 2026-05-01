/*
 * XREFs of ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18021F72C
 * Callers:
 *     ?GetRecentItems@PenWorkspaceDiscoverBroker@@UEAAJHPEAPEAUIObjectArray@@@Z @ 0x18021B2E0 (-GetRecentItems@PenWorkspaceDiscoverBroker@@UEAAJHPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089674 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UKBViewInfo@@@0@0AEAV?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@0@@Z @ 0x18021D8F8 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@YAXPEAV-$shared_ptr@.c)
 *     ??$_Emplace_reallocate@AEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@QEAV234@AEAV234@@Z @ 0x18021D938 (--$_Emplace_reallocate@AEAV-$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UI.c)
 *     ?CreateRecentItem@RecentAppsCache@Discover@PenWorkspace@@AEAAJV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@PEAPEAUIDiscoverRecentItem@@@Z @ 0x18021ED8C (-CreateRecentItem@RecentAppsCache@Discover@PenWorkspace@@AEAAJV-$shared_ptr@UAppUsageData@Discov.c)
 *     ?EnsureUnifiedTileManager@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x18021F17C (-EnsureUnifiedTileManager@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x18021F9B8 (-GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV-$vector@V-$shared_ptr@UAppUsa.c)
 *     ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x18021FD28 (-IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV-$shared_ptr@UAppUsageData.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::GetMRUApps(
        PenWorkspace::Discover::RecentAppsCache *this,
        int a2,
        __int64 **a3)
{
  __int64 **v3; // rsi
  int v4; // r12d
  PenWorkspace::Discover::RecentAppsCache *v5; // r14
  int SortedAppList; // edi
  __int64 v7; // rdx
  void *v8; // rbx
  void *v10; // rdi
  _QWORD *v11; // r15
  unsigned __int128 v12; // kr10_16
  _QWORD *i; // rbx
  unsigned __int128 v14; // kr20_16
  __int64 v15; // rcx
  __int64 v16; // rcx
  const char *v17; // r9
  __int64 *v18; // rdx
  _QWORD *v19; // [rsp+28h] [rbp-80h]
  __int128 v20; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v21[2]; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int128 v22; // [rsp+58h] [rbp-50h] BYREF
  __int64 v23; // [rsp+68h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v28; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = this;
  v22 = 0LL;
  v23 = 0LL;
  SortedAppList = PenWorkspace::Discover::RecentAppsCache::GetSortedAppList(this, &v22);
  if ( SortedAppList < 0 )
  {
    v7 = 177LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)SortedAppList);
    v8 = (void *)v22;
    if ( (_QWORD)v22 )
    {
      std::_Destroy_range<std::allocator<std::shared_ptr<KBViewInfo>>>(v22, *((__int64 *)&v22 + 1));
      std::_Deallocate<16,0>(v8, (const struct std::nothrow_t *)((v23 - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF0uLL));
    }
    return (unsigned int)SortedAppList;
  }
  SortedAppList = PenWorkspace::Discover::RecentAppsCache::EnsureUnifiedTileManager(v5);
  if ( SortedAppList < 0 )
  {
    v7 = 179LL;
    goto LABEL_3;
  }
  v12 = v22;
  v11 = (_QWORD *)(v12 >> 64);
  v10 = (void *)v12;
  v14 = v22;
  v19 = (_QWORD *)(v14 >> 64);
  for ( i = (_QWORD *)v14; i != v11; i += 2 )
  {
    v15 = i[1];
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
      v15 = i[1];
      v10 = (void *)v22;
    }
    v21[0] = *i;
    v21[1] = v15;
    if ( (unsigned __int8)PenWorkspace::Discover::RecentAppsCache::IsQualifiedDisplayItem(v5, v21) )
    {
      v28 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
      v20 = 0LL;
      v16 = i[1];
      if ( v16 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
        v16 = i[1];
        v10 = (void *)v22;
      }
      *(_QWORD *)&v20 = *i;
      *((_QWORD *)&v20 + 1) = v16;
      if ( (int)PenWorkspace::Discover::RecentAppsCache::CreateRecentItem((__int64)v5, (__int64)&v20, &v28) >= 0 )
      {
        try
        {
          v18 = v3[1];
          if ( v3[2] == v18 )
          {
            std::vector<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IDiscoverRecentItem> &>(
              v3,
              v18,
              &v28);
          }
          else
          {
            *v18 = v28;
            if ( v28 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
            ++v3[1];
          }
        }
        catch ( ... )
        {
          wil::details::in1diag3::Log_CaughtException(
            retaddr,
            (void *)0xC4,
            (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
            v17);
          v5 = this;
          v3 = a3;
          v4 = a2;
          v10 = (void *)v22;
          v11 = v19;
          goto LABEL_24;
        }
        if ( (int)(v3[1] - *v3) >= v4 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
          break;
        }
      }
LABEL_24:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    }
  }
  if ( v10 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<KBViewInfo>>>((__int64)v10, *((__int64 *)&v22 + 1));
    std::_Deallocate<16,0>(v10, (const struct std::nothrow_t *)((v23 - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF0uLL));
  }
  return 0LL;
}
