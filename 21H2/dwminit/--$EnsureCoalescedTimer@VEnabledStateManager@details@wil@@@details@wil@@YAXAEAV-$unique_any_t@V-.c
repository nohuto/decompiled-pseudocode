/*
 * XREFs of ??$EnsureCoalescedTimer@VEnabledStateManager@details@wil@@@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@AEA_NPEAVEnabledStateManager@01@@Z @ 0x18000BD64
 * Callers:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18000B088 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 * Callees:
 *     ??$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z @ 0x180007FC0 (--$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z.c)
 */

void __fastcall wil::details::EnsureCoalescedTimer<wil::details::EnabledStateManager>(
        struct _FILETIME *a1,
        _BYTE *a2,
        void *a3)
{
  struct _TP_TIMER *v6; // rcx
  DWORD LastError; // ebp
  PTP_TIMER ThreadpoolTimer; // r14
  DWORD v9; // ebx
  struct _FILETIME pftDueTime; // [rsp+48h] [rbp+10h] BYREF
  void (__fastcall *v11)(PTP_TIMER); // [rsp+58h] [rbp+20h] BYREF

  if ( !*a2 )
  {
    v6 = (struct _TP_TIMER *)*a1;
    if ( v6 )
      goto LABEL_6;
    LastError = GetLastError();
    ThreadpoolTimer = CreateThreadpoolTimer(lambda_0374aa0a5d1201b2358c6bce99369c58_::_lambda_invoker_cdecl_, a3, 0LL);
    if ( *a1 )
    {
      pftDueTime = *a1;
      v9 = GetLastError();
      v11 = wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy;
      wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>((__int64 (__fastcall **)(_QWORD))&v11, &pftDueTime);
      SetLastError(v9);
    }
    *a1 = (struct _FILETIME)ThreadpoolTimer;
    SetLastError(LastError);
    v6 = (struct _TP_TIMER *)*a1;
    if ( *a1 )
    {
LABEL_6:
      pftDueTime = (struct _FILETIME)-3000000000LL;
      SetThreadpoolTimer(v6, &pftDueTime, 0, 0x124F8u);
      *a2 = 1;
    }
  }
}
