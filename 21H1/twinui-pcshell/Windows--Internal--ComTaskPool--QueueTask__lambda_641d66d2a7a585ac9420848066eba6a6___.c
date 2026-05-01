/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_641d66d2a7a585ac9420848066eba6a6___ @ 0x180092214
 * Callers:
 *     CIAMGlobals::QueueViewManagementTask__lambda_745aa0a15c871b15a946ed0c85a37995___ @ 0x18009235C (CIAMGlobals--QueueViewManagementTask__lambda_745aa0a15c871b15a946ed0c85a37995___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_641d66d2a7a585ac9420848066eba6a6___::CTaskWrapper__lambda_641d66d2a7a585ac9420848066eba6a6_____lambda_641d66d2a7a585ac9420848066eba6a6___ @ 0x180091C20 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_641d66d2a7a585ac9420848066eba6a6___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_641d66d2a7a585ac9420848066eba6a6___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_641d66d2a7a585ac9420848066eba6a6___::CTaskWrapper__lambda_641d66d2a7a585ac9420848066eba6a6_____lambda_641d66d2a7a585ac9420848066eba6a6___(
           v6,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
