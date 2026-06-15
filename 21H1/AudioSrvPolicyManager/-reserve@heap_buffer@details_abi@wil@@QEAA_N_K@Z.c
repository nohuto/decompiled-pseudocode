/*
 * XREFs of ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x1800066DC
 * Callers:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x1800067E8 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x1800073CC (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     memcpy_s_0 @ 0x18000FED8 (memcpy_s_0.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

char __fastcall wil::details_abi::heap_buffer::reserve(wil::details_abi::heap_buffer *this, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  HANDLE ProcessHeap; // rax
  char *v5; // rdi
  HANDLE v6; // rax
  rsize_t v8; // rbp
  void *v9; // r14
  HANDLE v10; // rax

  if ( *((_QWORD *)this + 2) - *(_QWORD *)this < a2 )
  {
    v3 = (a2 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    ProcessHeap = GetProcessHeap();
    v5 = (char *)HeapAlloc(ProcessHeap, 0, v3);
    if ( wil::details::g_pfnRtlDisownModuleHeapAllocation )
    {
      v6 = GetProcessHeap();
      ((void (__fastcall *)(HANDLE, char *))wil::details::g_pfnRtlDisownModuleHeapAllocation)(v6, v5);
    }
    if ( !v5 )
      return 0;
    v8 = *((_QWORD *)this + 1) - *(_QWORD *)this;
    if ( v8 )
      memcpy_s_0(v5, v3, *(const void *const *)this, v8);
    v9 = (void *)*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = v5;
    if ( v9 )
    {
      v10 = GetProcessHeap();
      HeapFree(v10, 0, v9);
    }
    *(_QWORD *)this = v5;
    *((_QWORD *)this + 1) = &v5[v8];
    *((_QWORD *)this + 2) = &v5[v3];
  }
  return 1;
}
