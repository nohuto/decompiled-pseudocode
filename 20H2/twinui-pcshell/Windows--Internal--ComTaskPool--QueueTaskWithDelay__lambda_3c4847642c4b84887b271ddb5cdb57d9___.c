/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_3c4847642c4b84887b271ddb5cdb57d9___ @ 0x18029E8A4
 * Callers:
 *     ?ActivationCompleted@ViewEventDispatcher@@QEAAX_K@Z @ 0x1802A16FC (-ActivationCompleted@ViewEventDispatcher@@QEAAX_K@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c4847642c4b84887b271ddb5cdb57d9___::CTaskWrapper__lambda_3c4847642c4b84887b271ddb5cdb57d9_____lambda_3c4847642c4b84887b271ddb5cdb57d9___ @ 0x18029D398 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3c4847642c4b84887b271ddb5cdb57d9___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_3c4847642c4b84887b271ddb5cdb57d9___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        _QWORD *a6)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  unsigned int v9; // edi

  v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = 0LL;
  if ( v7 )
    v8 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c4847642c4b84887b271ddb5cdb57d9___::CTaskWrapper__lambda_3c4847642c4b84887b271ddb5cdb57d9_____lambda_3c4847642c4b84887b271ddb5cdb57d9___(
           v7,
           a6);
  v9 = SHTaskPoolQueueTask(3LL, 0LL, a3);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
  return v9;
}
