/*
 * XREFs of KiAbOwnerComputeCpuPriorityKey @ 0x14035A7F8
 * Callers:
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14034F230 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbProcessThreadLocks @ 0x1403591D8 (KiAbProcessThreadLocks.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x14035A364 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x14035A6C8 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbForceProcessLockEntry @ 0x14039C4BC (KiAbForceProcessLockEntry.c)
 * Callees:
 *     <none>
 */

char __fastcall KiAbOwnerComputeCpuPriorityKey(__int64 a1)
{
  char v1; // dl
  char v2; // cl
  char v3; // al
  unsigned int v5; // edx

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 88) & 0x3FFFFFFF) != 0 )
  {
    _BitScanReverse(&v5, *(_DWORD *)(a1 + 88) & 0x3FFFFFFF);
    v1 = v5 + 1;
  }
  v2 = *(_BYTE *)(a1 - 96LL * *(unsigned __int8 *)(a1 + 16) - 1133);
  if ( v2 > v1 )
  {
    v3 = v2;
    if ( v2 > 30 )
      return 30;
    return v3;
  }
  return v1;
}
