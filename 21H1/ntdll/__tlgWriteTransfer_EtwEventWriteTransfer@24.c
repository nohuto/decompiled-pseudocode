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

ULONG __fastcall _tlgWriteTransfer_EtwEventWriteTransfer(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  int v6; // eax
  unsigned __int16 *v7; // edx
  EVENT_DESCRIPTOR EventDescriptor; // [esp+8h] [ebp-18h] BYREF
  int v10; // [esp+1Ch] [ebp-4h]

  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  LODWORD(EventDescriptor.Keyword) = *(_DWORD *)(a2 + 3);
  v6 = *(_DWORD *)(a2 + 7);
  v7 = (unsigned __int16 *)(a2 + 11);
  HIDWORD(EventDescriptor.Keyword) = v6;
  UserData->Ptr = *(unsigned int *)(a1 + 4);
  UserData->Size = **(unsigned __int16 **)(a1 + 4);
  UserData->Reserved = 2;
  LODWORD(UserData[1].Ptr) = v7;
  HIDWORD(UserData[1].Ptr) = 0;
  UserData[1].Size = *v7;
  UserData[1].Reserved = 1;
  v10 = &_TraceLoggingMetadataEnd - (const UINT8 *)&_TraceLoggingMetadata;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 24), &EventDescriptor, 0, 0, UserDataCount, UserData);
}
