/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_172a7185b1276b4a19f8c519689fb59f___ @ 0x180098068
 * Callers:
 *     ?ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z @ 0x1801F1E30 (-ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_172a7185b1276b4a19f8c519689fb59f___::CTaskWrapper__lambda_172a7185b1276b4a19f8c519689fb59f_____lambda_172a7185b1276b4a19f8c519689fb59f___ @ 0x180097D54 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_172a7185b1276b4a19f8c519689fb59f___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_172a7185b1276b4a19f8c519689fb59f___(
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
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_172a7185b1276b4a19f8c519689fb59f___::CTaskWrapper__lambda_172a7185b1276b4a19f8c519689fb59f_____lambda_172a7185b1276b4a19f8c519689fb59f___(
           (__int64)v3,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(0LL, 0LL, CurrentThreadId);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
