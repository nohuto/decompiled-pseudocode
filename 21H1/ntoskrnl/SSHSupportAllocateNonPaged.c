/*
 * XREFs of SSHSupportAllocateNonPaged @ 0x1402CBBF8
 * Callers:
 *     SmKmStoreAdd @ 0x140654D0C (SmKmStoreAdd.c)
 *     SmProcessCreateRequest @ 0x140654FB0 (SmProcessCreateRequest.c)
 *     SmKmStoreCreatePrepare @ 0x140655858 (SmKmStoreCreatePrepare.c)
 *     SmpKeyedStoreCreate @ 0x1406559F4 (SmpKeyedStoreCreate.c)
 *     SmStoreSetProcessVaRanges @ 0x140655AD8 (SmStoreSetProcessVaRanges.c)
 *     SleepstudyHelperBuildBlocker @ 0x1406E2A60 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperCreateLibrary @ 0x1407B7310 (SleepstudyHelperCreateLibrary.c)
 *     SleepstudyHelperCreateBlockerData @ 0x1408F7110 (SleepstudyHelperCreateBlockerData.c)
 *     SmProcessListRequest @ 0x1409252DC (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x140925790 (SmProcessStatsRequest.c)
 *     SmcProcessCreateRequest @ 0x140925F38 (SmcProcessCreateRequest.c)
 *     SmKmFileInfoDuplicate @ 0x140926A74 (SmKmFileInfoDuplicate.c)
 *     SmKmKeyGenNewKey @ 0x1409271CC (SmKmKeyGenNewKey.c)
 *     SmKmKeyGenStart @ 0x1409273C8 (SmKmKeyGenStart.c)
 *     SmKmStoreFileWriteHeader @ 0x1409285CC (SmKmStoreFileWriteHeader.c)
 *     SmCrEncStart @ 0x140928888 (SmCrEncStart.c)
 *     SmcStoreCreate @ 0x1409292A8 (SmcStoreCreate.c)
 *     SmcStoreResize @ 0x1409297D0 (SmcStoreResize.c)
 *     SmcStoreSlotReserve @ 0x140929BB8 (SmcStoreSlotReserve.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SSHSupportAllocateNonPaged(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, Tag);
}
