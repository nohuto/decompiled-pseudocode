/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C00194FC
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0019478 (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x1C001932C (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5)
{
  _DWORD *v7; // rax
  unsigned int v8; // ebx
  int v10; // [rsp+30h] [rbp-40h] BYREF
  int v11; // [rsp+34h] [rbp-3Ch]
  __int64 v12; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+40h] [rbp-30h]
  __int64 v14; // [rsp+44h] [rbp-2Ch]
  int v15; // [rsp+4Ch] [rbp-24h]
  __int128 v16; // [rsp+50h] [rbp-20h] BYREF
  __int64 v17; // [rsp+60h] [rbp-10h]

  v7 = wil_details_FeatureReporting_RecordUsageInCache((__int64)&v12, a2, a5);
  v8 = 0;
  v16 = *(_OWORD *)v7;
  v17 = *((_QWORD *)v7 + 2);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(
      34884382LL,
      a5,
      1LL,
      &Feature_Servicing_BSOD_AMD_BDF_34884382__private_reporting,
      &v16);
    if ( a3 )
    {
      v12 = 0LL;
      v14 = 0LL;
      v13 = a5;
      v15 = a4;
      g_wil_details_recordFeatureUsage(34884382LL, a5, 1LL, 0LL, &v12);
    }
  }
  else if ( a3 && a5 != 254 )
  {
    v10 = 34884382;
    v11 = (unsigned __int16)a5;
    if ( a4 )
      HIWORD(v11) |= 1u;
    RtlNotifyFeatureUsage(&v10);
  }
  LOBYTE(v8) = (_DWORD)v17 == 0;
  return v8;
}
