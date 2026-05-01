/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_4cbe742715b394437ec6208d218cee82___ @ 0x1800B01A0
 * Callers:
 *     ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18034CE50 (-OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4cbe742715b394437ec6208d218cee82___::CTaskWrapper__lambda_4cbe742715b394437ec6208d218cee82_____lambda_4cbe742715b394437ec6208d218cee82___ @ 0x1800AFD10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4cbe742715b394437ec6208d218cee82___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_4cbe742715b394437ec6208d218cee82___(
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
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4cbe742715b394437ec6208d218cee82___::CTaskWrapper__lambda_4cbe742715b394437ec6208d218cee82_____lambda_4cbe742715b394437ec6208d218cee82___(
           v6,
           a4);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
