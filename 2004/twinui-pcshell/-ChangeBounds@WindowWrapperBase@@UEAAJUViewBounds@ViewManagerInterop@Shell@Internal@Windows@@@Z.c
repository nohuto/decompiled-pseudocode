/*
 * XREFs of ?ChangeBounds@WindowWrapperBase@@UEAAJUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18007C250
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_e77970cd92140e07acf370381d6037d8___ @ 0x18007C2A0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_e77970cd92140e07acf370381d6037d8.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowWrapperBase::ChangeBounds(__int64 a1, __int64 a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx
  int v4; // eax
  int v6[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)v6 = a2;
  v7 = a1 - 8;
  CurrentThreadId = GetCurrentThreadId();
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_e77970cd92140e07acf370381d6037d8___(
         v3,
         CurrentThreadId,
         v6);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x288,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v4,
      v6[0]);
    __debugbreak();
    JUMPOUT(0x1801313D8LL);
  }
  return 0LL;
}
