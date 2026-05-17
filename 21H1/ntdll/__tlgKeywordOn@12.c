/*
 * XREFs of __tlgKeywordOn@12 @ 0x4B2ADDDA
 * Callers:
 *     _LdrpLogCFGModuleInfoTelemetry@8 @ 0x4B2ADD70 (_LdrpLogCFGModuleInfoTelemetry@8.c)
 *     _LdrpResReportResourceAccessInternal@16 @ 0x4B2B0BD2 (_LdrpResReportResourceAccessInternal@16.c)
 *     _RtlpLogCapabilityCheckLatency@24 @ 0x4B2EF4F3 (_RtlpLogCapabilityCheckLatency@24.c)
 *     _LdrpLogImportRedirectionTelemetry@4 @ 0x4B3304B6 (_LdrpLogImportRedirectionTelemetry@4.c)
 *     _LdrpLogIntegrityContinuityTelemetry@20 @ 0x4B33057E (_LdrpLogIntegrityContinuityTelemetry@20.c)
 *     _LdrpLogMapAndVerifyResourceFileFailure@20 @ 0x4B330851 (_LdrpLogMapAndVerifyResourceFileFailure@20.c)
 *     _LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure@16 @ 0x4B330AB6 (_LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure@16.c)
 *     _LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry@12 @ 0x4B330BDE (_LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry@12.c)
 * Callees:
 *     <none>
 */

bool __thiscall _tlgKeywordOn(_QWORD *this, __int64 a2)
{
  return !a2 || (a2 & this[1]) != 0 && (a2 & this[2]) == this[2];
}
