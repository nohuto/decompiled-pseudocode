/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_2a6490a8cf13452a213c8a59fbbd282a___ @ 0x1800A03B4
 * Callers:
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z @ 0x18032C9BC (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2a6490a8cf13452a213c8a59fbbd282a___::CTaskWrapper__lambda_2a6490a8cf13452a213c8a59fbbd282a_____lambda_2a6490a8cf13452a213c8a59fbbd282a___ @ 0x18009FDAC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2a6490a8cf13452a213c8a59fbbd282a___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_2a6490a8cf13452a213c8a59fbbd282a___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x160uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2a6490a8cf13452a213c8a59fbbd282a___::CTaskWrapper__lambda_2a6490a8cf13452a213c8a59fbbd282a_____lambda_2a6490a8cf13452a213c8a59fbbd282a___(
           (__int64)v6,
           a4);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
