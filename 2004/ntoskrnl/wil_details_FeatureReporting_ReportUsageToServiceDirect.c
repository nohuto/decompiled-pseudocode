/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x14027C178
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14027C11C (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x14027C228 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x1404E86C8 (CmFcManagerNotifyFeatureUsage.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  unsigned int v15; // [rsp+30h] [rbp-40h] BYREF
  int v16; // [rsp+34h] [rbp-3Ch]
  __int64 v17; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+40h] [rbp-30h]
  __int64 v19; // [rsp+44h] [rbp-2Ch]
  int v20; // [rsp+4Ch] [rbp-24h]
  __int128 v21; // [rsp+50h] [rbp-20h] BYREF
  __int64 v22; // [rsp+60h] [rbp-10h]

  v11 = wil_details_FeatureReporting_RecordUsageInCache((unsigned int)&v17, a1, a5, 0, a7);
  v13 = 0;
  v21 = *(_OWORD *)v11;
  v22 = *(_QWORD *)(v11 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(a2, a5, a7, a1, &v21);
    if ( a3 )
    {
      v17 = 0LL;
      v19 = 0LL;
      v18 = a5;
      v20 = a4;
      g_wil_details_recordFeatureUsage(a2, a5, a7, 0LL, &v17);
    }
  }
  else if ( a3 && a5 != 254 )
  {
    v15 = a2;
    v16 = (unsigned __int16)a5;
    if ( a4 )
      HIWORD(v16) |= 1u;
    CmFcManagerNotifyFeatureUsage(v12, &v15);
  }
  LOBYTE(v13) = (_DWORD)v22 == 0;
  return v13;
}
