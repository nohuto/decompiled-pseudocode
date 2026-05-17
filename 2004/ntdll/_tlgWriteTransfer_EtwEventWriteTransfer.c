/*
 * XREFs of _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008A7EC
 * Callers:
 *     RtlpLogCapabilityCheckLatency @ 0x180042354 (RtlpLogCapabilityCheckLatency.c)
 *     LdrpResReportResourceAccessInternal @ 0x180042C94 (LdrpResReportResourceAccessInternal.c)
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x18007D824 (LdrpLogRelativePathWithAlteredSearchError.c)
 *     LdrpLogCFGModuleInfoTelemetry @ 0x180084DA8 (LdrpLogCFGModuleInfoTelemetry.c)
 *     LdrpLogImportRedirectionTelemetry @ 0x1800CF524 (LdrpLogImportRedirectionTelemetry.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800CF630 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpLogMapAndVerifyResourceFileFailure @ 0x1800CF934 (LdrpLogMapAndVerifyResourceFileFailure.c)
 *     LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure @ 0x1800CFBC4 (LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure.c)
 *     LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry @ 0x1800CFD10 (LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x1800CFE14 (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x1800CFEF4 (LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x1800CFFD4 (LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry.c)
 *     RtlpHpTlLogGCScheduled @ 0x18010B248 (RtlpHpTlLogGCScheduled.c)
 *     RtlpHpTlLogGCTimerFinished @ 0x18010B2A4 (RtlpHpTlLogGCTimerFinished.c)
 *     RtlpHpTlLogMemStats @ 0x18010B300 (RtlpHpTlLogMemStats.c)
 *     RtlpHpTlLogVAChange @ 0x18010B3DC (RtlpHpTlLogVAChange.c)
 * Callees:
 *     EtwEventWriteTransfer @ 0x18004F1E0 (EtwEventWriteTransfer.c)
 */

__int64 __fastcall tlgWriteTransfer_EtwEventWriteTransfer(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  _DWORD v7[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h]

  v7[0] = *a2 << 24;
  v7[1] = *(unsigned __int16 *)(a2 + 1);
  v8 = *(_QWORD *)(a2 + 3);
  *(_QWORD *)a6 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a6 + 8) = **(unsigned __int16 **)(a1 + 8);
  *(_QWORD *)(a6 + 16) = a2 + 11;
  *(_DWORD *)(a6 + 12) = 2;
  *(_DWORD *)(a6 + 24) = *(unsigned __int16 *)(a2 + 11);
  *(_DWORD *)(a6 + 28) = 1;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), (int)v7, 0LL, 0LL, a5, a6);
}
