/*
 * XREFs of ?DestroyTabProxyWindowInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUITabProxyWindowInternal@345@@Z @ 0x1800BD760
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_fcbb9479051b723b4fda3c8d325a8246___ @ 0x1800BD0D8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_fcbb9479051b723b4fda3c8d325a8246.c)
 *     ?handle_wait@wil@@YA_NPEAXK@Z @ 0x180200770 (-handle_wait@wil@@YA_NPEAXK@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::DestroyTabProxyWindowInternal(
        wil **this,
        struct Windows::Internal::Shell::ITabProxyWindowInternal *a2,
        unsigned int a3)
{
  wil *v4; // rax
  DWORD CurrentThreadId; // eax
  unsigned int v6; // ecx
  int v7; // eax
  unsigned int v8; // ebx
  int v10[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::Internal::Shell::ITabProxyWindowInternal **v12; // [rsp+40h] [rbp+8h] BYREF
  struct Windows::Internal::Shell::ITabProxyWindowInternal *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  wil::handle_wait(this[4], (void *)0xFFFFFFFFLL, a3);
  v4 = this[6];
  v12 = &v13;
  *(_QWORD *)v10 = v4;
  *(_QWORD *)&v10[2] = &v12;
  CurrentThreadId = GetCurrentThreadId();
  v7 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_fcbb9479051b723b4fda3c8d325a8246___(
         v6,
         CurrentThreadId,
         (__int128 *)v10);
  v8 = v7;
  if ( v7 >= 0 )
    return 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5F,
      (__int64)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
      (const char *)(unsigned int)v7);
  return v8;
}
