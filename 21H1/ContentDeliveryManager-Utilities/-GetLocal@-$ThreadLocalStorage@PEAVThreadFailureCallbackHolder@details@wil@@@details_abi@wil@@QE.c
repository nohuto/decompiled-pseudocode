/*
 * XREFs of ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180015F1C
 * Callers:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800276E4 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

signed __int64 __fastcall wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
        __int64 a1,
        char a2)
{
  __int64 v2; // rsi
  unsigned __int64 CurrentThreadId; // rbp
  unsigned __int64 v5; // rdi
  __int64 i; // rax
  HANDLE ProcessHeap; // rax
  LPVOID v8; // rax
  int (*v9)(void *, void *); // r14
  signed __int64 v10; // rbx
  HANDLE v11; // rax
  signed __int64 v12; // rax

  v2 = wil::details::g_pThreadFailureCallbacks;
  CurrentThreadId = GetCurrentThreadId();
  v5 = CurrentThreadId % 0xA;
  for ( i = *(_QWORD *)(v2 + 8 * (CurrentThreadId % 0xA)); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)i == (_DWORD)CurrentThreadId )
      return i + 16;
  }
  if ( !a2 )
    return 0LL;
  ProcessHeap = GetProcessHeap();
  v8 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v9 = wil::details::g_pfnRtlDisownModuleHeapAllocation;
  v10 = (signed __int64)v8;
  if ( wil::details::g_pfnRtlDisownModuleHeapAllocation )
  {
    v11 = GetProcessHeap();
    ((void (__fastcall *)(HANDLE, signed __int64))v9)(v11, v10);
  }
  if ( !v10 )
    return 0LL;
  *(_QWORD *)(v10 + 8) = 0LL;
  *(_QWORD *)(v10 + 16) = 0LL;
  *(_DWORD *)v10 = CurrentThreadId;
  _m_prefetchw((const void *)(v2 + 8 * v5));
  do
  {
    v12 = *(_QWORD *)(v2 + 8 * v5);
    *(_QWORD *)(v10 + 8) = v12;
  }
  while ( v12 != _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 8 * v5), v10, v12) );
  return v10 + 16;
}
