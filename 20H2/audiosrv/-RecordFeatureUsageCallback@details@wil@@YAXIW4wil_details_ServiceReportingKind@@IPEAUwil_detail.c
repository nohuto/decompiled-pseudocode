/*
 * XREFs of ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180033DF0
 * Callers:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18006D19C (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 * Callees:
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180034220 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800345C8 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?WilApi_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x1800640C4 (-WilApi_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBS.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180068FA0 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     _invalid_parameter_noinfo @ 0x18006ACBE (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::RecordFeatureUsageCallback(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        char *a4,
        struct _FILETIME pftDueTime)
{
  _DWORD *v7; // rbx
  __int64 v8; // rcx
  _OWORD *v9; // r9
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  size_t v13; // r8
  __int64 v14; // rcx
  struct _TP_TIMER *v15; // rcx
  PTP_TIMER ThreadpoolTimer; // rax
  unsigned int v17; // r8d
  void *v18; // r9
  char *v19[2]; // [rsp+20h] [rbp-18h]

  if ( g_wil_details_RecordSRUMFeatureUsage && (!a2 || a2 - 100 <= 0x31) )
    g_wil_details_RecordSRUMFeatureUsage(a1, a2, 1u);
  v7 = (_DWORD *)pftDueTime;
  if ( *(_DWORD *)pftDueTime.dwLowDateTime
    && wil::details::g_enabledStateManager
    && !wil::details::g_processShutdownInProgress
    && (!wil::details::g_pfnDllShutdownInProgress || !wil::details::g_pfnDllShutdownInProgress()) )
  {
    AcquireSRWLockExclusive(&SRWLock);
    v9 = (_OWORD *)*(&xmmword_18019E550 + 1);
    v10 = xmmword_18019E560;
    v11 = xmmword_18019E560 - xmmword_18019E550;
    LODWORD(v19[0]) = a1;
    v19[1] = a4;
    if ( (unsigned __int64)(*(&xmmword_18019E550 + 1) - xmmword_18019E550 + 16LL) >= (_QWORD)xmmword_18019E560
                                                                                   - xmmword_18019E550 )
    {
      v12 = 16LL;
      if ( (unsigned __int64)(2 * v11) > 0x10 )
        v12 = 2 * v11;
      if ( !wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)&xmmword_18019E550, v12) )
        goto LABEL_24;
      v10 = xmmword_18019E560;
      v9 = (_OWORD *)*(&xmmword_18019E550 + 1);
    }
    v13 = 0LL;
    if ( (unsigned __int64)v9 < v10 )
      v13 = v10 - (_QWORD)v9;
    if ( v9 )
    {
      if ( v13 >= 0x10 )
      {
        *v9 = *(_OWORD *)v19;
LABEL_23:
        *(&xmmword_18019E550 + 1) += 16LL;
LABEL_24:
        if ( !byte_18019E538 )
        {
          v15 = pti;
          if ( pti
            || (ThreadpoolTimer = CreateThreadpoolTimer(
                                    lambda_0374aa0a5d1201b2358c6bce99369c58_::_lambda_invoker_cdecl_,
                                    &wil::details::g_enabledStateManager,
                                    0LL),
                wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
                  &pti,
                  ThreadpoolTimer),
                (v15 = pti) != 0LL) )
          {
            pftDueTime = (struct _FILETIME)-3000000000LL;
            SetThreadpoolTimer(v15, &pftDueTime, 0, 0x124F8u);
            byte_18019E538 = 1;
          }
        }
        ReleaseSRWLockExclusive(&SRWLock);
        goto LABEL_29;
      }
      memset_0(v9, 0, v13);
      *(_DWORD *)_o__errno(v14) = 34;
    }
    else
    {
      *(_DWORD *)_o__errno(v8) = 22;
    }
    invalid_parameter_noinfo();
    goto LABEL_23;
  }
LABEL_29:
  v17 = v7[1];
  if ( v17 )
    wil::details::WilApi_RecordFeatureUsage((wil::details *)a1, v7[2], v17, 0, v19[0]);
  if ( !v7[4] && wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&SRWLock);
    if ( !qword_18019E548 )
    {
      qword_18019E548 = 0LL;
      wil::details::WilApi_SubscribeFeatureStateChangeNotification(
        (wil::details *)&qword_18019E548,
        (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_,
        (void (*)(void *))0xFFFFFFFFFFFFFFFFLL,
        v18);
    }
    ReleaseSRWLockExclusive(&SRWLock);
  }
}
