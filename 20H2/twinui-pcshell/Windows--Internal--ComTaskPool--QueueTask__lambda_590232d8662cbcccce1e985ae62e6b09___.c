/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_590232d8662cbcccce1e985ae62e6b09___ @ 0x1804321E4
 * Callers:
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAU2@$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V345@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@0@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V123@@std@@@Z @ 0x180432858 (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAU2@$$ZV-$ComPtr@UIV.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_590232d8662cbcccce1e985ae62e6b09___::CTaskWrapper__lambda_590232d8662cbcccce1e985ae62e6b09_____lambda_590232d8662cbcccce1e985ae62e6b09___ @ 0x180431B68 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_590232d8662cbcccce1e985ae62e6b09___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_590232d8662cbcccce1e985ae62e6b09___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_590232d8662cbcccce1e985ae62e6b09___::CTaskWrapper__lambda_590232d8662cbcccce1e985ae62e6b09_____lambda_590232d8662cbcccce1e985ae62e6b09___(
           v6,
           a4);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
