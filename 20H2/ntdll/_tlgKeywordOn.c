/*
 * XREFs of _tlgKeywordOn @ 0x180084FF4
 * Callers:
 *     RtlpLogCapabilityCheckLatency @ 0x1800423A4 (RtlpLogCapabilityCheckLatency.c)
 *     LdrpResReportResourceAccessInternal @ 0x180042CE4 (LdrpResReportResourceAccessInternal.c)
 *     LdrpLogCFGModuleInfoTelemetry @ 0x180084EA8 (LdrpLogCFGModuleInfoTelemetry.c)
 *     LdrpLogImportRedirectionTelemetry @ 0x1800CF704 (LdrpLogImportRedirectionTelemetry.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800CF810 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpLogMapAndVerifyResourceFileFailure @ 0x1800CFB14 (LdrpLogMapAndVerifyResourceFileFailure.c)
 *     LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure @ 0x1800CFDA4 (LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure.c)
 *     LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry @ 0x1800CFEF0 (LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x1800CFFF4 (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x1800D00D4 (LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x1800D01B4 (LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry.c)
 * Callees:
 *     <none>
 */

char __fastcall tlgKeywordOn(__int64 a1, __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a2 || (a2 & *(_QWORD *)(a1 + 16)) != 0 && (a2 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24) )
    return 1;
  return v2;
}
