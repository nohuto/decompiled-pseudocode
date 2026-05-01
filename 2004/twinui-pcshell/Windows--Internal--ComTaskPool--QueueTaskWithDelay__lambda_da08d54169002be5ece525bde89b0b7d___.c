/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_da08d54169002be5ece525bde89b0b7d___ @ 0x1800AE84C
 * Callers:
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18034F940 (-PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_da08d54169002be5ece525bde89b0b7d___::CTaskWrapper__lambda_da08d54169002be5ece525bde89b0b7d_____lambda_da08d54169002be5ece525bde89b0b7d___ @ 0x1800AE010 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_da08d54169002be5ece525bde89b0b7d___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_da08d54169002be5ece525bde89b0b7d___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v8; // edi

  v5 = operator new(0x158uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = 0LL;
  if ( v5 )
    v6 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_da08d54169002be5ece525bde89b0b7d___::CTaskWrapper__lambda_da08d54169002be5ece525bde89b0b7d_____lambda_da08d54169002be5ece525bde89b0b7d___(
           v5,
           a4);
  CurrentThreadId = GetCurrentThreadId();
  v8 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  return v8;
}
