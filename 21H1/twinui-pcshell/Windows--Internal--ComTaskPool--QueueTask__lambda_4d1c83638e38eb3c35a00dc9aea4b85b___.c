/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_4d1c83638e38eb3c35a00dc9aea4b85b___ @ 0x1803AC350
 * Callers:
 *     ?FullScreenVisibilityChanged@CPerMonitorDesktopVisibilityService@@UEAAJH@Z @ 0x1803ACA70 (-FullScreenVisibilityChanged@CPerMonitorDesktopVisibilityService@@UEAAJH@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4d1c83638e38eb3c35a00dc9aea4b85b___::CTaskWrapper__lambda_4d1c83638e38eb3c35a00dc9aea4b85b_____lambda_4d1c83638e38eb3c35a00dc9aea4b85b___ @ 0x1803AC090 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4d1c83638e38eb3c35a00dc9aea4b85b___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_4d1c83638e38eb3c35a00dc9aea4b85b___(
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
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4d1c83638e38eb3c35a00dc9aea4b85b___::CTaskWrapper__lambda_4d1c83638e38eb3c35a00dc9aea4b85b_____lambda_4d1c83638e38eb3c35a00dc9aea4b85b___(
           (__int64)v6,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
