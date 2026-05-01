/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_f30574fd153fefe3a19e136921a472ba___ @ 0x1800B046C
 * Callers:
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x18034DB3C (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f30574fd153fefe3a19e136921a472ba___::CTaskWrapper__lambda_f30574fd153fefe3a19e136921a472ba_____lambda_f30574fd153fefe3a19e136921a472ba___ @ 0x1800AFFF8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f30574fd153fefe3a19e136921a472ba___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_f30574fd153fefe3a19e136921a472ba___(
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
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f30574fd153fefe3a19e136921a472ba___::CTaskWrapper__lambda_f30574fd153fefe3a19e136921a472ba_____lambda_f30574fd153fefe3a19e136921a472ba___(
           (__int64)v6,
           a4);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
