/*
 * XREFs of ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180055B50
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800520CC (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@AEA_N_J@Z @ 0x180054560 (-EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV-$unique_any_t@V-$unique_storage@U-$resource_.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180055688 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180055D4C (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     _invalid_parameter_noinfo @ 0x18008D59A (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18008D658 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::RecordFeatureUsageCallback(
        wil::details *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5)
{
  unsigned int v6; // esi
  unsigned int v7; // r8d
  __int64 v8; // rcx
  _OWORD *v9; // r9
  unsigned __int64 v10; // r10
  __int64 v11; // rdx
  size_t v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int v19; // edx
  __int128 v20; // [rsp+20h] [rbp-18h]

  v6 = (unsigned int)a1;
  if ( a4 )
  {
    if ( g_wil_details_RecordSRUMFeatureUsage && (a2 - 100 <= 0x31 || !a2) )
      g_wil_details_RecordSRUMFeatureUsage((unsigned int)a1, a2, a3);
    if ( !*a5
      || !wil::details::g_enabledStateManager
      || wil::details::g_processShutdownInProgress
      || wil::details::g_pfnDllShutdownInProgress && wil::details::g_pfnDllShutdownInProgress() )
    {
      goto LABEL_6;
    }
    AcquireSRWLockExclusive(&SRWLock);
    v9 = (_OWORD *)*(&xmmword_18059FC28 + 1);
    v10 = xmmword_18059FC38;
    v11 = xmmword_18059FC38 - xmmword_18059FC28;
    LODWORD(v20) = v6;
    *((_QWORD *)&v20 + 1) = a4;
    if ( (unsigned __int64)(*(&xmmword_18059FC28 + 1) - xmmword_18059FC28 + 16LL) >= (_QWORD)xmmword_18059FC38
                                                                                   - xmmword_18059FC28 )
    {
      v13 = 2 * v11;
      v14 = 16LL;
      if ( v13 > 0x10 )
        v14 = v13;
      if ( !wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)&xmmword_18059FC28, v14) )
        goto LABEL_21;
      v10 = xmmword_18059FC38;
      v9 = (_OWORD *)*(&xmmword_18059FC28 + 1);
    }
    v12 = v10 - (_QWORD)v9;
    if ( (unsigned __int64)v9 >= v10 )
      v12 = 0LL;
    if ( v9 )
    {
      if ( v12 >= 0x10 )
      {
        *v9 = v20;
LABEL_20:
        *(&xmmword_18059FC28 + 1) += 16LL;
LABEL_21:
        if ( !byte_18059FC10 )
        {
          if ( !qword_18059FC08 )
          {
            ThreadpoolTimer = CreateThreadpoolTimer(
                                lambda_0374aa0a5d1201b2358c6bce99369c58_::_lambda_invoker_cdecl_,
                                &wil::details::g_enabledStateManager,
                                0LL);
            wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
              (struct _TP_TIMER **)&qword_18059FC08,
              ThreadpoolTimer);
          }
          wil::details::EnsureCoalescedTimer_SetTimer((struct _TP_TIMER **)&qword_18059FC08, &byte_18059FC10, 300000LL);
        }
        ReleaseSRWLockExclusive(&SRWLock);
LABEL_6:
        v7 = a5[1];
        if ( v7 )
          wil::details::WilApi_RecordFeatureUsage((wil::details *)v6, a5[2], v7, a4, (const char *)v20);
        if ( !a5[4] )
          wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
            (wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager,
            (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_);
        return;
      }
      memset_0(v9, 0, v12);
      *(_DWORD *)_o__errno(v16, v15, v17) = 34;
    }
    else
    {
      *(_DWORD *)_o__errno(v8, v11, v12) = 22;
    }
    invalid_parameter_noinfo();
    goto LABEL_20;
  }
  v19 = a5[2] | 0x80000000;
  if ( !a5[5] )
    v19 = a5[2];
  wil::details::WilApi_RecordFeatureUsage(a1, v19, 0, 0, (const char *)v20);
}
