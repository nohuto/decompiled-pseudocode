/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_3c2570cc1d800aee28388d46c0371330___ @ 0x1800AE45C
 * Callers:
 *     ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18034D8B0 (-OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c2570cc1d800aee28388d46c0371330___::CTaskWrapper__lambda_3c2570cc1d800aee28388d46c0371330_____lambda_3c2570cc1d800aee28388d46c0371330___ @ 0x1800ADEE8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3c2570cc1d800aee28388d46c0371330___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_3c2570cc1d800aee28388d46c0371330___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x160uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c2570cc1d800aee28388d46c0371330___::CTaskWrapper__lambda_3c2570cc1d800aee28388d46c0371330_____lambda_3c2570cc1d800aee28388d46c0371330___(
           v6,
           a4);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
