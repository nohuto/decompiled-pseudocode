/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C0065680
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C005F498 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C00636D8 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?SetPtiMouse@QHelper@@YAXAEBVCInputDest@@@Z @ 0x1C0063880 (-SetPtiMouse@QHelper@@YAXAEBVCInputDest@@@Z.c)
 *     QHelper::_anonymous_namespace_::GetQ @ 0x1C00655BC (QHelper--_anonymous_namespace_--GetQ.c)
 *     IsMouseIVEnabled @ 0x1C006561C (IsMouseIVEnabled.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x1C0123534 (-wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCa.c)
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x1C012361C (wil_details_FeatureReporting_IncrementUsageInCache.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        volatile signed __int32 *a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        unsigned int a5)
{
  unsigned int v5; // edi
  int v7; // r12d
  int v10; // ecx
  unsigned int v11; // ecx
  signed __int32 v12; // eax
  int v13; // edx
  unsigned int v15; // r8d
  unsigned __int32 v16; // eax
  unsigned __int32 v17; // ett
  unsigned int v18; // [rsp+30h] [rbp-51h] BYREF
  int v19; // [rsp+34h] [rbp-4Dh]
  __int128 v20; // [rsp+38h] [rbp-49h] BYREF
  __int64 v21; // [rsp+48h] [rbp-39h]
  __int64 v22; // [rsp+50h] [rbp-31h] BYREF
  unsigned int v23; // [rsp+58h] [rbp-29h]
  __int64 v24; // [rsp+5Ch] [rbp-25h]
  int v25; // [rsp+64h] [rbp-1Dh]
  __int128 v26; // [rsp+68h] [rbp-19h] BYREF
  __int64 v27; // [rsp+78h] [rbp-9h]

  v5 = 0;
  v21 = 0LL;
  v7 = a3;
  v20 = 0LL;
  if ( !a5 )
    goto LABEL_30;
  if ( a5 == 1 )
  {
LABEL_29:
    wil_details_FeatureReporting_IncrementOpportunityInCache(a1, a5, a3, &v20);
    goto LABEL_10;
  }
  if ( (int)a5 <= 1 )
    goto LABEL_16;
  if ( (int)a5 <= 3 )
  {
LABEL_5:
    v10 = 0;
    switch ( a5 )
    {
      case 2u:
        v10 = 2;
        break;
      case 3u:
        v10 = 8;
        break;
      case 6u:
        v10 = 4;
        break;
      case 7u:
        v10 = 16;
        break;
    }
    v11 = v10 | 1;
    _m_prefetchw((const void *)a1);
    v12 = _InterlockedOr(a1, v11);
    v13 = v20;
    if ( (v12 & 1) == 0 )
      v13 = 1;
    LODWORD(v20) = v13;
    LODWORD(v21) = (v12 & v11 & 0xFFFFFFFE) == (v11 & 0xFFFFFFFE);
    goto LABEL_10;
  }
  if ( a5 == 4 )
  {
LABEL_30:
    wil_details_FeatureReporting_IncrementUsageInCache(a1, a5, a3, &v20);
    goto LABEL_10;
  }
  if ( a5 == 5 )
    goto LABEL_29;
  if ( a5 - 6 <= 1 )
    goto LABEL_5;
LABEL_16:
  v15 = a5 - 320;
  if ( a5 - 320 < 0x40 )
  {
    v16 = *((_DWORD *)a1 + 1);
    do
    {
      if ( (v16 & 0x10) == 0 || (LODWORD(v21) = 1, ((v16 >> 5) & 0x3F) != v15) )
        LODWORD(v21) = 0;
      v17 = v16;
      v16 = _InterlockedCompareExchange(a1 + 1, (32 * (v15 & 0x3F)) | v16 & 0xFFFFF81F | 0x10, v16);
    }
    while ( v17 != v16 );
  }
  *((_QWORD *)&v20 + 1) = a5;
  DWORD1(v20) = 1;
LABEL_10:
  v27 = v21;
  v26 = v20;
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(a2, a5, 1LL, a1, &v26);
    if ( v7 )
    {
      v22 = 0LL;
      v24 = 0LL;
      v23 = a5;
      v25 = a4;
      g_wil_details_recordFeatureUsage(a2, a5, 1LL, 0LL, &v22);
    }
  }
  else if ( v7 && a5 != 254 )
  {
    v18 = a2;
    v19 = (unsigned __int16)a5;
    if ( a4 )
      HIWORD(v19) |= 1u;
    RtlNotifyFeatureUsage(&v18);
  }
  LOBYTE(v5) = (_DWORD)v27 == 0;
  return v5;
}
