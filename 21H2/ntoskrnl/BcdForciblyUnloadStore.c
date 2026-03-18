/*
 * XREFs of BcdForciblyUnloadStore @ 0x1408072C0
 * Callers:
 *     PopAllocateHiberContext @ 0x140802068 (PopAllocateHiberContext.c)
 *     BiCleanupLoadedStores @ 0x140811F10 (BiCleanupLoadedStores.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x1403A7864 (BiIsOfflineHandle.c)
 *     BiIsSynchFirmwareEntries @ 0x1403A78AC (BiIsSynchFirmwareEntries.c)
 *     BiUnloadHiveByHandle @ 0x140807354 (BiUnloadHiveByHandle.c)
 *     BiExportStoreAlterationsToFirmware @ 0x1408074F4 (BiExportStoreAlterationsToFirmware.c)
 *     BiIsSystemStore @ 0x1408127B8 (BiIsSystemStore.c)
 *     BiReleaseBcdSyncMutant @ 0x1408134D8 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14081369C (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1408138F0 (BiLogMessage.c)
 */

__int64 __fastcall BcdForciblyUnloadStore(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // si
  int v4; // eax
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v11; // r8d

  LOBYTE(v2) = BiIsOfflineHandle(a1);
  v3 = v2;
  v4 = BiAcquireBcdSyncMutant(v2);
  if ( v4 < 0 )
  {
    BiLogMessage(4LL, L"BcdForciblyUnloadStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v4);
    return v11;
  }
  else
  {
    v6 = 0;
    if ( (unsigned __int8)BiIsSystemStore(a1, v5, (unsigned int)v4) && BiIsSynchFirmwareEntries(a1) )
    {
      BiLogMessage(2LL, L"Exporting forcible unload to firmware");
      v6 = BiExportStoreAlterationsToFirmware(a1);
    }
    LOBYTE(v7) = 1;
    v8 = BiUnloadHiveByHandle(a1, v7);
    if ( v6 < 0 )
      BiLogMessage(4LL, L"Failed to export unload alterations to firmware. Status: %x", (unsigned int)v6);
    else
      v6 = v8;
    LOBYTE(v9) = v3;
    BiReleaseBcdSyncMutant(v9);
    return (unsigned int)v6;
  }
}
