/*
 * XREFs of ?SetFocusState@WindowWrapperBase@@UEAAXW4FocusState@@@Z @ 0x1800733E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_218d2bf51dd35665d9ca3455cad3f3f5___ @ 0x180073448 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_218d2bf51dd35665d9ca3455cad3f3f5.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::SetFocusState(__int64 a1, int a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  int v5; // eax
  int v6[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 272) + 216LL))(*(_QWORD *)(a1 + 272));
  *(_QWORD *)v6 = &v9;
  v7 = a1 - 16;
  CurrentThreadId = GetCurrentThreadId();
  v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_218d2bf51dd35665d9ca3455cad3f3f5___(
         v4,
         CurrentThreadId,
         v6);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7EF,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v5);
}
