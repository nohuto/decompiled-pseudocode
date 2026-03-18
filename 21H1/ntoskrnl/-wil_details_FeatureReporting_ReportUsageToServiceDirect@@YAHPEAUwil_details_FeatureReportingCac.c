/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1402D44E0
 * Callers:
 *     WbValidateEncryptionSegmentArguments @ 0x1405CCB2C (WbValidateEncryptionSegmentArguments.c)
 *     WbDecryptWarbirdEncryptionSegment @ 0x1405CCD18 (WbDecryptWarbirdEncryptionSegment.c)
 *     WbReEncryptWarbirdEncryptionSegment @ 0x1405CD01C (WbReEncryptWarbirdEncryptionSegment.c)
 *     WbInitializeEncryptionSegment @ 0x1405CD390 (WbInitializeEncryptionSegment.c)
 *     WbCreateHeapExecutedBlock @ 0x14065CA04 (WbCreateHeapExecutedBlock.c)
 *     WbValidateHeapExecuteCallArguments @ 0x14065FAE8 (WbValidateHeapExecuteCallArguments.c)
 * Callees:
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1402D4560 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        struct wil_details_FeatureReportingCache *a1,
        struct wil_details_FeatureReportingCache *a2,
        __int64 a3,
        unsigned int a4,
        enum wil_details_ServiceReportingKind a5)
{
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+20h] [rbp-58h]
  struct wil_details_RecordUsageResult v8; // [rsp+30h] [rbp-48h] BYREF
  struct wil_details_RecordUsageResult v9; // [rsp+48h] [rbp-30h] BYREF

  v5 = 0;
  v9 = *wil_details_FeatureReporting_RecordUsageInCache(&v8, a2, a5, a4, v7);
  if ( g_wil_details_recordFeatureUsage )
    g_wil_details_recordFeatureUsage(
      0xE67B5Au,
      a5,
      1u,
      (struct wil_details_FeatureReportingCache *)&dword_140CDB448,
      &v9);
  LOBYTE(v5) = v9.ignoredUse == 0;
  return v5;
}
