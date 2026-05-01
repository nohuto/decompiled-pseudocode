/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_4072c03f0563dda202850bcb805fe733___ @ 0x1800A0444
 * Callers:
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180327584 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4072c03f0563dda202850bcb805fe733___::CTaskWrapper__lambda_4072c03f0563dda202850bcb805fe733_____lambda_4072c03f0563dda202850bcb805fe733___ @ 0x18009FE30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4072c03f0563dda202850bcb805fe733___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_4072c03f0563dda202850bcb805fe733___(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rax
  __int64 v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = 0LL;
  if ( v3 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4072c03f0563dda202850bcb805fe733___::CTaskWrapper__lambda_4072c03f0563dda202850bcb805fe733_____lambda_4072c03f0563dda202850bcb805fe733___(
           (__int64)v3,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(0LL, 0LL, CurrentThreadId);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
