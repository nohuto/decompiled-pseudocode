/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_5f960233b161913a1e7fccd27b0605a8___ @ 0x180179078
 * Callers:
 *     ?_QueuePresentationChangeNotification@CImmersiveApp@@AEAAXW4IMMERSIVE_APPLICATION_PRESENTATION_CHANGE@@@Z @ 0x180080384 (-_QueuePresentationChangeNotification@CImmersiveApp@@AEAAXW4IMMERSIVE_APPLICATION_PRESENTATION_C.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f960233b161913a1e7fccd27b0605a8___::CTaskWrapper__lambda_5f960233b161913a1e7fccd27b0605a8_____lambda_5f960233b161913a1e7fccd27b0605a8___ @ 0x180177FD0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5f960233b161913a1e7fccd27b0605a8___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_5f960233b161913a1e7fccd27b0605a8___(
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
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f960233b161913a1e7fccd27b0605a8___::CTaskWrapper__lambda_5f960233b161913a1e7fccd27b0605a8_____lambda_5f960233b161913a1e7fccd27b0605a8___(
           (__int64)v6,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
