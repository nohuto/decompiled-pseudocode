/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_04782cd470235717f7963c3576bcb0e4___ @ 0x18038D340
 * Callers:
 *     ??$CallControllerAsync@UIDismissAnimationController@@$$V@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UIDismissAnimationController@@@WRL@Microsoft@@P8IDismissAnimationController@@EAAXXZ@Z @ 0x18038D244 (--$CallControllerAsync@UIDismissAnimationController@@$$V@AsyncControllerHelpers@@YAXAEAV-$ComPtr.c)
 *     ?SwitchItemDragEnded@CAsyncSwitchItemController@@UEAAXXZ @ 0x1803AD990 (-SwitchItemDragEnded@CAsyncSwitchItemController@@UEAAXXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800579E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_04782cd470235717f7963c3576bcb0e4_____lambda_04782cd470235717f7963c3576bcb0e4___ @ 0x18038D2B0 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_04782cd470235.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_04782cd470235717f7963c3576bcb0e4___(
        unsigned int a1,
        _QWORD *a2)
{
  __int64 *v3; // rax
  volatile int *v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v8; // edi
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v3 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_04782cd470235717f7963c3576bcb0e4_____lambda_04782cd470235717f7963c3576bcb0e4___(
         &v10,
         a2);
  v5 = *v3;
  *v3 = 0LL;
  v6 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v6,
      v4);
  }
  CurrentThreadId = GetCurrentThreadId();
  v8 = SHTaskPoolQueueTask(a1, 0LL, CurrentThreadId);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v8;
}
