/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1402FD760
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402FD704 (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x1402FD858 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     RtlNotifyFeatureUsage @ 0x14058C720 (RtlNotifyFeatureUsage.c)
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
  unsigned int v12; // ebx
  unsigned int v14; // [rsp+30h] [rbp-68h] BYREF
  int v15; // [rsp+34h] [rbp-64h]
  __int64 v16; // [rsp+38h] [rbp-60h] BYREF
  __int128 v17; // [rsp+50h] [rbp-48h] BYREF
  __int64 v18; // [rsp+60h] [rbp-38h]

  v11 = wil_details_FeatureReporting_RecordUsageInCache((unsigned int)&v16, a1, a5, 0, a7);
  v12 = 0;
  v17 = *(_OWORD *)v11;
  v18 = *(_QWORD *)(v11 + 16);
  if ( g_wil_details_recordFeatureUsage )
    g_wil_details_recordFeatureUsage(a2, a5, a7, a1, &v17);
  if ( a3 && a5 != 254 )
  {
    v14 = a2;
    v15 = (unsigned __int16)a5;
    if ( a4 )
      HIWORD(v15) |= 1u;
    RtlNotifyFeatureUsage(&v14);
  }
  LOBYTE(v12) = (_DWORD)v18 == 0;
  return v12;
}
