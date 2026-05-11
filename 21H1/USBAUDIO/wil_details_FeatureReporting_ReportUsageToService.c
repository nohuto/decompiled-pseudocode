/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x1C0001EB8
 * Callers:
 *     Feature_Servicing_2101c_29879707__private_IsEnabled @ 0x1C00028E0 (Feature_Servicing_2101c_29879707__private_IsEnabled.c)
 * Callees:
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1C0001BE8 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     __security_check_cookie @ 0x1C0012700 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00133D0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeatureReporting_ReportUsageToService(
        int a1,
        __int64 a2,
        unsigned int a3,
        int a4))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD)
{
  int v5; // r14d
  unsigned __int8 v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // xmm0_8
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v12; // [rsp+50h] [rbp-29h] BYREF
  int v13; // [rsp+58h] [rbp-21h] BYREF
  _BYTE v14[24]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v15; // [rsp+78h] [rbp-1h] BYREF
  unsigned int v16; // [rsp+80h] [rbp+7h]
  __int64 v17; // [rsp+84h] [rbp+Bh]
  int v18; // [rsp+8Ch] [rbp+13h]
  __int128 v19; // [rsp+90h] [rbp+17h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+27h]

  v13 = a4;
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
  v9 = wil_details_FeatureReporting_RecordUsageInCache((__int64)v14, a2, v8);
  v19 = *(_OWORD *)v9;
  v10 = *(_QWORD *)(v9 + 16);
  result = g_wil_details_recordFeatureUsage;
  v20 = v10;
  if ( g_wil_details_recordFeatureUsage )
  {
    result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))g_wil_details_recordFeatureUsage(
                                                                               29879707LL,
                                                                               v8,
                                                                               1LL,
                                                                               &Feature_Servicing_2101c_29879707__private_reporting,
                                                                               &v19);
    if ( a1 )
    {
      v15 = 0LL;
      v17 = 0LL;
      v16 = v8;
      v18 = v5;
      result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))g_wil_details_recordFeatureUsage(
                                                                                 29879707LL,
                                                                                 v8,
                                                                                 1LL,
                                                                                 0LL,
                                                                                 &v15);
    }
  }
  else if ( a1 && v8 != 254 )
  {
    v12 = 29879707LL;
    WORD2(v12) = v8;
    if ( v5 )
      HIWORD(v12) |= 1u;
    result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))RtlNotifyFeatureUsage(&v12);
  }
  if ( !(_DWORD)v20 )
  {
    result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(
                                                                               29879707LL,
                                                                               &Feature_Servicing_2101c_29879707_logged_traits,
                                                                               0LL,
                                                                               a3,
                                                                               &v13,
                                                                               0LL,
                                                                               0,
                                                                               1LL);
  }
  return result;
}
