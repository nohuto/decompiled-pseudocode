/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180065F78
 * Callers:
 *     ?destroy@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18003B530 (-destroy@-$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXX.c)
 *     ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x1800647D4 (--_GEnabledStateManager@details@wil@@QEAAPEAXI@Z.c)
 *     ?OnTimer@EnabledStateManager@details@wil@@QEAAXXZ @ 0x180065BD8 (-OnTimer@EnabledStateManager@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ??9details_abi@wil@@YA_NAEBV?$heap_vector_iterator@UCachedFeaturePropertyData@EnabledStateManager@details@wil@@@01@0@Z @ 0x18003DCBC (--9details_abi@wil@@YA_NAEBV-$heap_vector_iterator@UCachedFeaturePropertyData@EnabledStateManage.c)
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXAEBUCachedUsageData@123@@Z @ 0x18003E0A4 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXAEBUCachedUsageData@123@@Z.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180067B18 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(wil::details::EnabledStateManager *this)
{
  __int64 v2; // rcx
  const struct wil::details::EnabledStateManager::CachedUsageData *v3; // rbx
  wil::details::EnabledStateManager *v4; // rcx
  unsigned int v5; // r9d
  const char *v6; // [rsp+20h] [rbp-8h]
  const struct wil::details::EnabledStateManager::CachedUsageData *v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 7);
  v3 = (const struct wil::details::EnabledStateManager::CachedUsageData *)*((_QWORD *)this + 6);
  if ( (unsigned __int64)(v2 - (_QWORD)v3) >= 0x10 )
  {
    v8 = v2;
    while ( 1 )
    {
      v7 = v3;
      if ( !wil::details_abi::operator!=(&v7, &v8) )
        break;
      wil::details::EnabledStateManager::RecordCachedUsageUnderLock(v4, v3);
      v3 = (const struct wil::details::EnabledStateManager::CachedUsageData *)((char *)v3 + 16);
    }
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    wil::details::WilApi_RecordFeatureUsage(0LL, 0xFEu, 0, v5, v6);
  }
}
