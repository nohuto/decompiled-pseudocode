/*
 * XREFs of ?UnboostPriority@WindowWrapperBase@@UEAAJXZ @ 0x18007F0D0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_868b6464a412d41748ea1a8c758341d2___ @ 0x18007F118 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_868b6464a412d41748ea1a8c758341d2.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowWrapperBase::UnboostPriority(WindowWrapperBase *this)
{
  DWORD CurrentThreadId; // eax
  __int64 v2; // rcx
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = (char *)this - 32;
  CurrentThreadId = GetCurrentThreadId();
  v3 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_868b6464a412d41748ea1a8c758341d2___(
         v2,
         CurrentThreadId,
         &v7);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8B5,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v3,
      v5);
    __debugbreak();
    JUMPOUT(0x180130784LL);
  }
  return 0LL;
}
