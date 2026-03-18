/*
 * XREFs of WbReEncryptWarbirdEncryptionSegment @ 0x1405CD01C
 * Callers:
 *     WbReEncryptEncryptionSegment @ 0x1405CC714 (WbReEncryptEncryptionSegment.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1402D44E0 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     sub_1405CD0C0 @ 0x1405CD0C0 (sub_1405CD0C0.c)
 *     sub_14095F548 @ 0x14095F548 (sub_14095F548.c)
 */

__int64 __fastcall WbReEncryptWarbirdEncryptionSegment(
        __int64 a1,
        struct wil_details_FeatureReportingCache *a2,
        __int64 a3,
        unsigned int a4)
{
  struct wil_details_FeatureReportingCache *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // edi
  int v9; // eax
  int v11; // [rsp+60h] [rbp+8h] BYREF

  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 64);
  if ( v6 )
  {
    v7 = v6 - 1;
    *(_QWORD *)(a1 + 64) = v7;
    if ( !v7 )
    {
      v8 = *(_DWORD *)(a1 + 72);
      while ( --v8 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 48) == 1 )
        {
          v9 = sub_14095F548(a1, 16LL * v8 + *(_QWORD *)(a1 + 56) + 248LL);
        }
        else
        {
          v11 = 3;
          if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                               v5,
                               a2,
                               a3,
                               a4,
                               wil_details_ServiceReportingKind_PotentialDeviceUsage)
            && g_wil_details_pfnFeatureLoggingHook )
          {
            g_wil_details_pfnFeatureLoggingHook(
              0xE67B5Au,
              (const struct FEATURE_LOGGED_TRAITS *)&Feature_PdttSupport_logged_traits,
              0LL,
              0,
              (const enum wil_ReportingKind *)&v11,
              0LL,
              0,
              1uLL);
          }
          if ( *(_DWORD *)(a1 + 48) )
          {
            LODWORD(v5) = -1073741811;
            return (unsigned int)v5;
          }
          v9 = sub_1405CD0C0(a1, *(_QWORD *)(a1 + 56) + 4 * (3LL * v8 + 61));
        }
        v5 = (struct wil_details_FeatureReportingCache *)(unsigned int)v9;
        if ( v9 < 0 )
          return (unsigned int)v5;
        --*(_DWORD *)(a1 + 72);
      }
    }
  }
  return (unsigned int)v5;
}
