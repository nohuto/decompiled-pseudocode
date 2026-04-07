/*
 * XREFs of ??$make_wnf_subscription_state@H@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBH@Z@wistd@@KPEAPEAU?$wnf_subscription_state@H@01@@Z @ 0x18004A8B4
 * Callers:
 *     ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ @ 0x18004A7B0 (-RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$wnf_subscription_state@H@details@wil@@QEAA@$$QEAV?$function@$$A6AXAEBH@Z@wistd@@@Z @ 0x18004A9B4 (--0-$wnf_subscription_state@H@details@wil@@QEAA@$$QEAV-$function@$$A6AXAEBH@Z@wistd@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfNotificationWaitForCompletion@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_WNF_USER_SUBSCRIPTION@@@Z @ 0x180053220 (-reset@-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1-RtlUnsubsc.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180099628 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::details::make_wnf_subscription_state<int>(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v6; // rax
  void (__fastcall ***v7)(_QWORD, __int64); // rbx
  __int64 v8; // r8
  int v9; // edi
  unsigned int v10; // edi
  __int64 v12; // rdx
  unsigned int v13; // [rsp+40h] [rbp-20h] BYREF
  void (__fastcall ***v14)(_QWORD, _QWORD); // [rsp+48h] [rbp-18h]
  __int64 v15; // [rsp+50h] [rbp-10h] BYREF
  char v16; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  int v18; // [rsp+80h] [rbp+20h] BYREF

  v18 = a3;
  v13 = 0;
  *a4 = 0LL;
  v6 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         136LL);
  if ( v6 )
    v7 = (void (__fastcall ***)(_QWORD, __int64))wil::details::wnf_subscription_state<int>::wnf_subscription_state<int>(
                                                   v6,
                                                   a2);
  else
    v7 = 0LL;
  if ( !v7 )
  {
    v10 = -2147024882;
    v12 = 921LL;
    goto LABEL_17;
  }
  v8 = v13;
  if ( v13 == -1 )
  {
    v18 = 0;
    v10 = NtQueryWnfStateData(&WNF_IMSN_TRANSPARENCYPOLICY, 0LL, 0LL, &v13, 0LL, &v18) | 0x10000000;
    if ( (int)(v10 + 0x80000000) < 0 || v10 == -805306333 )
    {
      v8 = v13;
      goto LABEL_5;
    }
    v12 = 928LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
      (const char *)v10);
    goto LABEL_9;
  }
LABEL_5:
  v15 = 0LL;
  v14 = v7 + 1;
  v16 = 1;
  v9 = RtlSubscribeWnfStateChangeNotification(
         &v15,
         WNF_IMSN_TRANSPARENCYPOLICY,
         v8,
         lambda_6fe7f41459601891023985285f8158ba_::_lambda_invoker_cdecl_);
  if ( v16 )
    wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfNotificationWaitForCompletion(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>::reset(
      v14,
      v15);
  if ( v9 < 0 )
  {
    v10 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x3AF,
            (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
            (const char *)(unsigned int)v9,
            (int)v7);
  }
  else
  {
    v10 = 0;
    *a4 = v7;
    v7 = 0LL;
  }
LABEL_9:
  if ( v7 )
    (**v7)(v7, 1LL);
  return v10;
}
