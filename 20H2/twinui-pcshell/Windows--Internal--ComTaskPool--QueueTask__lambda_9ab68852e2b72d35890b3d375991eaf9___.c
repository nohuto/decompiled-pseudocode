/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_9ab68852e2b72d35890b3d375991eaf9___ @ 0x1800B034C
 * Callers:
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x18034D000 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9ab68852e2b72d35890b3d375991eaf9___::CTaskWrapper__lambda_9ab68852e2b72d35890b3d375991eaf9_____lambda_9ab68852e2b72d35890b3d375991eaf9___ @ 0x1800AFEF0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9ab68852e2b72d35890b3d375991eaf9___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_9ab68852e2b72d35890b3d375991eaf9___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9ab68852e2b72d35890b3d375991eaf9___::CTaskWrapper__lambda_9ab68852e2b72d35890b3d375991eaf9_____lambda_9ab68852e2b72d35890b3d375991eaf9___(
           v6,
           a4);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
