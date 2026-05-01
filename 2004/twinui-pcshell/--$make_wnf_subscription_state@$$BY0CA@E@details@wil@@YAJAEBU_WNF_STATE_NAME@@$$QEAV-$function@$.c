/*
 * XREFs of ??$make_wnf_subscription_state@$$BY0CA@E@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEAY0CA@$$CBE@Z@wistd@@KPEAPEAU?$wnf_subscription_state@$$BY0CA@E@01@@Z @ 0x1800AE9DC
 * Callers:
 *     ??$make_wnf_subscription@$$BY0CA@E@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEAY0CA@$$CBE@Z@wistd@@K@Z @ 0x1800AE988 (--$make_wnf_subscription@$$BY0CA@E@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$wnf_subscription_state@$$BY0CA@E@details@wil@@QEAA@$$QEAV?$function@$$A6AXAEAY0CA@$$CBE@Z@wistd@@@Z @ 0x1800AED54 (--0-$wnf_subscription_state@$$BY0CA@E@details@wil@@QEAA@$$QEAV-$function@$$A6AXAEAY0CA@$$CBE@Z@w.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfNotificationWaitForCompletion@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18013FFD0 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801415C4 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::details::make_wnf_subscription_state<unsigned char [32]>(
        __int64 *a1,
        __int64 a2,
        int a3,
        _QWORD *a4)
{
  void *v7; // rax
  void (__fastcall ***v8)(_QWORD, __int64); // rbx
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // edi
  unsigned int v15; // [rsp+40h] [rbp-28h] BYREF
  void (__fastcall ***v16)(_QWORD, _QWORD); // [rsp+48h] [rbp-20h] BYREF
  __int64 v17; // [rsp+50h] [rbp-18h] BYREF
  char v18; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v20; // [rsp+80h] [rbp+18h] BYREF

  v20 = a3;
  v15 = 0;
  *a4 = 0LL;
  v7 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v8 = (void (__fastcall ***)(_QWORD, __int64))wil::details::wnf_subscription_state<unsigned char [32]>::wnf_subscription_state<unsigned char [32]>(
                                                   v7,
                                                   a2);
  else
    v8 = 0LL;
  if ( !v8 )
  {
    v9 = -2147024882;
    v10 = 921LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)v9);
    goto LABEL_15;
  }
  v11 = v15;
  if ( v15 == -1 )
  {
    v20 = 0;
    v9 = NtQueryWnfStateData(a1, 0LL, 0LL, &v15, 0LL, &v20) | 0x10000000;
    if ( (int)(v9 + 0x80000000) >= 0 && v9 != -805306333 )
    {
      v10 = 928LL;
      goto LABEL_10;
    }
    v11 = v15;
  }
  v12 = *a1;
  v17 = 0LL;
  v16 = v8 + 1;
  v18 = 1;
  v13 = RtlSubscribeWnfStateChangeNotification(
          &v17,
          v12,
          v11,
          lambda_024856d2eaa26e7e4864a7fffc39e281_::_lambda_invoker_cdecl_);
  wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfNotificationWaitForCompletion(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfNotificationWaitForCompletion(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>>>(&v16);
  if ( v13 >= 0 )
  {
    v9 = 0;
    *a4 = v8;
    v8 = 0LL;
  }
  else
  {
    v9 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x3AF,
           (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
           (const char *)(unsigned int)v13,
           (int)v8);
  }
LABEL_15:
  if ( v8 )
    (**v8)(v8, 1LL);
  return v9;
}
