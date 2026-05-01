/*
 * XREFs of ?TryBack@WindowWrapperBase@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewHandledEventArgs@2345@@Foundation@Windows@@@Z @ 0x1802BE880
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_c6f694cbf3c8d4c563df23ba944a9a35___ @ 0x1802BB6E4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_c6f694cbf3c8d4c563df23ba944a9a35.c)
 */

__int64 __fastcall WindowWrapperBase::TryBack(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  const char *v3; // r9
  __int64 result; // rax
  DWORD CurrentThreadId; // eax
  unsigned int v6; // ecx
  int v7; // eax
  int v8[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v2 = a1 - 8;
  try
  {
    if ( (*(unsigned __int8 (**)(void))(*(_QWORD *)(a1 - 8) + 120LL))() )
    {
      *(_QWORD *)v8 = &v10;
      *(_QWORD *)&v8[2] = v2;
      CurrentThreadId = GetCurrentThreadId();
      v7 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_c6f694cbf3c8d4c563df23ba944a9a35___(
             v6,
             CurrentThreadId,
             (__int128 *)v8);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          960LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v7);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x382,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x80004001LL);
      result = 2147500033LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3C4,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v3);
  }
  return result;
}
