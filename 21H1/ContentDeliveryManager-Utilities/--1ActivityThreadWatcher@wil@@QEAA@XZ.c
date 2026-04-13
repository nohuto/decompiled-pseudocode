/*
 * XREFs of ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x180063BCC
 * Callers:
 *     __lambda_b59dbdfd0007f2d89c20db91cc7697cd_::operator()_::_1_::dtor$1 @ 0x1800D05B3 (__lambda_b59dbdfd0007f2d89c20db91cc7697cd_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002775C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::ActivityThreadWatcher::~ActivityThreadWatcher(wil::ActivityThreadWatcher *this)
{
  wil::details::ThreadFailureCallbackHolder *v2; // rcx
  void *v3; // rbx
  HANDLE ProcessHeap; // rax

  v2 = (wil::ActivityThreadWatcher *)((char *)this + 32);
  if ( *((_DWORD *)v2 + 6) )
    wil::details::ThreadFailureCallbackHolder::StopWatching(v2);
  if ( *((_BYTE *)this + 24) )
  {
    v3 = (void *)*((_QWORD *)this + 2);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v3);
    *((_BYTE *)this + 24) = 0;
  }
  *((_QWORD *)this + 2) = 0LL;
}
