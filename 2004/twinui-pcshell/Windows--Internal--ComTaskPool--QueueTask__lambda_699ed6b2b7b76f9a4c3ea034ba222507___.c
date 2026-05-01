/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_699ed6b2b7b76f9a4c3ea034ba222507___ @ 0x18039CDE4
 * Callers:
 *     ?_OnItemInvoked@CSnapAssistViewController@@AEAAJPEAUIApplicationView@@@Z @ 0x18039D520 (-_OnItemInvoked@CSnapAssistViewController@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_699ed6b2b7b76f9a4c3ea034ba222507___::CTaskWrapper__lambda_699ed6b2b7b76f9a4c3ea034ba222507_____lambda_699ed6b2b7b76f9a4c3ea034ba222507___ @ 0x18039CCAC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_699ed6b2b7b76f9a4c3ea034ba222507___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_699ed6b2b7b76f9a4c3ea034ba222507___(
        __int64 a1,
        _OWORD *a2)
{
  void *v3; // rax
  __int64 v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = 0LL;
  if ( v3 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_699ed6b2b7b76f9a4c3ea034ba222507___::CTaskWrapper__lambda_699ed6b2b7b76f9a4c3ea034ba222507_____lambda_699ed6b2b7b76f9a4c3ea034ba222507___(
           (__int64)v3,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(1LL, 0LL, CurrentThreadId);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
