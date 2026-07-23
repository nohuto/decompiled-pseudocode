/*
 * XREFs of BcdOpenStore @ 0x14076E658
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1405B6A80 (WheaPersistBadPageToBcd.c)
 *     PopFreeHiberContext @ 0x14075F980 (PopFreeHiberContext.c)
 *     PopBcdOpen @ 0x1408F1184 (PopBcdOpen.c)
 * Callees:
 *     BiOpenSystemStore @ 0x14076F02C (BiOpenSystemStore.c)
 *     BiReleaseBcdSyncMutant @ 0x14076FF84 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140770148 (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1407705AC (BiLogMessage.c)
 */

NTSTATUS __cdecl BcdOpenStore(UNICODE_STRING *BcdFilePath, BCD_OPEN_FLAGS BcdOpenFlags, PHANDLE BcdStoreHandle)
{
  char v3; // di
  __int32 v6; // esi
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // r9d
  int v10; // eax
  NTSTATUS v11; // ebx
  NTSTATUS v13; // r10d

  v3 = BcdOpenFlags & 1;
  LOBYTE(BcdFilePath) = BcdOpenFlags & 1;
  v6 = BcdOpenFlags & 2;
  v7 = BiAcquireBcdSyncMutant(BcdFilePath);
  if ( v7 < 0 )
  {
    BiLogMessage(
      4LL,
      L"BcdOpenStore: Failed to acquire BCD sync Mutant. Store: %wsFlags: 0x%x Status: %x",
      L"NULL",
      (unsigned int)BcdOpenFlags,
      v7);
    return v13;
  }
  else
  {
    BiLogMessage(2LL, L"Opening store. Flags: 0x%x", (unsigned int)BcdOpenFlags);
    if ( v3 )
    {
      v11 = -1073741811;
    }
    else
    {
      if ( v6 )
        BiLogMessage(v8, L"Store will be synchronized with firmware.");
      else
        v9 = v8;
      v10 = BiOpenSystemStore(BcdStoreHandle, v9);
      v11 = v10;
      if ( v10 < 0 )
        BiLogMessage(4LL, L"Failed to open system store. Status: %x", (unsigned int)v10);
    }
    LOBYTE(v8) = v3;
    BiReleaseBcdSyncMutant(v8);
    return v11;
  }
}
