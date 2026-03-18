/*
 * XREFs of wcsncmp @ 0x1403CFC00
 * Callers:
 *     LdrpCompareResourceNamesWithValidation @ 0x1403F1108 (LdrpCompareResourceNamesWithValidation.c)
 *     HalpInsertProfileSource @ 0x1404B9840 (HalpInsertProfileSource.c)
 *     EtwpApplyPredicate @ 0x1405AB9B4 (EtwpApplyPredicate.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x14063A33C (PfSnFindPrefetchVolumeInfoInList.c)
 *     LdrpResCompareResourceNames @ 0x1406FBD5C (LdrpResCompareResourceNames.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1407125B4 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     AslPathClean @ 0x14073CFD0 (AslPathClean.c)
 *     WmipFindISinGEbyName @ 0x140740E38 (WmipFindISinGEbyName.c)
 *     pIoQueryBusDescription @ 0x140776914 (pIoQueryBusDescription.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1408DFE60 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x1408E134C (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopProcessWakeSourceWork @ 0x1408E22A4 (PopProcessWakeSourceWork.c)
 *     PopWakeSourceIsParent @ 0x1408E2538 (PopWakeSourceIsParent.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x140936308 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     AslPathCleanUstr @ 0x140963B24 (AslPathCleanUstr.c)
 *     AslPathWildcardFindFirst @ 0x1409640FC (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardMakeLeaves @ 0x1409655A8 (AslpPathWildcardMakeLeaves.c)
 *     HalpDeviceEquals @ 0x1409B2F68 (HalpDeviceEquals.c)
 *     HalpFindDevice @ 0x1409B3158 (HalpFindDevice.c)
 *     ExpWatchProductTypeInitialization @ 0x140A3E1A4 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsncmp(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  if ( !MaxCount )
    return 0;
  while ( --MaxCount && *Str1 && *Str1 == *Str2 )
  {
    ++Str1;
    ++Str2;
  }
  return *Str1 - *Str2;
}
