/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_e446c7c5fc519c205d2c977b283b134b___ @ 0x1800A07A0
 * Callers:
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x18032CB0C (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e446c7c5fc519c205d2c977b283b134b___::CTaskWrapper__lambda_e446c7c5fc519c205d2c977b283b134b_____lambda_e446c7c5fc519c205d2c977b283b134b___ @ 0x1800A01E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e446c7c5fc519c205d2c977b283b134b___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_e446c7c5fc519c205d2c977b283b134b___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x170uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e446c7c5fc519c205d2c977b283b134b___::CTaskWrapper__lambda_e446c7c5fc519c205d2c977b283b134b_____lambda_e446c7c5fc519c205d2c977b283b134b___(
           (__int64)v6,
           a4);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
