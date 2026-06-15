/*
 * XREFs of ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180034220
 * Callers:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180033DF0 (-RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_detail.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180034310 (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 * Callees:
 *     memcpy_s @ 0x18003440C (memcpy_s.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall wil::details_abi::heap_buffer::reserve(wil::details_abi::heap_buffer *this, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  HANDLE ProcessHeap; // rax
  char *v5; // rsi
  rsize_t v6; // rbp
  void *v7; // r14
  HANDLE v8; // rax
  HANDLE v10; // rax

  if ( *((_QWORD *)this + 2) - *(_QWORD *)this >= a2 )
    return 1;
  v3 = (a2 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
  ProcessHeap = GetProcessHeap();
  v5 = (char *)HeapAlloc(ProcessHeap, 0, v3);
  if ( wil::details::g_pfnRtlDisownModuleHeapAllocation )
  {
    v10 = GetProcessHeap();
    ((void (__fastcall *)(HANDLE, char *))wil::details::g_pfnRtlDisownModuleHeapAllocation)(v10, v5);
  }
  if ( v5 )
  {
    v6 = *((_QWORD *)this + 1) - *(_QWORD *)this;
    memcpy_s(v5, v3, *(const void *const *)this, v6);
    v7 = (void *)*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = v5;
    if ( v7 )
    {
      v8 = GetProcessHeap();
      HeapFree(v8, 0, v7);
    }
    *(_QWORD *)this = v5;
    *((_QWORD *)this + 1) = &v5[v6];
    *((_QWORD *)this + 2) = &v5[v3];
    return 1;
  }
  return 0;
}
