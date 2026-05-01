/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_95a8ea034506ab1e4f4125e3936ae1b3___ @ 0x1800A0680
 * Callers:
 *     ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18032BDB0 (-OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_95a8ea034506ab1e4f4125e3936ae1b3___::CTaskWrapper__lambda_95a8ea034506ab1e4f4125e3936ae1b3_____lambda_95a8ea034506ab1e4f4125e3936ae1b3___ @ 0x1800A00B4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_95a8ea034506ab1e4f4125e3936ae1b3___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_95a8ea034506ab1e4f4125e3936ae1b3___(
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
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_95a8ea034506ab1e4f4125e3936ae1b3___::CTaskWrapper__lambda_95a8ea034506ab1e4f4125e3936ae1b3_____lambda_95a8ea034506ab1e4f4125e3936ae1b3___(
           v6,
           a4);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
