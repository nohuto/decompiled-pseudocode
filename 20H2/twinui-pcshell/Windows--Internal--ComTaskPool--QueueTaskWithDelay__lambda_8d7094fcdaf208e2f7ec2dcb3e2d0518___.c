/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518___ @ 0x1800B05A8
 * Callers:
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18034EEE0 (-PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518___::CTaskWrapper__lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518_____lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518___ @ 0x1800AFE78 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v8; // edi

  v5 = operator new(0x158uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = 0LL;
  if ( v5 )
    v6 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518___::CTaskWrapper__lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518_____lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518___(
           v5,
           a4);
  CurrentThreadId = GetCurrentThreadId();
  v8 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  return v8;
}
