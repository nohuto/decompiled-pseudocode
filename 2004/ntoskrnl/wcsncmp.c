/*
 * XREFs of wcsncmp @ 0x1403D0A40
 * Callers:
 *     LdrpCompareResourceNamesWithValidation @ 0x1403F2468 (LdrpCompareResourceNamesWithValidation.c)
 *     HalpInsertProfileSource @ 0x1404B9F20 (HalpInsertProfileSource.c)
 *     EtwpApplyPredicate @ 0x1405AC0A4 (EtwpApplyPredicate.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x1406052FC (PfSnFindPrefetchVolumeInfoInList.c)
 *     LdrpResCompareResourceNames @ 0x14065BF1C (LdrpResCompareResourceNames.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140714464 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     AslPathClean @ 0x14073EB50 (AslPathClean.c)
 *     WmipFindISinGEbyName @ 0x1407429B8 (WmipFindISinGEbyName.c)
 *     pIoQueryBusDescription @ 0x140778D24 (pIoQueryBusDescription.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1408E10E0 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x1408E25CC (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopProcessWakeSourceWork @ 0x1408E3524 (PopProcessWakeSourceWork.c)
 *     PopWakeSourceIsParent @ 0x1408E37B8 (PopWakeSourceIsParent.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1409375A8 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     AslPathCleanUstr @ 0x140964EC4 (AslPathCleanUstr.c)
 *     AslPathWildcardFindFirst @ 0x14096549C (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardMakeLeaves @ 0x140966948 (AslpPathWildcardMakeLeaves.c)
 *     HalpDeviceEquals @ 0x1409B2F68 (HalpDeviceEquals.c)
 *     HalpFindDevice @ 0x1409B3158 (HalpFindDevice.c)
 *     ExpWatchProductTypeInitialization @ 0x140A43A08 (ExpWatchProductTypeInitialization.c)
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
