/*
 * XREFs of ?ForEachChangedProcessAttribution@CProcessAttributionObserver@@QEAAXPEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x1800E5D10
 * Callers:
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x180028710 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18005BFE0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 *     ?SendReportToE3@CEnergyReporter@@AEAAXXZ @ 0x1800C9778 (-SendReportToE3@CEnergyReporter@@AEAAXXZ.c)
 *     ?CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ @ 0x1800CF878 (-CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ.c)
 * Callees:
 *     ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x1800E4D10 (-EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObs.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcessAttributionObserver::ForEachChangedProcessAttribution(__int64 a1, __int64 a2, __int64 a3)
{
  void **v3; // rbp
  __int64 (__fastcall ***v5)(_QWORD, _BYTE *); // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _BYTE v10[56]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+58h] [rbp-10h]

  v3 = *(void ***)(a1 + 8);
  v5 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a3 + 56);
  v11 = 0LL;
  if ( v5 )
    v11 = (**v5)(v5, v10);
  CProcessAttributionManager::EnumerateChangedProcessAttributions(v3, a1, a2, (__int64)v10);
  v9 = *(_QWORD *)(a3 + 56);
  if ( v9 )
  {
    LOBYTE(v8) = v9 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 32LL))(v9, v8);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
}
