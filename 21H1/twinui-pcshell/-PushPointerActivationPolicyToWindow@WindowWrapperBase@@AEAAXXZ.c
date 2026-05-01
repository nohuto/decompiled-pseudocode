/*
 * XREFs of ?PushPointerActivationPolicyToWindow@WindowWrapperBase@@AEAAXXZ @ 0x18005D094
 * Callers:
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18005ABE8 (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 *     ?put_PointerActivationPolicy@WindowWrapperBase@@UEAAJW4PointerActivationPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802BFE00 (-put_PointerActivationPolicy@WindowWrapperBase@@UEAAJW4PointerActivationPolicy@ViewManagerIntero.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_cd118f93320a96821cef0c11a5fb91e6___ @ 0x18005D0F4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_cd118f93320a96821cef0c11a5fb91e6.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::PushPointerActivationPolicyToWindow(WindowWrapperBase *this)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx
  int v4; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WindowWrapperBase *v7; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 224LL))(*((_QWORD *)this + 36));
  if ( *((_DWORD *)this + 76) )
  {
    v7 = this;
    CurrentThreadId = GetCurrentThreadId();
    v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_cd118f93320a96821cef0c11a5fb91e6___(
           v3,
           CurrentThreadId,
           &v7);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xBF2,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v4,
        v5);
  }
}
