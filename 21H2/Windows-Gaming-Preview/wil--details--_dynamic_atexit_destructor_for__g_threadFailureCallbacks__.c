/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x1800473E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__()
{
  char *v0; // rdi
  _QWORD *v1; // rsi
  void *v2; // rbx
  HANDLE ProcessHeap; // rax
  char *result; // rax

  v0 = (char *)&wil::details::g_threadFailureCallbacks;
  do
  {
    v1 = *(_QWORD **)v0;
    while ( v1 )
    {
      v2 = v1;
      v1 = (_QWORD *)v1[1];
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v2);
    }
    *(_QWORD *)v0 = 0LL;
    result = &Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::isInitialized;
    v0 += 8;
  }
  while ( v0 != &Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::isInitialized );
  return result;
}
