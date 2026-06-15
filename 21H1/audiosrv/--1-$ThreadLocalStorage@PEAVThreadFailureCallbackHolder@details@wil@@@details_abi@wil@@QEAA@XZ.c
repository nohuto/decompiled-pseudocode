/*
 * XREFs of ??1?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAA@XZ @ 0x180069CD4
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x18007D610 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 * Callees:
 *     <none>
 */

union _RTL_RUN_ONCE *wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::~ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>()
{
  union _RTL_RUN_ONCE *v0; // rdi
  union _RTL_RUN_ONCE v1; // rsi
  void *Ptr; // rbx
  HANDLE ProcessHeap; // rax
  union _RTL_RUN_ONCE *result; // rax

  v0 = (union _RTL_RUN_ONCE *)&wil::details::g_threadFailureCallbacks;
  do
  {
    v1.Ptr = v0->Ptr;
    while ( v1.Ptr )
    {
      Ptr = v1.Ptr;
      v1.Ptr = *(PVOID *)((char *)v1.Ptr + 8);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, Ptr);
    }
    v0->Ptr = 0LL;
    result = &`wil::details::FeatureLogging::Instance'::`2'::wrapper;
    ++v0;
  }
  while ( v0 != &`wil::details::FeatureLogging::Instance'::`2'::wrapper );
  return result;
}
