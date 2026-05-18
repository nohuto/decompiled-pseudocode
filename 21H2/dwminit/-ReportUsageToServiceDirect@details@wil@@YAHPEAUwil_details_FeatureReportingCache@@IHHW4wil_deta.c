/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18000B088
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_2431961401@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000BC94 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_2431961401@@@details@wil@@QEAAX_NW4Report.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x1800040C4 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ??$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z @ 0x180007FC0 (--$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x18000AD44 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     ??$EnsureCoalescedTimer@VEnabledStateManager@details@wil@@@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@AEA_NPEAVEnabledStateManager@01@@Z @ 0x18000BD64 (--$EnsureCoalescedTimer@VEnabledStateManager@details@wil@@@details@wil@@YAXAEAV-$unique_any_t@V-.c)
 *     _guard_dispatch_icall_nop @ 0x18000DED0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        volatile signed __int32 *a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        RTL_SRWLOCK *a7)
{
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int128 v12; // xmm1
  void (__fastcall *v14)(__int64, _QWORD, _QWORD, _QWORD); // rax
  void (__fastcall *v15)(__int64 *, void (__fastcall *)(void *), __int64); // rax
  void (__fastcall *v16)(__int64, __int64, _QWORD, _QWORD); // rax
  __int64 v17; // rdx
  __int64 (__fastcall *Source[2])(_QWORD); // [rsp+30h] [rbp-40h] BYREF
  __int128 v20; // [rsp+40h] [rbp-30h]
  __int64 v21; // [rsp+50h] [rbp-20h]
  _BYTE v22[24]; // [rsp+58h] [rbp-18h] BYREF

  v10 = wil_details_FeatureReporting_RecordUsageInCache((__int64)v22, a1, a5);
  v11 = 0;
  v12 = *(_OWORD *)v10;
  v21 = *(_QWORD *)(v10 + 16);
  v20 = v12;
  if ( g_wil_details_RecordSRUMFeatureUsage && (!a5 || a5 - 100 <= 0x31) )
    g_wil_details_RecordSRUMFeatureUsage(57566010LL, a5, 1LL);
  if ( (_DWORD)v20
    && wil::details::g_enabledStateManager
    && !wil::details::g_processShutdownInProgress
    && !(wil::details::g_pfnDllShutdownInProgress ? wil::details::g_pfnDllShutdownInProgress() : 0) )
  {
    AcquireSRWLockExclusive(&stru_180014248);
    LODWORD(Source[0]) = 57566010;
    Source[1] = (__int64 (__fastcall *)(_QWORD))a1;
    wil::details_abi::heap_buffer::push_back((wil::details_abi::heap_buffer *)&unk_180014270, Source, 0x10uLL);
    wil::details::EnsureCoalescedTimer<wil::details::EnabledStateManager>(
      &unk_180014250,
      &byte_180014258,
      &wil::details::g_enabledStateManager);
    Source[0] = (__int64 (__fastcall *)(_QWORD))ReleaseSRWLockExclusive;
    a7 = &stru_180014248;
    wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(Source, &a7);
  }
  if ( DWORD1(v20) )
  {
    v14 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))g_wil_details_internalRecordFeatureUsage;
    if ( g_wil_details_internalRecordFeatureUsage
      || (v14 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))g_wil_details_apiRecordFeatureUsage) != 0LL )
    {
      v14(57566010LL, DWORD2(v20), DWORD1(v20), 0LL);
    }
  }
  if ( !(_DWORD)v21 && wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&stru_180014248);
    if ( !qword_180014268 )
    {
      v15 = (void (__fastcall *)(__int64 *, void (__fastcall *)(void *), __int64))g_wil_details_internalSubscribeFeatureStateChangeNotification;
      qword_180014268 = 0LL;
      if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
        || (v15 = (void (__fastcall *)(__int64 *, void (__fastcall *)(void *), __int64))g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
      {
        v15(&qword_180014268, _lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_, -1LL);
      }
    }
    Source[0] = (__int64 (__fastcall *)(_QWORD))ReleaseSRWLockExclusive;
    a7 = &stru_180014248;
    wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(Source, &a7);
  }
  if ( a3 )
  {
    v16 = (void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))g_wil_details_internalRecordFeatureUsage;
    v17 = a5;
    LODWORD(v17) = a5 | 0x80000000;
    if ( !a4 )
      v17 = a5;
    if ( g_wil_details_internalRecordFeatureUsage
      || (v16 = (void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))g_wil_details_apiRecordFeatureUsage) != 0LL )
    {
      v16(57566010LL, v17, 0LL, 0LL);
    }
  }
  LOBYTE(v11) = (_DWORD)v21 == 0;
  return v11;
}
