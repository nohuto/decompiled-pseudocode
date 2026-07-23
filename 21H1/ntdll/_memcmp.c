/*
 * XREFs of _memcmp @ 0x4B2F8860
 * Callers:
 *     _LdrpCompareServiceChecksum@8 @ 0x4B2AA440 (_LdrpCompareServiceChecksum@8.c)
 *     _RtlpSearchProtectedPolicyEntry @ 0x4B2AB5C0 (_RtlpSearchProtectedPolicyEntry.c)
 *     _EtwpFindGuidEntry@4 @ 0x4B2ADC68 (_EtwpFindGuidEntry@4.c)
 *     _EtwDeliverDataBlock@4 @ 0x4B2AE4B0 (_EtwDeliverDataBlock@4.c)
 *     _LdrpDetectDetour@0 @ 0x4B2AEB06 (_LdrpDetectDetour@0.c)
 *     _EtwpRegisterProvider@12 @ 0x4B2B0C39 (_EtwpRegisterProvider@12.c)
 *     _TppCallbackCheckThreadAfterCallback@4 @ 0x4B2B638B (_TppCallbackCheckThreadAfterCallback@4.c)
 *     _RtlSetThreadWorkOnBehalfTicket@4 @ 0x4B2B7140 (_RtlSetThreadWorkOnBehalfTicket@4.c)
 *     _SbpUpdateCache@16 @ 0x4B2B8498 (_SbpUpdateCache@16.c)
 *     _SbpFindMatchingContext@8 @ 0x4B2B8620 (_SbpFindMatchingContext@8.c)
 *     _LdrpVerifyAlternateResourceModuleEx@24 @ 0x4B2B874D (_LdrpVerifyAlternateResourceModuleEx@24.c)
 *     _SbUpdateSwitchContextBasedOnDll@12 @ 0x4B2B989E (_SbUpdateSwitchContextBasedOnDll@12.c)
 *     _SbGetContextDetailsByGuid@8 @ 0x4B2B9A35 (_SbGetContextDetailsByGuid@8.c)
 *     _EtwNotificationRegister@20 @ 0x4B2C1950 (_EtwNotificationRegister@20.c)
 *     _EtwpRegistrationCompare@8 @ 0x4B2C1ADC (_EtwpRegistrationCompare@8.c)
 *     _RtlpLocateActivationContextSection@20 @ 0x4B2CA5C0 (_RtlpLocateActivationContextSection@20.c)
 *     _LdrpFindLoadedDllByMappingLockHeld@16 @ 0x4B2CD468 (_LdrpFindLoadedDllByMappingLockHeld@16.c)
 *     _RtlAddMandatoryAce@24 @ 0x4B2D66E0 (_RtlAddMandatoryAce@24.c)
 *     _RtlEqualPrefixSid@8 @ 0x4B2D8300 (_RtlEqualPrefixSid@8.c)
 *     _RtlEqualSid@8 @ 0x4B2D85D0 (_RtlEqualSid@8.c)
 *     _RtlpCopyAces@56 @ 0x4B2D886D (_RtlpCopyAces@56.c)
 *     _RtlpValidFilterAclSubjectContext@8 @ 0x4B2D8C55 (_RtlpValidFilterAclSubjectContext@8.c)
 *     _RtlSidDominates@12 @ 0x4B2D9420 (_RtlSidDominates@12.c)
 *     _RtlFindUnicodeSubstring@12 @ 0x4B2E61F0 (_RtlFindUnicodeSubstring@12.c)
 *     _RtlClearThreadWorkOnBehalfTicket@0 @ 0x4B2E6710 (_RtlClearThreadWorkOnBehalfTicket@0.c)
 *     _RtlpCheckDynamicTimeZoneInformation@8 @ 0x4B2EAAF0 (_RtlpCheckDynamicTimeZoneInformation@8.c)
 *     _EtwpValidateLoggerInfo@4 @ 0x4B2F0042 (_EtwpValidateLoggerInfo@4.c)
 *     _EtwpGuidEntryCompare@8 @ 0x4B2F1D5B (_EtwpGuidEntryCompare@8.c)
 *     _LdrpResCompareServiceChecksum@16 @ 0x4B342FDE (_LdrpResCompareServiceChecksum@16.c)
 *     _RtlIsValidProcessTrustLabelSid@4 @ 0x4B3466F0 (_RtlIsValidProcessTrustLabelSid@4.c)
 *     _RtlReplaceSidInSd@16 @ 0x4B346EC0 (_RtlReplaceSidInSd@16.c)
 *     _RtlSidEqualLevel@12 @ 0x4B347310 (_RtlSidEqualLevel@12.c)
 *     _RtlSidHashLookup@8 @ 0x4B347420 (_RtlSidHashLookup@8.c)
 *     _RtlSidIsHigherLevel@12 @ 0x4B347530 (_RtlSidIsHigherLevel@12.c)
 *     _RtlpGuidPresentInGuidList@12 @ 0x4B34906E (_RtlpGuidPresentInGuidList@12.c)
 *     _RtlAddAccessFilterAce@32 @ 0x4B34AD40 (_RtlAddAccessFilterAce@32.c)
 *     _RtlAddResourceAttributeAce@28 @ 0x4B34B260 (_RtlAddResourceAttributeAce@28.c)
 *     _RtlAddScopedPolicyIDAce@20 @ 0x4B34B5F0 (_RtlAddScopedPolicyIDAce@20.c)
 *     _RtlpIsAttributeAceInSacl@16 @ 0x4B34C479 (_RtlpIsAttributeAceInSacl@16.c)
 *     _RtlpIsNameInExpressionPrivate@20 @ 0x4B361483 (_RtlpIsNameInExpressionPrivate@20.c)
 *     _RtlpHpTagContextGetTag@8 @ 0x4B36FF45 (_RtlpHpTagContextGetTag@8.c)
 *     _RtlpHpTagMappingComparison@8 @ 0x4B3701EA (_RtlpHpTagMappingComparison@8.c)
 *     _EtwEnumerateProcessRegGuids@12 @ 0x4B3802E0 (_EtwEnumerateProcessRegGuids@12.c)
 *     _EtwpGenerateFileName@12 @ 0x4B382A61 (_EtwpGenerateFileName@12.c)
 *     _EtwpTrackBinaryForSession@12 @ 0x4B382FA7 (_EtwpTrackBinaryForSession@12.c)
 *     _RtlpStackDbEntryIsEqual@8 @ 0x4B38AA48 (_RtlpStackDbEntryIsEqual@8.c)
 *     _RtlpStackDbSegmentComparitor@8 @ 0x4B38AB02 (_RtlpStackDbSegmentComparitor@8.c)
 * Callees:
 *     <none>
 */

int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  unsigned int i; // ecx
  int v6; // esi

  for ( i = Size; i >= 4; i -= 4 )
  {
    if ( *(_DWORD *)Buf1 != *(_DWORD *)Buf2 )
    {
      i = 4;
      break;
    }
    Buf1 = (char *)Buf1 + 4;
    Buf2 = (char *)Buf2 + 4;
  }
  if ( !i )
    return 0;
  v6 = (_BYTE *)Buf2 - (_BYTE *)Buf1;
  while ( *(_BYTE *)Buf1 >= *((_BYTE *)Buf1 + v6) )
  {
    if ( *(_BYTE *)Buf1 > *((_BYTE *)Buf1 + v6) )
      return 1;
    Buf1 = (char *)Buf1 + 1;
    if ( !--i )
      return 0;
  }
  return -1;
}
