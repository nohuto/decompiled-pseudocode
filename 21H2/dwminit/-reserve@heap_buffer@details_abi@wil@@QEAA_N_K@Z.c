/*
 * XREFs of ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180003F90
 * Callers:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x1800040C4 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x18000484C (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     memcpy_s @ 0x180001520 (memcpy_s.c)
 *     _guard_dispatch_icall_nop @ 0x18000DED0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall wil::details_abi::heap_buffer::reserve(wil::details_abi::heap_buffer *this, unsigned __int64 a2)
{
  DWORD LastError; // r15d
  unsigned __int64 v5; // rsi
  HANDLE ProcessHeap; // rax
  char *v7; // rax
  int (*v8)(void *, void *); // rbp
  char *v9; // rdi
  HANDLE v10; // rax
  rsize_t v12; // rbp
  void *v13; // r14
  HANDLE v14; // rax

  if ( *((_QWORD *)this + 2) - *(_QWORD *)this < a2 )
  {
    LastError = GetLastError();
    v5 = (a2 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    ProcessHeap = GetProcessHeap();
    v7 = (char *)HeapAlloc(ProcessHeap, 0, v5);
    v8 = wil::details::g_pfnRtlDisownModuleHeapAllocation;
    v9 = v7;
    if ( wil::details::g_pfnRtlDisownModuleHeapAllocation )
    {
      v10 = GetProcessHeap();
      ((void (__fastcall *)(HANDLE, char *))v8)(v10, v9);
    }
    if ( !v9 )
    {
      SetLastError(LastError);
      return 0;
    }
    v12 = *((_QWORD *)this + 1) - *(_QWORD *)this;
    if ( v12 )
      memcpy_s(v9, v5, *(const void *const *)this, v12);
    v13 = (void *)*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = v9;
    if ( v13 )
    {
      v14 = GetProcessHeap();
      HeapFree(v14, 0, v13);
    }
    *(_QWORD *)this = v9;
    *((_QWORD *)this + 1) = &v9[v12];
    *((_QWORD *)this + 2) = &v9[v5];
    SetLastError(LastError);
  }
  return 1;
}
