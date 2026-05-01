/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_4750d18d7a662ed65e9d2f2e69490731___ @ 0x180092184
 * Callers:
 *     _lambda_b23abe9d39d62f1b1f2aa55395b19976_::operator() @ 0x180092A84 (_lambda_b23abe9d39d62f1b1f2aa55395b19976_--operator().c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4750d18d7a662ed65e9d2f2e69490731___::CTaskWrapper__lambda_4750d18d7a662ed65e9d2f2e69490731_____lambda_4750d18d7a662ed65e9d2f2e69490731___ @ 0x180091BBC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4750d18d7a662ed65e9d2f2e69490731___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_4750d18d7a662ed65e9d2f2e69490731___(
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
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4750d18d7a662ed65e9d2f2e69490731___::CTaskWrapper__lambda_4750d18d7a662ed65e9d2f2e69490731_____lambda_4750d18d7a662ed65e9d2f2e69490731___(
           v6,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
