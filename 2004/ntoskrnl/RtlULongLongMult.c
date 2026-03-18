/*
 * XREFs of RtlULongLongMult @ 0x1402FE7AC
 * Callers:
 *     RtlCreateAtomTableEx @ 0x140201810 (RtlCreateAtomTableEx.c)
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x1402963A0 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     PpmConvertTime @ 0x14029857C (PpmConvertTime.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x1402FE090 (AuthzBasepCopyoutSecurityAttributes.c)
 *     HalpSetTimer @ 0x1402FE504 (HalpSetTimer.c)
 *     AuthzBasepGetSecurityAttributeValueCopyoutBufferSize @ 0x1402FE6D0 (AuthzBasepGetSecurityAttributeValueCopyoutBufferSize.c)
 *     SepCaptureTokenSecurityOperations @ 0x1402FE830 (SepCaptureTokenSecurityOperations.c)
 *     EmpEvaluateNodeLink @ 0x140372038 (EmpEvaluateNodeLink.c)
 *     HalpSetResumeTime @ 0x140383824 (HalpSetResumeTime.c)
 *     RtlpHpVaMgrCtxStart @ 0x14039AAC8 (RtlpHpVaMgrCtxStart.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403CB25C (HalpTimerSchedulePeriodicQueries.c)
 *     HalpTimerConvertAuxiliaryCounter @ 0x1404B1730 (HalpTimerConvertAuxiliaryCounter.c)
 *     HalpTimerConvertAuxiliaryCounterToPerformanceCounter @ 0x1404B1830 (HalpTimerConvertAuxiliaryCounterToPerformanceCounter.c)
 *     HalpTimerConvertPerformanceCounterToAuxiliaryCounter @ 0x1404B1960 (HalpTimerConvertPerformanceCounterToAuxiliaryCounter.c)
 *     HalpArtQueryCounter @ 0x1404D0DC0 (HalpArtQueryCounter.c)
 *     EtwpGetDurationSince @ 0x1405A35A4 (EtwpGetDurationSince.c)
 *     RtlpFcValidateFeatureConfigurationBuffer @ 0x1405C8544 (RtlpFcValidateFeatureConfigurationBuffer.c)
 *     RtlpFcValidateFeatureUsageSubscriptionBuffer @ 0x1405C8610 (RtlpFcValidateFeatureUsageSubscriptionBuffer.c)
 *     PnpAllocatePWSTR @ 0x1405DBA78 (PnpAllocatePWSTR.c)
 *     MiCaptureSectionCreateExtendedParameters @ 0x1405FBBE0 (MiCaptureSectionCreateExtendedParameters.c)
 *     PnpConcatPWSTR @ 0x140645A50 (PnpConcatPWSTR.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x1406B6D58 (MiCaptureAllocateMapExtendedParameters.c)
 *     PnpCopyDevPropertyArray @ 0x1407384D0 (PnpCopyDevPropertyArray.c)
 *     PnpAllocateMultiSZ @ 0x140738710 (PnpAllocateMultiSZ.c)
 *     SdbpResolveMatchingFile @ 0x14073E198 (SdbpResolveMatchingFile.c)
 *     WmipBuildInstanceSet @ 0x140741228 (WmipBuildInstanceSet.c)
 *     AslStringDuplicate @ 0x140744E98 (AslStringDuplicate.c)
 *     PopBootStatSet @ 0x14076CA58 (PopBootStatSet.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x14078ACD4 (RtlpMuiRegGetOrAddStringToPool.c)
 *     PopFxConvertV1Components @ 0x1407A17DC (PopFxConvertV1Components.c)
 *     PopBootStatGet @ 0x1407AEDF0 (PopBootStatGet.c)
 *     PpmRegisterProfiles @ 0x1407B3518 (PpmRegisterProfiles.c)
 *     PopFxPepPerfInfoQuery @ 0x1408E1B2C (PopFxPepPerfInfoQuery.c)
 *     PopFxRegisterComponentPerfStates @ 0x1408E1D44 (PopFxRegisterComponentPerfStates.c)
 *     PopReadResumeContext @ 0x1408E3D34 (PopReadResumeContext.c)
 *     PopBootStatCheckIntegrity @ 0x1408EEF08 (PopBootStatCheckIntegrity.c)
 *     RtlpFcCalculateRequiredSizeForNewFeatureTable @ 0x140916938 (RtlpFcCalculateRequiredSizeForNewFeatureTable.c)
 *     RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable @ 0x140916AA0 (RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable.c)
 *     AuthzBasepCopyoutClaimAttributes @ 0x140969564 (AuthzBasepCopyoutClaimAttributes.c)
 *     AuthzBasepGetClaimAttributeValueCopyoutBufferSize @ 0x1409696FC (AuthzBasepGetClaimAttributeValueCopyoutBufferSize.c)
 *     AuthzBasepGetClaimAttributesCopyoutBufferSize @ 0x1409698E8 (AuthzBasepGetClaimAttributesCopyoutBufferSize.c)
 *     PopQpcTimeInMs @ 0x14098D644 (PopQpcTimeInMs.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x1409AF2C4 (PopDiagTraceFirmwareS3Stats.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F1784 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x1409F41B0 (AnFwpBackgroundUpdateTimer.c)
 *     InitBootProcessor @ 0x140A36F64 (InitBootProcessor.c)
 *     GetBootSystemTime @ 0x140A6E0CC (GetBootSystemTime.c)
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
