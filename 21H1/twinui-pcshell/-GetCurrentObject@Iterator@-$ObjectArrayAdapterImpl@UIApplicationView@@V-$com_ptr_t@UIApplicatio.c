/*
 * XREFs of ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@details@@AEAAXXZ @ 0x1802256E8
 * Callers:
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@details@@QEAA@QEAV12@I@Z @ 0x180225314 (--0Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$com_ptr_t@UIApplicationView@@Uerr_ret.c)
 *     ?GetLastActiveItem@HolographicViewHostItemLedger@@UEAAJPEAPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1802257A0 (-GetLastActiveItem@HolographicViewHostItemLedger@@UEAAJPEAPEAUIViewHostItem@Holographic@Shell@In.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008887C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::Iterator::GetCurrentObject(
        unsigned int *a1)
{
  __int64 *v1; // rbp
  unsigned int *v3; // rcx
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, GUID *, __int64 *); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (__int64 *)(a1 + 2);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)a1 + 1);
  v3 = (unsigned int *)*((_QWORD *)a1 + 2);
  result = v3[2];
  if ( *a1 < (unsigned int)result )
  {
    do
    {
      v5 = *(_QWORD *)v3;
      v6 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(**(_QWORD **)v3 + 32LL);
      wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(v1);
      result = v6(v5, *a1, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v1);
      if ( (int)result >= 0 )
        break;
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x35,
        (__int64)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
        (const char *)(unsigned int)result);
      ++*a1;
      v3 = (unsigned int *)*((_QWORD *)a1 + 2);
      result = *a1;
    }
    while ( (unsigned int)result < v3[2] );
  }
  return result;
}
