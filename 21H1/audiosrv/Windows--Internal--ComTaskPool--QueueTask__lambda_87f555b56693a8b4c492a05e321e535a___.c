/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_87f555b56693a8b4c492a05e321e535a___ @ 0x180073180
 * Callers:
 *     ?OnDeviceStateChanged@AtmosCheck@@UEAAJPEBGK@Z @ 0x1801371F0 (-OnDeviceStateChanged@AtmosCheck@@UEAAJPEBGK@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AB9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_87f555b56693a8b4c492a05e321e535a___::CTaskWrapper__lambda_87f555b56693a8b4c492a05e321e535a_____lambda_87f555b56693a8b4c492a05e321e535a___ @ 0x180072F14 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_87f555b56693a8b4c492a05e321e535a___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_87f555b56693a8b4c492a05e321e535a___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_87f555b56693a8b4c492a05e321e535a___::CTaskWrapper__lambda_87f555b56693a8b4c492a05e321e535a_____lambda_87f555b56693a8b4c492a05e321e535a___(
           v6,
           a4);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
