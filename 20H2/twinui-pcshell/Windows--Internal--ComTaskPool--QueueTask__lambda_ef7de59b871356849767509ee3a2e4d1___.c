/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_ef7de59b871356849767509ee3a2e4d1___ @ 0x1803AC518
 * Callers:
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_c70d466e53705bebc116464583ec8f40___ @ 0x1803AC7D4 (AsyncFrameEvents--_NotifyFrameEvent__lambda_c70d466e53705bebc116464583ec8f40___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ef7de59b871356849767509ee3a2e4d1___::CTaskWrapper__lambda_ef7de59b871356849767509ee3a2e4d1_____lambda_ef7de59b871356849767509ee3a2e4d1___ @ 0x1803AC254 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ef7de59b871356849767509ee3a2e4d1___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_ef7de59b871356849767509ee3a2e4d1___(
        unsigned int a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v7; // edi

  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = 0LL;
  if ( v4 )
    v5 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ef7de59b871356849767509ee3a2e4d1___::CTaskWrapper__lambda_ef7de59b871356849767509ee3a2e4d1_____lambda_ef7de59b871356849767509ee3a2e4d1___(
           v4,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v7 = SHTaskPoolQueueTask(a1, 0LL, CurrentThreadId);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  return v7;
}
