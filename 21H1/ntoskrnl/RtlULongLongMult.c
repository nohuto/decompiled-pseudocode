/*
 * XREFs of RtlULongLongMult @ 0x1402C1CCC
 * Callers:
 *     PpmConvertTime @ 0x140205BBC (PpmConvertTime.c)
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x140259B20 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x1402C15B0 (AuthzBasepCopyoutSecurityAttributes.c)
 *     HalpSetTimer @ 0x1402C1A24 (HalpSetTimer.c)
 *     AuthzBasepGetSecurityAttributeValueCopyoutBufferSize @ 0x1402C1BF0 (AuthzBasepGetSecurityAttributeValueCopyoutBufferSize.c)
 *     SepCaptureTokenSecurityOperations @ 0x1402C2310 (SepCaptureTokenSecurityOperations.c)
 *     RtlCreateAtomTableEx @ 0x1402E50E0 (RtlCreateAtomTableEx.c)
 *     EmpEvaluateNodeLink @ 0x14037122C (EmpEvaluateNodeLink.c)
 *     HalpSetResumeTime @ 0x140382FE4 (HalpSetResumeTime.c)
 *     RtlpHpVaMgrCtxStart @ 0x14039A338 (RtlpHpVaMgrCtxStart.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403CA47C (HalpTimerSchedulePeriodicQueries.c)
 *     HalpTimerConvertAuxiliaryCounter @ 0x1404B1074 (HalpTimerConvertAuxiliaryCounter.c)
 *     HalpTimerConvertAuxiliaryCounterToPerformanceCounter @ 0x1404B1170 (HalpTimerConvertAuxiliaryCounterToPerformanceCounter.c)
 *     HalpTimerConvertPerformanceCounterToAuxiliaryCounter @ 0x1404B12A0 (HalpTimerConvertPerformanceCounterToAuxiliaryCounter.c)
 *     HalpArtQueryCounter @ 0x1404D0910 (HalpArtQueryCounter.c)
 *     EtwpGetDurationSince @ 0x1405A2EB4 (EtwpGetDurationSince.c)
 *     RtlpFcValidateFeatureConfigurationBuffer @ 0x1405C7524 (RtlpFcValidateFeatureConfigurationBuffer.c)
 *     RtlpFcValidateFeatureUsageSubscriptionBuffer @ 0x1405C75F0 (RtlpFcValidateFeatureUsageSubscriptionBuffer.c)
 *     MiCaptureSectionCreateExtendedParameters @ 0x140630C20 (MiCaptureSectionCreateExtendedParameters.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x14064DD78 (MiCaptureAllocateMapExtendedParameters.c)
 *     PnpConcatPWSTR @ 0x140680BB8 (PnpConcatPWSTR.c)
 *     PnpAllocatePWSTR @ 0x1406AA0A8 (PnpAllocatePWSTR.c)
 *     SdbpResolveMatchingFile @ 0x14073C618 (SdbpResolveMatchingFile.c)
 *     WmipBuildInstanceSet @ 0x14073F6A8 (WmipBuildInstanceSet.c)
 *     AslStringDuplicate @ 0x140743318 (AslStringDuplicate.c)
 *     PnpCopyDevPropertyArray @ 0x140753D3C (PnpCopyDevPropertyArray.c)
 *     PnpAllocateMultiSZ @ 0x140753F7C (PnpAllocateMultiSZ.c)
 *     PopBootStatSet @ 0x14076A2B4 (PopBootStatSet.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x140794F04 (RtlpMuiRegGetOrAddStringToPool.c)
 *     PopFxConvertV1Components @ 0x14079D7FC (PopFxConvertV1Components.c)
 *     PopBootStatGet @ 0x1407ABC90 (PopBootStatGet.c)
 *     PpmRegisterProfiles @ 0x1407B03A8 (PpmRegisterProfiles.c)
 *     PopFxPepPerfInfoQuery @ 0x1408E08AC (PopFxPepPerfInfoQuery.c)
 *     PopFxRegisterComponentPerfStates @ 0x1408E0AC4 (PopFxRegisterComponentPerfStates.c)
 *     PopReadResumeContext @ 0x1408E2AB4 (PopReadResumeContext.c)
 *     PopBootStatCheckIntegrity @ 0x1408EDC18 (PopBootStatCheckIntegrity.c)
 *     RtlpFcCalculateRequiredSizeForNewFeatureTable @ 0x1409156C8 (RtlpFcCalculateRequiredSizeForNewFeatureTable.c)
 *     RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable @ 0x140915830 (RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable.c)
 *     AuthzBasepCopyoutClaimAttributes @ 0x1409681C4 (AuthzBasepCopyoutClaimAttributes.c)
 *     AuthzBasepGetClaimAttributeValueCopyoutBufferSize @ 0x14096835C (AuthzBasepGetClaimAttributeValueCopyoutBufferSize.c)
 *     AuthzBasepGetClaimAttributesCopyoutBufferSize @ 0x140968548 (AuthzBasepGetClaimAttributesCopyoutBufferSize.c)
 *     PopQpcTimeInMs @ 0x14098CE2C (PopQpcTimeInMs.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x1409AE464 (PopDiagTraceFirmwareS3Stats.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F1784 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x1409F41B0 (AnFwpBackgroundUpdateTimer.c)
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 *     GetBootSystemTime @ 0x140A6DA24 (GetBootSystemTime.c)
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
