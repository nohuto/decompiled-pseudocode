/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_119a9763b6a8c971f47739bbe9fd0d71___ @ 0x180187D78
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_db6d4cb92203a874116970825d9bc39e___ @ 0x180188F10 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_db6d4cb92203a874116970825d9bc39e___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_119a9763b6a8c971f47739bbe9fd0d71___::CTaskWrapper__lambda_119a9763b6a8c971f47739bbe9fd0d71_____lambda_119a9763b6a8c971f47739bbe9fd0d71___ @ 0x18018748C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_119a9763b6a8c971f47739bbe9fd0d71___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_119a9763b6a8c971f47739bbe9fd0d71___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_119a9763b6a8c971f47739bbe9fd0d71___::CTaskWrapper__lambda_119a9763b6a8c971f47739bbe9fd0d71_____lambda_119a9763b6a8c971f47739bbe9fd0d71___(
           (__int64)v6,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
