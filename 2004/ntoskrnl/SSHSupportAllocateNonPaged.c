/*
 * XREFs of SSHSupportAllocateNonPaged @ 0x14030D838
 * Callers:
 *     SmKmStoreAdd @ 0x1406CF36C (SmKmStoreAdd.c)
 *     SmProcessCreateRequest @ 0x1406CF610 (SmProcessCreateRequest.c)
 *     SmKmStoreCreatePrepare @ 0x1406CFEB8 (SmKmStoreCreatePrepare.c)
 *     SmpKeyedStoreCreate @ 0x1406D0054 (SmpKeyedStoreCreate.c)
 *     SmStoreSetProcessVaRanges @ 0x1406D0138 (SmStoreSetProcessVaRanges.c)
 *     SleepstudyHelperBuildBlocker @ 0x1407061B0 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperCreateLibrary @ 0x1407BA480 (SleepstudyHelperCreateLibrary.c)
 *     SleepstudyHelperCreateBlockerData @ 0x1408F8400 (SleepstudyHelperCreateBlockerData.c)
 *     SmProcessListRequest @ 0x14092658C (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x140926A40 (SmProcessStatsRequest.c)
 *     SmcProcessCreateRequest @ 0x1409271E8 (SmcProcessCreateRequest.c)
 *     SmKmFileInfoDuplicate @ 0x140927D24 (SmKmFileInfoDuplicate.c)
 *     SmKmKeyGenNewKey @ 0x14092847C (SmKmKeyGenNewKey.c)
 *     SmKmKeyGenStart @ 0x140928678 (SmKmKeyGenStart.c)
 *     SmKmStoreFileWriteHeader @ 0x14092987C (SmKmStoreFileWriteHeader.c)
 *     SmCrEncStart @ 0x140929B38 (SmCrEncStart.c)
 *     SmcStoreCreate @ 0x14092A558 (SmcStoreCreate.c)
 *     SmcStoreResize @ 0x14092AA80 (SmcStoreResize.c)
 *     SmcStoreSlotReserve @ 0x14092AE68 (SmcStoreSlotReserve.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SSHSupportAllocateNonPaged(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, Tag);
}
