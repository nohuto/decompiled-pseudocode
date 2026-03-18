/*
 * XREFs of DpiFdoQuerySysMmAdapterCaps @ 0x1C038AE74
 * Callers:
 *     DpiFdoCreateSysMmAdapter @ 0x1C01F58C8 (DpiFdoCreateSysMmAdapter.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiFdoQuerySysMmAdapterCaps(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall *v7)(__int64, __int128 *); // rax
  int v8; // eax
  __int64 v9; // rdi
  __int64 (__fastcall *v11)(__int64, __int128 *); // rax
  int v12; // eax
  __int128 v13; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+50h] [rbp-20h]
  __int64 *v15; // [rsp+58h] [rbp-18h]
  __int128 v16; // [rsp+60h] [rbp-10h]
  int v17; // [rsp+90h] [rbp+20h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+38h] BYREF

  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_DmaRemapping__private_reporting,
    0x1BA00F9u,
    a3,
    a4,
    (const struct FEATURE_LOGGED_TRAITS *)Feature_DmaRemapping_logged_traits,
    1);
  v18 = 0LL;
  v17 = 0;
  v14 = 0LL;
  v15 = &v18;
  v7 = *(__int64 (__fastcall **)(__int64, __int128 *))(a1 + 272);
  v13 = 0LL;
  LODWORD(v13) = 34;
  v16 = 0LL;
  LODWORD(v16) = 8;
  v8 = v7(a2, &v13);
  v9 = v8;
  if ( v8 < 0
    || (LODWORD(v13) = 35,
        v15 = (__int64 *)&v17,
        v11 = *(__int64 (__fastcall **)(__int64, __int128 *))(a1 + 272),
        LODWORD(v16) = 4,
        v12 = v11(a2, &v13),
        v9 = v12,
        v12 < 0) )
  {
    WdLogSingleEntry1(2LL, v9);
    return (unsigned int)v9;
  }
  else
  {
    *(_QWORD *)a3 = v18;
    *(_DWORD *)(a3 + 16) ^= ((unsigned __int8)v17 ^ (unsigned __int8)*(_DWORD *)(a3 + 16)) & 7;
    return 0LL;
  }
}
