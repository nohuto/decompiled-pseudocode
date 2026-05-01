/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_7701e7176002895e9cf0bc610689a4a2___ @ 0x1800B02C0
 * Callers:
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180348674 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7701e7176002895e9cf0bc610689a4a2___::CTaskWrapper__lambda_7701e7176002895e9cf0bc610689a4a2_____lambda_7701e7176002895e9cf0bc610689a4a2___ @ 0x1800AFE14 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7701e7176002895e9cf0bc610689a4a2___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_7701e7176002895e9cf0bc610689a4a2___(
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
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7701e7176002895e9cf0bc610689a4a2___::CTaskWrapper__lambda_7701e7176002895e9cf0bc610689a4a2_____lambda_7701e7176002895e9cf0bc610689a4a2___(
           (__int64)v3,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(0LL, 0LL, CurrentThreadId);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
