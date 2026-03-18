/*
 * XREFs of KiAbOwnerComputeCpuPriorityKey @ 0x1402DDA58
 * Callers:
 *     KiAbProcessContextSwitch @ 0x1402668D0 (KiAbProcessContextSwitch.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140269870 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbProcessThreadLocks @ 0x1402DD1D4 (KiAbProcessThreadLocks.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1402DD4E0 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x1402DD91C (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbForceProcessLockEntry @ 0x14038C554 (KiAbForceProcessLockEntry.c)
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
