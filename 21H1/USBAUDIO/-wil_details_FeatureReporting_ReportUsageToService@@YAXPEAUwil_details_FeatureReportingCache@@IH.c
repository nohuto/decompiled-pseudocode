/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0009184
 * Callers:
 *     ?Feature_Servicing_2101c_29879707__private_IsEnabled@@YAHXZ @ 0x1C00099D0 (-Feature_Servicing_2101c_29879707__private_IsEnabled@@YAHXZ.c)
 * Callees:
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1C0001BE8 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     __security_check_cookie @ 0x1C0012700 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00133D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil_details_FeatureReporting_ReportUsageToService(int a1, __int64 a2, int a3, int a4)
{
  int v5; // r14d
  unsigned __int8 v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // [rsp+50h] [rbp-29h] BYREF
  int v11; // [rsp+58h] [rbp-21h] BYREF
  _BYTE v12[24]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v13; // [rsp+78h] [rbp-1h] BYREF
  unsigned int v14; // [rsp+80h] [rbp+7h]
  __int64 v15; // [rsp+84h] [rbp+Bh]
  int v16; // [rsp+8Ch] [rbp+13h]
  __int128 v17; // [rsp+90h] [rbp+17h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+27h]

  v11 = a4;
  v5 = a2;
  if ( a4 )
  {
    switch ( a4 )
    {
      case 1:
        v8 = a3 == 0 ? 4 : 0;
        goto LABEL_17;
      case 2:
        v8 = a3 != 0 ? 1 : 5;
        goto LABEL_17;
      case 3:
        v8 = a3 != 0 ? 2 : 6;
        goto LABEL_17;
      case 4:
        v8 = a3 != 0 ? 3 : 7;
        goto LABEL_17;
      case 5:
        v8 = a3 != 0 ? 8 : 10;
        goto LABEL_17;
      case 6:
        v8 = a3 != 0 ? 9 : 11;
        goto LABEL_17;
    }
    v7 = a4 - 100;
    if ( v7 <= 0x31u )
    {
      v8 = v7 + (a3 != 0 ? 100 : 150);
      goto LABEL_17;
    }
  }
  v8 = 255;
LABEL_17:
  v9 = wil_details_FeatureReporting_RecordUsageInCache((__int64)v12, a2, v8);
  v17 = *(_OWORD *)v9;
  v18 = *(_QWORD *)(v9 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(29879707LL, v8, 1LL, &Feature_Servicing_2101c_29879707__private_reporting, &v17);
    if ( a1 )
    {
      v13 = 0LL;
      v15 = 0LL;
      v14 = v8;
      v16 = v5;
      g_wil_details_recordFeatureUsage(29879707LL, v8, 1LL, 0LL, &v13);
    }
  }
  else if ( a1 && v8 != 254 )
  {
    v10 = 29879707LL;
    WORD2(v10) = v8;
    if ( v5 )
      HIWORD(v10) |= 1u;
    RtlNotifyFeatureUsage(&v10);
  }
  if ( !(_DWORD)v18 )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0x1C7ED9Bu,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_Servicing_2101c_29879707_logged_traits,
        0LL,
        a3,
        (const enum wil_ReportingKind *)&v11,
        0LL,
        0,
        1uLL);
  }
}
