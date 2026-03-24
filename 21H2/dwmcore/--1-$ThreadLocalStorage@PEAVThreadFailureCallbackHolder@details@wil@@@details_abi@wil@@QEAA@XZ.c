/*
 * XREFs of ??1?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAA@XZ @ 0x1800E64E0
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x1800F9700 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 * Callees:
 *     <none>
 */

__int128 *wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::~ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>()
{
  __int128 *v0; // rdi
  _QWORD *v1; // rsi
  __int128 *result; // rax
  void *v3; // rbx
  HANDLE ProcessHeap; // rax

  v0 = (__int128 *)&wil::details::g_threadFailureCallbacks;
  do
  {
    v1 = *(_QWORD **)v0;
    while ( v1 )
    {
      v3 = v1;
      v1 = (_QWORD *)v1[1];
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v3);
    }
    *(_QWORD *)v0 = 0LL;
    result = &xmmword_18034B4A0;
    v0 = (__int128 *)((char *)v0 + 8);
  }
  while ( v0 != &xmmword_18034B4A0 );
  return result;
}
