/*
 * XREFs of ?BoostPriority@WindowWrapperBase@@UEAAJXZ @ 0x18007FC90
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_7908cfebc1d28059a047661d0fa1da88___ @ 0x18007FCD8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_7908cfebc1d28059a047661d0fa1da88.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowWrapperBase::BoostPriority(WindowWrapperBase *this)
{
  DWORD CurrentThreadId; // eax
  __int64 v2; // rcx
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = (char *)this - 32;
  CurrentThreadId = GetCurrentThreadId();
  v3 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_7908cfebc1d28059a047661d0fa1da88___(
         v2,
         CurrentThreadId,
         &v7);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x886,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v3,
      v5);
    __debugbreak();
    JUMPOUT(0x180132BBALL);
  }
  return 0LL;
}
