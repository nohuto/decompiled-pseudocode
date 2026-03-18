/*
 * XREFs of wcsncmp @ 0x1403D36D0
 * Callers:
 *     LdrpCompareResourceNamesWithValidation @ 0x1403F6A98 (LdrpCompareResourceNamesWithValidation.c)
 *     HalpInsertProfileSource @ 0x1404BD440 (HalpInsertProfileSource.c)
 *     EtwpApplyPredicate @ 0x1405AFC04 (EtwpApplyPredicate.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x14063441C (PfSnFindPrefetchVolumeInfoInList.c)
 *     LdrpResCompareResourceNames @ 0x1406AF3DC (LdrpResCompareResourceNames.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1407226DC (DrvDbSetDeviceIdDriverInfMatches.c)
 *     AslPathClean @ 0x14074D734 (AslPathClean.c)
 *     WmipFindISinGEbyName @ 0x140751598 (WmipFindISinGEbyName.c)
 *     pIoQueryBusDescription @ 0x140787324 (pIoQueryBusDescription.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1408E6F20 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x1408E840C (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopProcessWakeSourceWork @ 0x1408E9364 (PopProcessWakeSourceWork.c)
 *     PopWakeSourceIsParent @ 0x1408E95F8 (PopWakeSourceIsParent.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x14093D3D8 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     AslPathCleanUstr @ 0x14096AC94 (AslPathCleanUstr.c)
 *     AslPathWildcardFindFirst @ 0x14096B26C (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardMakeLeaves @ 0x14096C718 (AslpPathWildcardMakeLeaves.c)
 *     HalpDeviceEquals @ 0x1409B8F68 (HalpDeviceEquals.c)
 *     HalpFindDevice @ 0x1409B9158 (HalpFindDevice.c)
 *     ExpWatchProductTypeInitialization @ 0x140A49CA8 (ExpWatchProductTypeInitialization.c)
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
