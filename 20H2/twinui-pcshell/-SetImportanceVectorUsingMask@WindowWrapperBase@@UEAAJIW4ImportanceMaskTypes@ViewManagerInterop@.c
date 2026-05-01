/*
 * XREFs of ?SetImportanceVectorUsingMask@WindowWrapperBase@@UEAAJIW4ImportanceMaskTypes@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800776D0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_62a6912156eebe0a4bb23607e970b09b___ @ 0x180077734 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_62a6912156eebe0a4bb23607e970b09b.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowWrapperBase::SetImportanceVectorUsingMask(__int64 a1, int a2, int a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  int v5; // eax
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v9; // [rsp+58h] [rbp+10h] BYREF
  int v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a2;
  v7[0] = &v9;
  v7[1] = a1 - 32;
  v7[2] = &v10;
  CurrentThreadId = GetCurrentThreadId();
  v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_62a6912156eebe0a4bb23607e970b09b___(
         v4,
         CurrentThreadId,
         v7);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x929,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v5,
      v7[0]);
    __debugbreak();
    JUMPOUT(0x18012E4ACLL);
  }
  return 0LL;
}
