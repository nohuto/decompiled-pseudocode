/*
 * XREFs of KiAbOwnerComputeCpuPriorityKey @ 0x140243DFC
 * Callers:
 *     KiAbProcessContextSwitch @ 0x14021DA40 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x140242694 (KiAbProcessThreadLocks.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1402432A0 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140243610 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x140243CC0 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbForceProcessLockEntry @ 0x14038F584 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     <none>
 */

char __fastcall KiAbOwnerComputeCpuPriorityKey(__int64 a1)
{
  __int16 v1; // ax
  char v2; // dl
  char v3; // r8
  unsigned int v5; // edx

  v1 = *(_WORD *)(a1 + 88);
  v2 = 0;
  if ( (v1 & 0x7FFF) != 0 )
  {
    _BitScanReverse(&v5, v1 & 0x7FFF);
    v2 = v5 + 1;
  }
  v3 = *(_BYTE *)(a1 - 16LL * *(unsigned __int8 *)(a1 + 24) + 563);
  if ( v3 > v2 )
  {
    v2 = *(_BYTE *)(a1 - 16LL * *(unsigned __int8 *)(a1 + 24) + 563);
    if ( v3 > 15 )
      return 15;
  }
  return v2;
}
