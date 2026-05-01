/*
 * XREFs of ?SetPosition@WindowWrapperBase@@UEAAJPEBUtagRECT@@@Z @ 0x18007E8D0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_401d01c73f60d7ebe16a53195295e8a5___ @ 0x18007E924 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_401d01c73f60d7ebe16a53195295e8a5.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowWrapperBase::SetPosition(WindowWrapperBase *this, const struct tagRECT *a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx
  int v4; // eax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  const struct tagRECT *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v6[0] = &v8;
  v6[1] = this;
  CurrentThreadId = GetCurrentThreadId();
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_401d01c73f60d7ebe16a53195295e8a5___(
         v3,
         CurrentThreadId,
         v6);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE4,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v4,
      v6[0]);
    __debugbreak();
    JUMPOUT(0x180131DDCLL);
  }
  return 0LL;
}
