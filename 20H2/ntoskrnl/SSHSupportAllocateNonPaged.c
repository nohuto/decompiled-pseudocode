/*
 * XREFs of SSHSupportAllocateNonPaged @ 0x140328734
 * Callers:
 *     SleepstudyHelperBuildBlocker @ 0x1406D91A0 (SleepstudyHelperBuildBlocker.c)
 *     SmProcessCreateRequest @ 0x1406EE310 (SmProcessCreateRequest.c)
 *     SmKmStoreAdd @ 0x1406EE678 (SmKmStoreAdd.c)
 *     SmKmStoreCreatePrepare @ 0x1406F04B0 (SmKmStoreCreatePrepare.c)
 *     SmpKeyedStoreCreate @ 0x1406F064C (SmpKeyedStoreCreate.c)
 *     SmStoreSetProcessVaRanges @ 0x1406F0730 (SmStoreSetProcessVaRanges.c)
 *     SleepstudyHelperCreateLibrary @ 0x1407C8D10 (SleepstudyHelperCreateLibrary.c)
 *     SleepstudyHelperCreateBlockerData @ 0x1408FE010 (SleepstudyHelperCreateBlockerData.c)
 *     SmProcessListRequest @ 0x14092C3B4 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x14092C868 (SmProcessStatsRequest.c)
 *     SmcProcessCreateRequest @ 0x14092D010 (SmcProcessCreateRequest.c)
 *     SmKmFileInfoDuplicate @ 0x14092DB4C (SmKmFileInfoDuplicate.c)
 *     SmKmKeyGenNewKey @ 0x14092E2A4 (SmKmKeyGenNewKey.c)
 *     SmKmKeyGenStart @ 0x14092E4A0 (SmKmKeyGenStart.c)
 *     SmKmStoreFileWriteHeader @ 0x14092F6A4 (SmKmStoreFileWriteHeader.c)
 *     SmCrEncStart @ 0x14092F960 (SmCrEncStart.c)
 *     SmcStoreCreate @ 0x140930380 (SmcStoreCreate.c)
 *     SmcStoreResize @ 0x1409308A8 (SmcStoreResize.c)
 *     SmcStoreSlotReserve @ 0x140930C90 (SmcStoreSlotReserve.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SSHSupportAllocateNonPaged(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, Tag);
}
