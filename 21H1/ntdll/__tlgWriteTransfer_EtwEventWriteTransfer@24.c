/*
 * XREFs of __tlgWriteTransfer_EtwEventWriteTransfer@24 @ 0x4B330F4C
 * Callers:
 *     _LdrpLogRelativePathWithAlteredSearchError@4 @ 0x4B2A81DB (_LdrpLogRelativePathWithAlteredSearchError@4.c)
 *     _LdrpLogCFGModuleInfoTelemetry@8 @ 0x4B2ADD70 (_LdrpLogCFGModuleInfoTelemetry@8.c)
 *     _LdrpResReportResourceAccessInternal@16 @ 0x4B2B0BD2 (_LdrpResReportResourceAccessInternal@16.c)
 *     _RtlpLogCapabilityCheckLatency@24 @ 0x4B2EF4F3 (_RtlpLogCapabilityCheckLatency@24.c)
 *     _LdrpLogImportRedirectionTelemetry@4 @ 0x4B3304B6 (_LdrpLogImportRedirectionTelemetry@4.c)
 *     _LdrpLogIntegrityContinuityTelemetry@20 @ 0x4B33057E (_LdrpLogIntegrityContinuityTelemetry@20.c)
 *     _LdrpLogMapAndVerifyResourceFileFailure@20 @ 0x4B330851 (_LdrpLogMapAndVerifyResourceFileFailure@20.c)
 *     _LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure@16 @ 0x4B330AB6 (_LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure@16.c)
 *     _LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry@12 @ 0x4B330BDE (_LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry@12.c)
 *     _RtlpHpTlLogGCScheduled@0 @ 0x4B370973 (_RtlpHpTlLogGCScheduled@0.c)
 *     _RtlpHpTlLogGCTimerFinished@0 @ 0x4B3709B8 (_RtlpHpTlLogGCTimerFinished@0.c)
 *     _RtlpHpTlLogMemStats@8 @ 0x4B3709FD (_RtlpHpTlLogMemStats@8.c)
 *     _RtlpHpTlLogVAChange@16 @ 0x4B370AE6 (_RtlpHpTlLogVAChange@16.c)
 * Callees:
 *     _EtwEventWriteTransfer@28 @ 0x4B2E3CA0 (_EtwEventWriteTransfer@28.c)
 */

int __fastcall _tlgWriteTransfer_EtwEventWriteTransfer(
        _DWORD *a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5,
        _DWORD *a6)
{
  int v6; // eax
  unsigned __int16 *v7; // edx
  _DWORD v9[6]; // [esp+8h] [ebp-18h] BYREF

  v9[0] = *a2 << 24;
  v9[1] = *(unsigned __int16 *)(a2 + 1);
  v9[2] = *(_DWORD *)(a2 + 3);
  v6 = *(_DWORD *)(a2 + 7);
  v7 = (unsigned __int16 *)(a2 + 11);
  v9[3] = v6;
  *a6 = a1[1];
  a6[1] = 0;
  a6[2] = *(unsigned __int16 *)a1[1];
  a6[3] = 2;
  a6[4] = v7;
  a6[5] = 0;
  a6[6] = *v7;
  a6[7] = 1;
  v9[5] = &_TraceLoggingMetadataEnd - (const UINT8 *)&_TraceLoggingMetadata;
  return EtwEventWriteTransfer(a1[6], a1[7], (int)v9, 0, 0, a5, (int)a6);
}
