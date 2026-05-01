/*
 * XREFs of ?Shutdown@WindowEventDispatcher@@UEAAJXZ @ 0x1802B8E10
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_ef1ee2ad9bb2cc2c534b77abec71acbc___ @ 0x1800ABB90 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_ef1ee2ad9bb2cc2c534b77abec71acbc.c)
 */

__int64 __fastcall WindowEventDispatcher::Shutdown(WindowEventDispatcher *this)
{
  DWORD CurrentThreadId; // eax
  unsigned int v2; // ecx
  int v3; // eax
  __int64 *v5; // rdx
  const char *v6; // r9
  __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = (char *)this - 72;
  CurrentThreadId = GetCurrentThreadId();
  v3 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_ef1ee2ad9bb2cc2c534b77abec71acbc___(
         v2,
         CurrentThreadId,
         &v9);
  if ( v3 < 0 )
  {
    try
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2130LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v3);
      __debugbreak();
_WindowEventDispatcher__Shutdown____1___catch$0:
      *((_DWORD *)v5 + 12) = wil::details::in1diag3::Return_CaughtException(
                               (wil::details::in1diag3 *)v5[5],
                               (void *)0x855,
                               (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                               v6);
      return (unsigned int)v9;
    }
    catch ( ... )
    {
      v5 = &v7;
      goto _WindowEventDispatcher__Shutdown____1___catch$0;
    }
  }
  return 0LL;
}
