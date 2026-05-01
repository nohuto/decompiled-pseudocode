/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_b0726e8044fd13968fa83f7fa075fb7d___ @ 0x1801A428C
 * Callers:
 *     ?UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801A7F90 (-UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b0726e8044fd13968fa83f7fa075fb7d___::CTaskWrapper__lambda_b0726e8044fd13968fa83f7fa075fb7d_____lambda_b0726e8044fd13968fa83f7fa075fb7d___ @ 0x1801A394C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b0726e8044fd13968fa83f7fa075fb7d___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_b0726e8044fd13968fa83f7fa075fb7d___(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = 0LL;
  if ( v3 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b0726e8044fd13968fa83f7fa075fb7d___::CTaskWrapper__lambda_b0726e8044fd13968fa83f7fa075fb7d_____lambda_b0726e8044fd13968fa83f7fa075fb7d___(
           v3,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v6;
}
