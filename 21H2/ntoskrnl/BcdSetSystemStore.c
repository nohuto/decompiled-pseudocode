/*
 * XREFs of BcdSetSystemStore @ 0x140A1CAC4
 * Callers:
 *     BapdpProcessBCDCache @ 0x140B1C78C (BapdpProcessBCDCache.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x1403A7864 (BiIsOfflineHandle.c)
 *     BiMarkTreatAsSystemStore @ 0x140812260 (BiMarkTreatAsSystemStore.c)
 *     BiSetRegistryValue @ 0x1408123B4 (BiSetRegistryValue.c)
 *     BiReleaseBcdSyncMutant @ 0x1408134D8 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14081369C (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1408138F0 (BiLogMessage.c)
 */

__int64 __fastcall BcdSetSystemStore(__int64 a1)
{
  char IsOfflineHandle; // si
  int v3; // ebx
  __int64 result; // rax
  unsigned int v5; // r8d
  int v6; // [rsp+48h] [rbp+10h] BYREF

  IsOfflineHandle = BiIsOfflineHandle(a1);
  v3 = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( v3 < 0
    || (v6 = 1,
        v3 = BiSetRegistryValue(a1, L"System", (__int64)L"Description", 4u, &v6, 4u),
        BiReleaseBcdSyncMutant(IsOfflineHandle),
        v3 < 0) )
  {
    BiLogMessage(4LL, L"BcdSetSystemStore: Failed to set store as system store.Status: %x", (unsigned int)v3);
    return (unsigned int)v3;
  }
  else
  {
    result = BiMarkTreatAsSystemStore(a1, 1);
    if ( (int)result < 0 )
    {
      BiLogMessage(4LL, L"BcdSetSystemStore: Failed to set mark as system store.Status: %x", (unsigned int)result);
      return v5;
    }
  }
  return result;
}
