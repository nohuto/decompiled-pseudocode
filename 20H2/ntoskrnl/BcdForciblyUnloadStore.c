/*
 * XREFs of BcdForciblyUnloadStore @ 0x140775328
 * Callers:
 *     PopAllocateHiberContext @ 0x140773C94 (PopAllocateHiberContext.c)
 *     BiCleanupLoadedStores @ 0x14077E2C8 (BiCleanupLoadedStores.c)
 * Callees:
 *     BiIsSynchFirmwareEntries @ 0x14039ABB8 (BiIsSynchFirmwareEntries.c)
 *     BiIsOfflineHandle @ 0x14039ACD0 (BiIsOfflineHandle.c)
 *     BiUnloadHiveByHandle @ 0x1407753BC (BiUnloadHiveByHandle.c)
 *     BiExportStoreAlterationsToFirmware @ 0x14077555C (BiExportStoreAlterationsToFirmware.c)
 *     BiIsSystemStore @ 0x14077F5C8 (BiIsSystemStore.c)
 *     BiReleaseBcdSyncMutant @ 0x140780994 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140780B58 (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x140780FBC (BiLogMessage.c)
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
