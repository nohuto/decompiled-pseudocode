/*
 * XREFs of ?CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ @ 0x1800C8168
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18003E980 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 * Callees:
 *     std::function_void___cdecl(void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&)_::function_void___cdecl(void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&)___lambda_d726b1e7ec95932be2432bf4c2269415__void_ @ 0x1800E3E30 (std--function_void___cdecl(void___unsigned_long_unsigned___int64_unsigned_short_con_ea_1800E3E30.c)
 *     ??1?$unique_ptr@UHighResourceUsageReport@CProcessResourceAttributionReporter@@U?$default_delete@UHighResourceUsageReport@CProcessResourceAttributionReporter@@@std@@@std@@QEAA@XZ @ 0x1800E3FF4 (--1-$unique_ptr@UHighResourceUsageReport@CProcessResourceAttributionReporter@@U-$default_delete@.c)
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x1800E4014 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ?ForEachChangedProcessAttribution@CProcessAttributionObserver@@QEAAXPEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x1800E4880 (-ForEachChangedProcessAttribution@CProcessAttributionObserver@@QEAAXPEAXV-$function@$$A6AXPEAXK_.c)
 */

void __fastcall CProcessResourceAttributionReporter::CheckAndReportHighResourceUsage(
        union _SLIST_HEADER *this,
        __int64 a2,
        __int64 a3)
{
  ULONGLONG Region; // r9
  __int64 v5; // rax
  __int64 v6; // r9
  struct _TP_WORK *v7; // rcx
  _BYTE v8[72]; // [rsp+20h] [rbp-48h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+70h] [rbp+8h] BYREF

  Region = this[3].Region;
  ListEntry = 0LL;
  v5 = std::function_void___cdecl_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const____::function_void___cdecl_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const______lambda_d726b1e7ec95932be2432bf4c2269415__void_(
         v8,
         &ListEntry,
         a3,
         Region);
  CProcessAttributionObserver::ForEachChangedProcessAttribution(v6, this, v5);
  if ( (unsigned __int8)wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>(&ListEntry) )
  {
    InterlockedPushEntrySList(this + 1, ListEntry);
    v7 = (struct _TP_WORK *)this->Region;
    ListEntry = 0LL;
    SubmitThreadpoolWork(v7);
  }
  std::unique_ptr<CProcessResourceAttributionReporter::HighResourceUsageReport>::~unique_ptr<CProcessResourceAttributionReporter::HighResourceUsageReport>(&ListEntry);
}
