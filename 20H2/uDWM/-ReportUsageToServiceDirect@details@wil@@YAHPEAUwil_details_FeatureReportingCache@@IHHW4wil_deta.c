/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180054D18
 * Callers:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180054BE0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 * Callees:
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18002CFB4 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x18005087C (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     ?wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x18007FBD4 (-wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCa.c)
 *     ?wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x18007FCBC (-wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W.c)
 */

__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        volatile signed __int32 *a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  int v8; // edx
  unsigned int v9; // edx
  signed __int32 v10; // eax
  int v11; // ecx
  int v12; // r14d
  unsigned int v13; // r8d
  unsigned __int32 v14; // eax
  unsigned __int32 v15; // ett
  unsigned int v16; // r12d
  unsigned int v17; // r15d
  void (*v18)(unsigned int, unsigned int, unsigned int, const char *); // rax
  void (*v19)(unsigned int, unsigned int, unsigned int, const char *); // rax
  __int64 v20; // rdx
  __int128 v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+40h] [rbp-10h]
  int v24; // [rsp+A0h] [rbp+50h]

  v24 = a3;
  v5 = 0;
  v23 = 0LL;
  v22 = 0LL;
  if ( !a5 )
    goto LABEL_27;
  if ( a5 == 1 )
  {
LABEL_26:
    wil_details_FeatureReporting_IncrementOpportunityInCache(a1, a5, a3, &v22);
LABEL_28:
    v12 = v23;
LABEL_29:
    v16 = DWORD2(v22);
    v17 = DWORD1(v22);
    goto LABEL_30;
  }
  if ( (int)a5 <= 1 )
    goto LABEL_19;
  if ( (int)a5 <= 3 )
  {
LABEL_8:
    v8 = 0;
    switch ( a5 )
    {
      case 2u:
        v8 = 2;
        break;
      case 3u:
        v8 = 8;
        break;
      case 6u:
        v8 = 4;
        break;
      case 7u:
        v8 = 16;
        break;
    }
    v9 = v8 | 1;
    _m_prefetchw((const void *)a1);
    v10 = _InterlockedOr(a1, v9);
    v11 = v22;
    v12 = 0;
    if ( (v10 & 1) == 0 )
      v11 = 1;
    LODWORD(v22) = v11;
    LOBYTE(v12) = (v9 & 0xFFFFFFFE & v10) == (v9 & 0xFFFFFFFE);
    goto LABEL_29;
  }
  if ( a5 == 4 )
  {
LABEL_27:
    wil_details_FeatureReporting_IncrementUsageInCache(a1, a5, a3, &v22);
    goto LABEL_28;
  }
  if ( a5 == 5 )
    goto LABEL_26;
  if ( a5 - 6 <= 1 )
    goto LABEL_8;
LABEL_19:
  v13 = a5 - 320;
  if ( a5 - 320 < 0x40 )
  {
    v14 = *((_DWORD *)a1 + 1);
    do
    {
      if ( (v14 & 0x10) == 0 || (LODWORD(v23) = 1, ((v14 >> 5) & 0x3F) != v13) )
        LODWORD(v23) = 0;
      v15 = v14;
      v14 = _InterlockedCompareExchange(a1 + 1, (32 * (v13 & 0x3F)) | v14 & 0xFFFFF81F | 0x10, v14);
    }
    while ( v15 != v14 );
  }
  v12 = v23;
  v16 = a5;
  v17 = 1;
LABEL_30:
  if ( g_wil_details_RecordSRUMFeatureUsage && (!a5 || a5 - 100 <= 0x31) )
    ((void (__fastcall *)(_QWORD, _QWORD, __int64))g_wil_details_RecordSRUMFeatureUsage)(a2, a5, 1LL);
  if ( (_DWORD)v22 )
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
      a2,
      (struct wil_details_FeatureReportingCache *)a1);
  if ( v17 )
  {
    v18 = g_wil_details_internalRecordFeatureUsage;
    if ( g_wil_details_internalRecordFeatureUsage || (v18 = g_wil_details_apiRecordFeatureUsage) != 0LL )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v18)(a2, v16, v17, 0LL);
  }
  if ( !v12 )
    wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
      (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
      (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_);
  if ( v24 )
  {
    v19 = g_wil_details_internalRecordFeatureUsage;
    v20 = a5;
    LODWORD(v20) = a5 | 0x80000000;
    if ( !a4 )
      v20 = a5;
    if ( g_wil_details_internalRecordFeatureUsage || (v19 = g_wil_details_apiRecordFeatureUsage) != 0LL )
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))v19)(a2, v20, 0LL, 0LL);
  }
  LOBYTE(v5) = v12 == 0;
  return v5;
}
