/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_d32b7c0134447f57ac627a2568f6b820___ @ 0x1800A9408
 * Callers:
 *     ?UpdateAppView@Win32AppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@_N@Z @ 0x180439F70 (-UpdateAppView@Win32AppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafe.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d32b7c0134447f57ac627a2568f6b820___::CTaskWrapper__lambda_d32b7c0134447f57ac627a2568f6b820_____lambda_d32b7c0134447f57ac627a2568f6b820___ @ 0x1800A92F8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d32b7c0134447f57ac627a2568f6b820___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_d32b7c0134447f57ac627a2568f6b820___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d32b7c0134447f57ac627a2568f6b820___::CTaskWrapper__lambda_d32b7c0134447f57ac627a2568f6b820_____lambda_d32b7c0134447f57ac627a2568f6b820___(
           (__int64)v6,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
