/*
 * XREFs of ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180034470
 * Callers:
 *     <none>
 * Callees:
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x1800348A8 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?WilApi_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x1800649E4 (-WilApi_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBS.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800697D0 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800699FC (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     _invalid_parameter_noinfo @ 0x18006B51E (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18006B59C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::RecordFeatureUsageCallback(
        wil::details *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5)
{
  unsigned int v6; // esi
  _DWORD *v7; // rbx
  unsigned int v8; // r8d
  __int64 v9; // rcx
  _OWORD *v10; // r9
  unsigned __int64 v11; // r10
  size_t v12; // r8
  void *v13; // r9
  struct _TP_TIMER *v14; // rcx
  unsigned __int64 v15; // rdx
  PTP_TIMER ThreadpoolTimer; // rax
  __int64 v17; // rcx
  unsigned int v18; // edx
  __int128 v19; // [rsp+20h] [rbp-18h]
  struct _FILETIME pftDueTime; // [rsp+58h] [rbp+20h] BYREF

  v6 = (unsigned int)a1;
  if ( a4 )
  {
    if ( g_wil_details_RecordSRUMFeatureUsage && (a2 - 100 <= 0x31 || !a2) )
      g_wil_details_RecordSRUMFeatureUsage((unsigned int)a1, a2, a3);
    v7 = a5;
    if ( !*a5
      || !wil::details::g_enabledStateManager
      || wil::details::g_processShutdownInProgress
      || wil::details::g_pfnDllShutdownInProgress && wil::details::g_pfnDllShutdownInProgress() )
    {
      goto LABEL_6;
    }
    AcquireSRWLockExclusive(&SRWLock);
    v10 = (_OWORD *)*(&xmmword_18019F5A0 + 1);
    v11 = xmmword_18019F5B0;
    LODWORD(v19) = v6;
    *((_QWORD *)&v19 + 1) = a4;
    if ( (unsigned __int64)(*(&xmmword_18019F5A0 + 1) - xmmword_18019F5A0 + 16LL) >= (_QWORD)xmmword_18019F5B0
                                                                                   - xmmword_18019F5A0 )
    {
      v15 = 16LL;
      if ( (unsigned __int64)(2 * (xmmword_18019F5B0 - xmmword_18019F5A0)) > 0x10 )
        v15 = 2 * (xmmword_18019F5B0 - xmmword_18019F5A0);
      if ( !wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)&xmmword_18019F5A0, v15) )
        goto LABEL_20;
      v11 = xmmword_18019F5B0;
      v10 = (_OWORD *)*(&xmmword_18019F5A0 + 1);
    }
    v12 = v11 - (_QWORD)v10;
    if ( (unsigned __int64)v10 >= v11 )
      v12 = 0LL;
    if ( v10 )
    {
      if ( v12 >= 0x10 )
      {
        *v10 = v19;
LABEL_19:
        *(&xmmword_18019F5A0 + 1) += 16LL;
LABEL_20:
        if ( !byte_18019F588 )
        {
          v14 = pti;
          if ( pti
            || (ThreadpoolTimer = CreateThreadpoolTimer(
                                    lambda_0374aa0a5d1201b2358c6bce99369c58_::_lambda_invoker_cdecl_,
                                    &wil::details::g_enabledStateManager,
                                    0LL),
                wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
                  &pti,
                  ThreadpoolTimer),
                (v14 = pti) != 0LL) )
          {
            pftDueTime = (struct _FILETIME)-3000000000LL;
            SetThreadpoolTimer(v14, &pftDueTime, 0, 0x124F8u);
            byte_18019F588 = 1;
          }
        }
        ReleaseSRWLockExclusive(&SRWLock);
LABEL_6:
        v8 = v7[1];
        if ( v8 )
          wil::details::WilApi_RecordFeatureUsage((wil::details *)v6, v7[2], v8, a4, (const char *)v19);
        if ( !v7[4] && wil::details::g_enabledStateManager )
        {
          AcquireSRWLockExclusive(&SRWLock);
          if ( !qword_18019F598 )
          {
            qword_18019F598 = 0LL;
            wil::details::WilApi_SubscribeFeatureStateChangeNotification(
              (wil::details *)&qword_18019F598,
              (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_,
              (void (*)(void *))0xFFFFFFFFFFFFFFFFLL,
              v13);
          }
          ReleaseSRWLockExclusive(&SRWLock);
        }
        return;
      }
      memset_0(v10, 0, v12);
      *(_DWORD *)_o__errno(v17) = 34;
    }
    else
    {
      *(_DWORD *)_o__errno(v9) = 22;
    }
    invalid_parameter_noinfo();
    goto LABEL_19;
  }
  v18 = a5[2] | 0x80000000;
  if ( !a5[5] )
    v18 = a5[2];
  wil::details::WilApi_RecordFeatureUsage(a1, v18, 0, 0, (const char *)v19);
}
