/*
 * XREFs of ?RuntimeClassInitialize@?$EventInvocationContext@$00@details@wil@@QEAAJXZ @ 0x180242BE4
 * Callers:
 *     ??$MakeAndInitialize@V?$EventInvocationContext@$00@details@wil@@UIEventInvocationContext@23@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIEventInvocationContext@details@wil@@@Z @ 0x18023D0D0 (--$MakeAndInitialize@V-$EventInvocationContext@$00@details@wil@@UIEventInvocationContext@23@$$V@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B538 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$01@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WORK@@@Z @ 0x180246D78 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 */

__int64 __fastcall wil::details::EventInvocationContext<1>::RuntimeClassInitialize(_QWORD *pv)
{
  _QWORD *v1; // rdi
  __int64 v3; // rbp
  DWORD LastError; // ebx
  int v5; // eax
  unsigned int v6; // ebx
  PTP_WORK ThreadpoolWork; // rax
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = pv + 9;
  v3 = pv[9];
  if ( v3 )
  {
    LastError = GetLastError();
    CoDecrementMTAUsage(v3);
    SetLastError(LastError);
  }
  *v1 = 0LL;
  v5 = CoIncrementMTAUsage(v1);
  v6 = v5;
  if ( v5 >= 0 )
  {
    ThreadpoolWork = CreateThreadpoolWork(
                       (PTP_WORK_CALLBACK)wil::details::EventInvocationContext<1>::AsyncEventWorkCallback,
                       pv,
                       0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<2>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>::reset(
      pv + 10,
      ThreadpoolWork);
    if ( pv[10] )
      return 0LL;
    else
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x1B6,
               (__int64)"onecore\\internal\\sdk\\inc\\wil\\WrlEvent.h",
               v9);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B4,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\WrlEvent.h",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
