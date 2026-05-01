/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_8854e4c6842e5c4dfa1636bd04ad1212___ @ 0x1801444D4
 * Callers:
 *     CIAMGlobals::QueueViewManagementTask__lambda_f0242e377eca6be80837de18adbd4ab0___ @ 0x1801447C0 (CIAMGlobals--QueueViewManagementTask__lambda_f0242e377eca6be80837de18adbd4ab0___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8854e4c6842e5c4dfa1636bd04ad1212___::CTaskWrapper__lambda_8854e4c6842e5c4dfa1636bd04ad1212_____lambda_8854e4c6842e5c4dfa1636bd04ad1212___ @ 0x1801427F8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8854e4c6842e5c4dfa1636bd04ad1212___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_8854e4c6842e5c4dfa1636bd04ad1212___(
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
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8854e4c6842e5c4dfa1636bd04ad1212___::CTaskWrapper__lambda_8854e4c6842e5c4dfa1636bd04ad1212_____lambda_8854e4c6842e5c4dfa1636bd04ad1212___(
           v6,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
