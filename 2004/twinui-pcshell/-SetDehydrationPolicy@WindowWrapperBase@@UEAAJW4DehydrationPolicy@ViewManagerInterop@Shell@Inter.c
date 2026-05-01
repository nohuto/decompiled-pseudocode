/*
 * XREFs of ?SetDehydrationPolicy@WindowWrapperBase@@UEAAJW4DehydrationPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180082A80
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_eae30243495778af9788549ed0d80990___ @ 0x180082AD8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_eae30243495778af9788549ed0d80990.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowWrapperBase::SetDehydrationPolicy(__int64 a1, int a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx
  int v4; // eax
  int v6[2]; // [rsp+20h] [rbp-18h] BYREF
  int *v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  *(_QWORD *)v6 = a1 - 32;
  v7 = &v9;
  CurrentThreadId = GetCurrentThreadId();
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_eae30243495778af9788549ed0d80990___(
         v3,
         CurrentThreadId,
         v6);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x95B,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v4,
      v6[0]);
    __debugbreak();
    JUMPOUT(0x180133926LL);
  }
  return 0LL;
}
