/*
 * XREFs of ?RemoveAll@?$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardCompareHelper@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardMergeHelper@UCacheEntry@ScreenManager@@@@@@QEAAXXZ @ 0x180405098
 * Callers:
 *     wil::details::ScopeExitFn__lambda_c9ed5d0d7324d3c8737b5be4fdbf9fc2___::_ScopeExitFn__lambda_c9ed5d0d7324d3c8737b5be4fdbf9fc2___ @ 0x1804041F0 (wil--details--ScopeExitFn__lambda_c9ed5d0d7324d3c8737b5be4fdbf9fc2___--_ScopeExitFn__lambda_c9ed.c)
 *     ??_EScreenManager@@UEAAPEAXI@Z @ 0x1804042E0 (--_EScreenManager@@UEAAPEAXI@Z.c)
 *     ?AppLayoutChanged@ScreenManager@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z @ 0x180404350 (-AppLayoutChanged@ScreenManager@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z.c)
 *     ?Destroy@ScreenManager@@UEAAJXZ @ 0x180404560 (-Destroy@ScreenManager@@UEAAJXZ.c)
 *     ?GetAppViewCloseOverrideOperation@ScreenManager@@UEAAJPEAUIAppLayout@@PEAUIApplicationView@@_NPEAPEAUIAppLayoutOperation@@@Z @ 0x180404660 (-GetAppViewCloseOverrideOperation@ScreenManager@@UEAAJPEAUIAppLayout@@PEAUIApplicationView@@_NPE.c)
 *     ?TabletModeChanged@ScreenManager@@UEAAJ_N@Z @ 0x1804052C0 (-TabletModeChanged@ScreenManager@@UEAAJ_N@Z.c)
 * Callees:
 *     ??1CacheEntry@ScreenManager@@QEAA@XZ @ 0x18040421C (--1CacheEntry@ScreenManager@@QEAA@XZ.c)
 */

void __fastcall CTSimpleArray<ScreenManager::CacheEntry,4294967294,CTPolicyCoTaskMem<ScreenManager::CacheEntry>,CSimpleArrayStandardCompareHelper<ScreenManager::CacheEntry>,CSimpleArrayStandardMergeHelper<ScreenManager::CacheEntry>>::RemoveAll(
        __int64 a1)
{
  void *v2; // rcx
  unsigned __int64 v3; // rsi
  __int64 v4; // rdi

  v2 = *(void **)a1;
  if ( v2 )
  {
    v3 = 0LL;
    if ( *(_QWORD *)(a1 + 8) )
    {
      v4 = 0LL;
      do
      {
        ScreenManager::CacheEntry::~CacheEntry((ScreenManager::CacheEntry *)(v4 + *(_QWORD *)a1));
        ++v3;
        v4 += 24LL;
      }
      while ( v3 < *(_QWORD *)(a1 + 8) );
      v2 = *(void **)a1;
    }
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
