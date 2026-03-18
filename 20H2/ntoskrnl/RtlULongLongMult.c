/*
 * XREFs of RtlULongLongMult @ 0x14022B2AC
 * Callers:
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x14022ADB0 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     AuthzBasepGetSecurityAttributeValueCopyoutBufferSize @ 0x14022B1D0 (AuthzBasepGetSecurityAttributeValueCopyoutBufferSize.c)
 *     HalpSetTimer @ 0x14022B444 (HalpSetTimer.c)
 *     SepCaptureTokenSecurityOperations @ 0x1402FCF30 (SepCaptureTokenSecurityOperations.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x140305910 (AuthzBasepCopyoutSecurityAttributes.c)
 *     RtlCreateAtomTableEx @ 0x14033BB70 (RtlCreateAtomTableEx.c)
 *     PpmConvertTime @ 0x14033E54C (PpmConvertTime.c)
 *     EmpEvaluateNodeLink @ 0x140373F88 (EmpEvaluateNodeLink.c)
 *     HalpSetResumeTime @ 0x140385950 (HalpSetResumeTime.c)
 *     RtlpHpVaMgrCtxStart @ 0x14039DC18 (RtlpHpVaMgrCtxStart.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403CDE7C (HalpTimerSchedulePeriodicQueries.c)
 *     HalpTimerConvertAuxiliaryCounter @ 0x1404B4C54 (HalpTimerConvertAuxiliaryCounter.c)
 *     HalpTimerConvertAuxiliaryCounterToPerformanceCounter @ 0x1404B4D50 (HalpTimerConvertAuxiliaryCounterToPerformanceCounter.c)
 *     HalpTimerConvertPerformanceCounterToAuxiliaryCounter @ 0x1404B4E80 (HalpTimerConvertPerformanceCounterToAuxiliaryCounter.c)
 *     HalpArtQueryCounter @ 0x1404D4350 (HalpArtQueryCounter.c)
 *     EtwpGetDurationSince @ 0x1405A7044 (EtwpGetDurationSince.c)
 *     RtlpFcValidateFeatureConfigurationBuffer @ 0x1405CD940 (RtlpFcValidateFeatureConfigurationBuffer.c)
 *     RtlpFcValidateFeatureUsageSubscriptionBuffer @ 0x1405CDA0C (RtlpFcValidateFeatureUsageSubscriptionBuffer.c)
 *     PnpAllocatePWSTR @ 0x140640358 (PnpAllocatePWSTR.c)
 *     PnpConcatPWSTR @ 0x140647040 (PnpConcatPWSTR.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x14067C388 (MiCaptureAllocateMapExtendedParameters.c)
 *     MiCaptureSectionCreateExtendedParameters @ 0x140680140 (MiCaptureSectionCreateExtendedParameters.c)
 *     PnpCopyDevPropertyArray @ 0x1407473E0 (PnpCopyDevPropertyArray.c)
 *     PnpAllocateMultiSZ @ 0x140747620 (PnpAllocateMultiSZ.c)
 *     SdbpResolveMatchingFile @ 0x14074CD7C (SdbpResolveMatchingFile.c)
 *     WmipBuildInstanceSet @ 0x14074FE08 (WmipBuildInstanceSet.c)
 *     AslStringDuplicate @ 0x140753A78 (AslStringDuplicate.c)
 *     PopBootStatSet @ 0x14077B488 (PopBootStatSet.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x1407A3FE4 (RtlpMuiRegGetOrAddStringToPool.c)
 *     PopFxConvertV1Components @ 0x1407B0B0C (PopFxConvertV1Components.c)
 *     PopBootStatGet @ 0x1407BCD30 (PopBootStatGet.c)
 *     PpmRegisterProfiles @ 0x1407C1468 (PpmRegisterProfiles.c)
 *     PopFxPepPerfInfoQuery @ 0x1408E796C (PopFxPepPerfInfoQuery.c)
 *     PopFxRegisterComponentPerfStates @ 0x1408E7B84 (PopFxRegisterComponentPerfStates.c)
 *     PopReadResumeContext @ 0x1408E9948 (PopReadResumeContext.c)
 *     PopBootStatCheckIntegrity @ 0x1408F4B18 (PopBootStatCheckIntegrity.c)
 *     RtlpFcCalculateRequiredSizeForNewFeatureTable @ 0x14091C568 (RtlpFcCalculateRequiredSizeForNewFeatureTable.c)
 *     RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable @ 0x14091C6D0 (RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable.c)
 *     AuthzBasepCopyoutClaimAttributes @ 0x14096F334 (AuthzBasepCopyoutClaimAttributes.c)
 *     AuthzBasepGetClaimAttributeValueCopyoutBufferSize @ 0x14096F4CC (AuthzBasepGetClaimAttributeValueCopyoutBufferSize.c)
 *     AuthzBasepGetClaimAttributesCopyoutBufferSize @ 0x14096F6B8 (AuthzBasepGetClaimAttributesCopyoutBufferSize.c)
 *     PopQpcTimeInMs @ 0x140993634 (PopQpcTimeInMs.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x1409B5234 (PopDiagTraceFirmwareS3Stats.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F7784 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x1409FA1B0 (AnFwpBackgroundUpdateTimer.c)
 *     InitBootProcessor @ 0x140A3CF64 (InitBootProcessor.c)
 *     GetBootSystemTime @ 0x140A748AC (GetBootSystemTime.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongLongMult(ULONGLONG ullMultiplicand, ULONGLONG ullMultiplier, ULONGLONG *pullResult)
{
  NTSTATUS v3; // r9d

  v3 = 0;
  if ( is_mul_ok(ullMultiplicand, ullMultiplier) )
  {
    *pullResult = ullMultiplicand * ullMultiplier;
  }
  else
  {
    *pullResult = -1LL;
    return -1073741675;
  }
  return v3;
}
