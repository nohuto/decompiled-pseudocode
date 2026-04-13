/*
 * XREFs of ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180009240
 * Callers:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180009350 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180009F34 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x18000B2E0 (-RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

char __fastcall wil::details_abi::heap_buffer::reserve(wil::details_abi::heap_buffer *this, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  HANDLE ProcessHeap; // rax
  char *v5; // rax
  int (*v6)(void *, void *); // rbp
  char *v7; // rdi
  HANDLE v8; // rax
  rsize_t v10; // rbp
  void *v11; // r14
  HANDLE v12; // rax

  if ( *((_QWORD *)this + 2) - *(_QWORD *)this < a2 )
  {
    v3 = (a2 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    ProcessHeap = GetProcessHeap();
    v5 = (char *)HeapAlloc(ProcessHeap, 0, v3);
    v6 = wil::details::g_pfnRtlDisownModuleHeapAllocation;
    v7 = v5;
    if ( wil::details::g_pfnRtlDisownModuleHeapAllocation )
    {
      v8 = GetProcessHeap();
      ((void (__fastcall *)(HANDLE, char *))v6)(v8, v7);
    }
    if ( !v7 )
      return 0;
    v10 = *((_QWORD *)this + 1) - *(_QWORD *)this;
    memcpy_s(v7, v3, *(const void *const *)this, v10);
    v11 = (void *)*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = v7;
    if ( v11 )
    {
      v12 = GetProcessHeap();
      HeapFree(v12, 0, v11);
    }
    *(_QWORD *)this = v7;
    *((_QWORD *)this + 1) = &v7[v10];
    *((_QWORD *)this + 2) = &v7[v3];
  }
  return 1;
}
