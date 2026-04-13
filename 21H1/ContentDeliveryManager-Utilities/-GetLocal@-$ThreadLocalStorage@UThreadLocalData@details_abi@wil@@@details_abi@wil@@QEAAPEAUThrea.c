/*
 * XREFs of ?GetLocal@?$ThreadLocalStorage@UThreadLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAUThreadLocalData@23@_N@Z @ 0x180016024
 * Callers:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180006CE0 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

signed __int64 __fastcall wil::details_abi::ThreadLocalStorage<wil::details_abi::ThreadLocalData>::GetLocal(
        __int64 a1,
        char a2)
{
  unsigned __int64 CurrentThreadId; // r14
  unsigned __int64 v5; // rdi
  __int64 i; // rax
  HANDLE ProcessHeap; // rax
  LPVOID v8; // rax
  int (*v9)(void *, void *); // rbp
  signed __int64 v10; // rbx
  HANDLE v11; // rax
  signed __int64 v12; // rax

  CurrentThreadId = GetCurrentThreadId();
  v5 = CurrentThreadId % 0xA;
  for ( i = *(_QWORD *)(a1 + 8 * (CurrentThreadId % 0xA)); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)i == (_DWORD)CurrentThreadId )
      return i + 16;
  }
  if ( !a2 )
    return 0LL;
  ProcessHeap = GetProcessHeap();
  v8 = HeapAlloc(ProcessHeap, 0, 0x38uLL);
  v9 = wil::details::g_pfnRtlDisownModuleHeapAllocation;
  v10 = (signed __int64)v8;
  if ( wil::details::g_pfnRtlDisownModuleHeapAllocation )
  {
    v11 = GetProcessHeap();
    ((void (__fastcall *)(HANDLE, signed __int64))v9)(v11, v10);
  }
  if ( !v10 )
    return 0LL;
  *(_DWORD *)v10 = CurrentThreadId;
  *(_WORD *)(v10 + 16) = 40;
  *(_QWORD *)(v10 + 8) = 0LL;
  *(_DWORD *)(v10 + 20) = 0;
  *(_QWORD *)(v10 + 24) = 0LL;
  *(_DWORD *)(v10 + 32) = 0;
  *(_QWORD *)(v10 + 40) = 0LL;
  *(_DWORD *)(v10 + 48) = 0;
  _m_prefetchw((const void *)(a1 + 8 * v5));
  do
  {
    v12 = *(_QWORD *)(a1 + 8 * v5);
    *(_QWORD *)(v10 + 8) = v12;
  }
  while ( v12 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v5), v10, v12) );
  return v10 + 16;
}
