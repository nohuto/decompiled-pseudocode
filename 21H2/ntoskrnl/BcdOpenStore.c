/*
 * XREFs of BcdOpenStore @ 0x140782E48
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1405BC750 (WheaPersistBadPageToBcd.c)
 *     PopFreeHiberContext @ 0x140776FBC (PopFreeHiberContext.c)
 *     PopBcdOpen @ 0x1408F5864 (PopBcdOpen.c)
 * Callees:
 *     BiOpenSystemStore @ 0x14078381C (BiOpenSystemStore.c)
 *     BiReleaseBcdSyncMutant @ 0x140784774 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140784938 (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x140784D9C (BiLogMessage.c)
 */

__int64 __fastcall BcdOpenStore(__int64 a1, unsigned int a2, __int64 a3)
{
  char v3; // di
  int v6; // esi
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // r9d
  int v10; // eax
  unsigned int v11; // ebx
  unsigned int v13; // r10d

  v3 = a2 & 1;
  LOBYTE(a1) = a2 & 1;
  v6 = a2 & 2;
  v7 = BiAcquireBcdSyncMutant(a1);
  if ( v7 < 0 )
  {
    BiLogMessage(
      4LL,
      L"BcdOpenStore: Failed to acquire BCD sync Mutant. Store: %wsFlags: 0x%x Status: %x",
      L"NULL",
      a2,
      v7);
    return v13;
  }
  else
  {
    BiLogMessage(2LL, L"Opening store. Flags: 0x%x", a2);
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
      v10 = BiOpenSystemStore(a3, v9);
      v11 = v10;
      if ( v10 < 0 )
        BiLogMessage(4LL, L"Failed to open system store. Status: %x", (unsigned int)v10);
    }
    LOBYTE(v8) = v3;
    BiReleaseBcdSyncMutant(v8);
    return v11;
  }
}
