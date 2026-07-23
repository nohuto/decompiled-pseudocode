/*
 * XREFs of BcdForciblyUnloadStore @ 0x1407662F8
 * Callers:
 *     PopAllocateHiberContext @ 0x140764C64 (PopAllocateHiberContext.c)
 *     BiCleanupLoadedStores @ 0x14076FCC8 (BiCleanupLoadedStores.c)
 * Callees:
 *     BiIsSynchFirmwareEntries @ 0x1403986F8 (BiIsSynchFirmwareEntries.c)
 *     BiIsOfflineHandle @ 0x140398810 (BiIsOfflineHandle.c)
 *     BiUnloadHiveByHandle @ 0x14076638C (BiUnloadHiveByHandle.c)
 *     BiExportStoreAlterationsToFirmware @ 0x14076652C (BiExportStoreAlterationsToFirmware.c)
 *     BiIsSystemStore @ 0x140770FC8 (BiIsSystemStore.c)
 *     BiReleaseBcdSyncMutant @ 0x140772394 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140772558 (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1407729BC (BiLogMessage.c)
 */

NTSTATUS __cdecl BcdForciblyUnloadStore(HANDLE BcdStoreHandle)
{
  __int64 v2; // rcx
  char v3; // si
  int v4; // eax
  __int64 v5; // rdx
  NTSTATUS v6; // ebx
  __int64 v7; // rdx
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  NTSTATUS v11; // r8d

  LOBYTE(v2) = BiIsOfflineHandle((char)BcdStoreHandle);
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
    if ( (unsigned __int8)BiIsSystemStore(BcdStoreHandle, v5, (unsigned int)v4)
      && BiIsSynchFirmwareEntries((char)BcdStoreHandle) )
    {
      BiLogMessage(2LL, L"Exporting forcible unload to firmware");
      v6 = BiExportStoreAlterationsToFirmware(BcdStoreHandle);
    }
    LOBYTE(v7) = 1;
    v8 = BiUnloadHiveByHandle(BcdStoreHandle, v7);
    if ( v6 < 0 )
      BiLogMessage(4LL, L"Failed to export unload alterations to firmware. Status: %x", (unsigned int)v6);
    else
      v6 = v8;
    LOBYTE(v9) = v3;
    BiReleaseBcdSyncMutant(v9);
    return v6;
  }
}
