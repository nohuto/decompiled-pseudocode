/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180065E98
 * Callers:
 *     ?destroy@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18003B5B0 (-destroy@-$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXX.c)
 *     ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x180064714 (--_GEnabledStateManager@details@wil@@QEAAPEAXI@Z.c)
 *     ?OnTimer@EnabledStateManager@details@wil@@QEAAXXZ @ 0x180068810 (-OnTimer@EnabledStateManager@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ??9details_abi@wil@@YA_NAEBV?$heap_vector_iterator@UCachedFeaturePropertyData@EnabledStateManager@details@wil@@@01@0@Z @ 0x18003DD1C (--9details_abi@wil@@YA_NAEBV-$heap_vector_iterator@UCachedFeaturePropertyData@EnabledStateManage.c)
 *     ?wil_details_RecordCachedUsage@@YAXIPEAUwil_details_FeatureReportingCache@@P6AXIIIPEBD@Z@Z @ 0x18003E24C (-wil_details_RecordCachedUsage@@YAXIPEAUwil_details_FeatureReportingCache@@P6AXIIIPEBD@Z@Z.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180067A28 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(wil::details::EnabledStateManager *this)
{
  __int64 v2; // rcx
  struct wil_details_FeatureReportingCache **v3; // rbx
  void (*v4)(unsigned int, unsigned int, unsigned int, const char *); // r8
  const char *v5; // [rsp+20h] [rbp-8h]
  struct wil_details_FeatureReportingCache **v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 7);
  v3 = (struct wil_details_FeatureReportingCache **)*((_QWORD *)this + 6);
  if ( (unsigned __int64)(v2 - (_QWORD)v3) >= 0x10 )
  {
    v7 = v2;
    while ( 1 )
    {
      v6 = v3;
      if ( !wil::details_abi::operator!=(&v6, &v7) )
        break;
      wil_details_RecordCachedUsage((wil::details *)*(unsigned int *)v3, v3[1], v4);
      v3 += 2;
    }
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    wil::details::WilApi_RecordFeatureUsage(0LL, 0xFEu, 0, 0, v5);
  }
}
