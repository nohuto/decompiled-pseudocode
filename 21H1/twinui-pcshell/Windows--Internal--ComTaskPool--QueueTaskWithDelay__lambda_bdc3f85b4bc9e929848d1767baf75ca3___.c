/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_bdc3f85b4bc9e929848d1767baf75ca3___ @ 0x180273EC8
 * Callers:
 *     ?ApplyTemplateToAllViews@ViewGroup@@UEAAJPEAUIApplicationView@@@Z @ 0x180274DE0 (-ApplyTemplateToAllViews@ViewGroup@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800623A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bdc3f85b4bc9e929848d1767baf75ca3_____lambda_bdc3f85b4bc9e929848d1767baf75ca3___ @ 0x180273C6C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_bdc3f85b4bc9e.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_bdc3f85b4bc9e929848d1767baf75ca3___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 *v4; // rax
  volatile int *v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v9; // edi
  __int64 v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bdc3f85b4bc9e929848d1767baf75ca3_____lambda_bdc3f85b4bc9e929848d1767baf75ca3___(
         v11,
         a4);
  v6 = *v4;
  *v4 = 0LL;
  v7 = v11[0];
  if ( v11[0] )
  {
    v11[0] = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v7,
      v5);
  }
  CurrentThreadId = GetCurrentThreadId();
  v9 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v9;
}
