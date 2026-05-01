/*
 * XREFs of ??$QueueTask@V_lambda_4c0281b189a4f50ab192cc99e41387bc_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_4c0281b189a4f50ab192cc99e41387bc_@@@Z @ 0x1803140AC
 * Callers:
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x180314C00 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$?0V_lambda_4c0281b189a4f50ab192cc99e41387bc_@@@?$CTaskWrapper@V_lambda_4c0281b189a4f50ab192cc99e41387bc_@@@ComTaskPool@Internal@Windows@@QEAA@$$QEAV_lambda_4c0281b189a4f50ab192cc99e41387bc_@@@Z @ 0x180313D64 (--$-0V_lambda_4c0281b189a4f50ab192cc99e41387bc_@@@-$CTaskWrapper@V_lambda_4c0281b189a4f50ab192cc.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask<_lambda_4c0281b189a4f50ab192cc99e41387bc_>(
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
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_4c0281b189a4f50ab192cc99e41387bc_>::CTaskWrapper<_lambda_4c0281b189a4f50ab192cc99e41387bc_>(
           v3,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v6;
}
