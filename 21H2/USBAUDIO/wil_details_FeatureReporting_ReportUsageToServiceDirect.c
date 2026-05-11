/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C0002744
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C000282C (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x1C0002478 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     __security_check_cookie @ 0x1C00121B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012E90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(__int64 a1, __int64 a2, unsigned int a3)
{
  __int16 v3; // bx
  __int64 v6; // rax
  unsigned int v7; // edi
  int v9; // [rsp+30h] [rbp-40h] BYREF
  int v10; // [rsp+34h] [rbp-3Ch]
  _BYTE v11[24]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v12; // [rsp+50h] [rbp-20h] BYREF
  __int64 v13; // [rsp+60h] [rbp-10h]

  v3 = a2;
  v6 = wil_details_FeatureReporting_RecordUsageInCache(
         (__int64)v11,
         *(volatile signed __int32 **)(a1 + 8),
         a3,
         SHIDWORD(a2));
  v7 = 0;
  v12 = *(_OWORD *)v6;
  v13 = *(_QWORD *)(v6 + 16);
  if ( g_wil_details_recordFeatureUsage )
    g_wil_details_recordFeatureUsage(*(unsigned int *)(a1 + 24), a3, 1LL, *(_QWORD *)(a1 + 8), &v12);
  if ( (v3 & 0x400) != 0 && a3 != 254 )
  {
    v9 = *(_DWORD *)(a1 + 24);
    v10 = (unsigned __int16)a3;
    if ( (v3 & 0x800) != 0 )
      HIWORD(v10) |= 1u;
    RtlNotifyFeatureUsage(&v9);
  }
  LOBYTE(v7) = (_DWORD)v13 == 0;
  return v7;
}
