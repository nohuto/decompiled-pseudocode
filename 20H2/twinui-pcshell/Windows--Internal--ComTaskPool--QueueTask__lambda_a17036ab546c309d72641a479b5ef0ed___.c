/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_a17036ab546c309d72641a479b5ef0ed___ @ 0x1801DB6BC
 * Callers:
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x1801DC55C (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a17036ab546c309d72641a479b5ef0ed___::CTaskWrapper__lambda_a17036ab546c309d72641a479b5ef0ed_____lambda_a17036ab546c309d72641a479b5ef0ed___ @ 0x1801DA600 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a17036ab546c309d72641a479b5ef0ed___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_a17036ab546c309d72641a479b5ef0ed___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x158uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a17036ab546c309d72641a479b5ef0ed___::CTaskWrapper__lambda_a17036ab546c309d72641a479b5ef0ed_____lambda_a17036ab546c309d72641a479b5ef0ed___(
           (__int64)v6,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
