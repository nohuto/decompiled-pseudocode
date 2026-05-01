/*
 * XREFs of ??$QueueTask@V_lambda_2982927e39568cdd3df99df702aa65a9_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_2982927e39568cdd3df99df702aa65a9_@@@Z @ 0x1802F8260
 * Callers:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x180300D20 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$?0V_lambda_2982927e39568cdd3df99df702aa65a9_@@@?$CTaskWrapper@V_lambda_2982927e39568cdd3df99df702aa65a9_@@@ComTaskPool@Internal@Windows@@QEAA@$$QEAV_lambda_2982927e39568cdd3df99df702aa65a9_@@@Z @ 0x1802F61D8 (--$-0V_lambda_2982927e39568cdd3df99df702aa65a9_@@@-$CTaskWrapper@V_lambda_2982927e39568cdd3df99d.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask<_lambda_2982927e39568cdd3df99df702aa65a9_>(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = 0LL;
  if ( v3 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_2982927e39568cdd3df99df702aa65a9_>::CTaskWrapper<_lambda_2982927e39568cdd3df99df702aa65a9_>(
           v3,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v6;
}
