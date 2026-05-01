/*
 * XREFs of ?TerminateApp@WindowEventDispatcher@@UEAAJ_K@Z @ 0x1802B9A90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_b522e0f61b2c95c1f6d3fcbc5e751112___ @ 0x1800ABAA0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_b522e0f61b2c95c1f6d3fcbc5e751112.c)
 */

__int64 __fastcall WindowEventDispatcher::TerminateApp(WindowEventDispatcher *this, __int64 a2)
{
  DWORD CurrentThreadId; // eax
  unsigned int v3; // ecx
  int v4; // eax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  *(_QWORD *)&v6 = (char *)this - 24;
  *((_QWORD *)&v6 + 1) = &v8;
  CurrentThreadId = GetCurrentThreadId();
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_b522e0f61b2c95c1f6d3fcbc5e751112___(
         v3,
         CurrentThreadId,
         &v6);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7A5,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v4);
  return 0LL;
}
