/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_27b09a4b46f96ab93197e8da1c0bc3e3___ @ 0x18013E104
 * Callers:
 *     ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x18013F670 (-RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_27b09a4b46f96ab93197e8da1c0bc3e3___::CTaskWrapper__lambda_27b09a4b46f96ab93197e8da1c0bc3e3_____lambda_27b09a4b46f96ab93197e8da1c0bc3e3___ @ 0x18013DBA0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_27b09a4b46f96ab93197e8da1c0bc3e3___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_27b09a4b46f96ab93197e8da1c0bc3e3___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_27b09a4b46f96ab93197e8da1c0bc3e3___::CTaskWrapper__lambda_27b09a4b46f96ab93197e8da1c0bc3e3_____lambda_27b09a4b46f96ab93197e8da1c0bc3e3___(
           (__int64)v6,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
