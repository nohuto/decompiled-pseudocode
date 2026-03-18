/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C000FF08
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C000FEBC (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x1C00568DC (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x1C00569C4 (wil_details_FeatureReporting_IncrementUsageInCache.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5)
{
  unsigned int v5; // edi
  int v7; // esi
  int v8; // ecx
  unsigned int v9; // ecx
  signed __int32 v10; // eax
  int v11; // edx
  unsigned int v13; // r8d
  unsigned __int32 v14; // eax
  unsigned __int32 v15; // ett
  int v16; // [rsp+38h] [rbp-31h] BYREF
  int v17; // [rsp+3Ch] [rbp-2Dh]
  __int128 v18; // [rsp+40h] [rbp-29h] BYREF
  __int64 v19; // [rsp+50h] [rbp-19h]
  __int64 v20; // [rsp+58h] [rbp-11h] BYREF
  unsigned int v21; // [rsp+60h] [rbp-9h]
  __int64 v22; // [rsp+64h] [rbp-5h]
  int v23; // [rsp+6Ch] [rbp+3h]
  __int128 v24; // [rsp+70h] [rbp+7h] BYREF
  __int64 v25; // [rsp+80h] [rbp+17h]

  v5 = 0;
  v19 = 0LL;
  v7 = a3;
  v18 = 0LL;
  if ( !a5 )
    goto LABEL_30;
  if ( a5 == 1 )
  {
LABEL_29:
    wil_details_FeatureReporting_IncrementOpportunityInCache(a1, a5, a3, &v18);
    goto LABEL_10;
  }
  if ( (int)a5 <= 1 )
    goto LABEL_16;
  if ( (int)a5 <= 3 )
  {
LABEL_5:
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
    _m_prefetchw(&Feature_Pldr_Ignore_Vetoes__private_reporting);
    v10 = _InterlockedOr(&Feature_Pldr_Ignore_Vetoes__private_reporting, v9);
    v11 = v18;
    if ( (v10 & 1) == 0 )
      v11 = 1;
    LODWORD(v18) = v11;
    LODWORD(v19) = (v10 & v9 & 0xFFFFFFFE) == (v9 & 0xFFFFFFFE);
    goto LABEL_10;
  }
  if ( a5 == 4 )
  {
LABEL_30:
    wil_details_FeatureReporting_IncrementUsageInCache(a1, a5, a3, &v18);
    goto LABEL_10;
  }
  if ( a5 == 5 )
    goto LABEL_29;
  if ( a5 - 6 <= 1 )
    goto LABEL_5;
LABEL_16:
  v13 = a5 - 320;
  if ( a5 - 320 < 0x40 )
  {
    v14 = dword_1C00830FC;
    do
    {
      if ( (v14 & 0x10) == 0 || (LODWORD(v19) = 1, ((v14 >> 5) & 0x3F) != v13) )
        LODWORD(v19) = 0;
      v15 = v14;
      v14 = _InterlockedCompareExchange(&dword_1C00830FC, (32 * (v13 & 0x3F)) | v14 & 0xFFFFF81F | 0x10, v14);
    }
    while ( v15 != v14 );
  }
  *((_QWORD *)&v18 + 1) = a5;
  DWORD1(v18) = 1;
LABEL_10:
  v25 = v19;
  v24 = v18;
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(17000235LL, a5, 1LL, &Feature_Pldr_Ignore_Vetoes__private_reporting, &v24);
    if ( v7 )
    {
      v20 = 0LL;
      v22 = 0LL;
      v21 = a5;
      v23 = a4;
      g_wil_details_recordFeatureUsage(17000235LL, a5, 1LL, 0LL, &v20);
    }
  }
  else if ( v7 && a5 != 254 )
  {
    v16 = 17000235;
    v17 = (unsigned __int16)a5;
    if ( a4 )
      HIWORD(v17) |= 1u;
    RtlNotifyFeatureUsage(&v16);
  }
  LOBYTE(v5) = (_DWORD)v25 == 0;
  return v5;
}
