/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_0b319f3d3637979846fb79d489373d85___ @ 0x180432154
 * Callers:
 *     ??$_QueueNotification2@UIVirtualDesktopNotification2@@PEAUIVirtualDesktop@@PEAUHSTRING__@@$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@56@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification2@@EAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@23@@std@@@Z @ 0x1804325C0 (--$_QueueNotification2@UIVirtualDesktopNotification2@@PEAUIVirtualDesktop@@PEAUHSTRING__@@$$ZV-$.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0b319f3d3637979846fb79d489373d85___::CTaskWrapper__lambda_0b319f3d3637979846fb79d489373d85_____lambda_0b319f3d3637979846fb79d489373d85___ @ 0x180431AEC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0b319f3d3637979846fb79d489373d85___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_0b319f3d3637979846fb79d489373d85___(
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
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0b319f3d3637979846fb79d489373d85___::CTaskWrapper__lambda_0b319f3d3637979846fb79d489373d85_____lambda_0b319f3d3637979846fb79d489373d85___(
           v6,
           a4);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
