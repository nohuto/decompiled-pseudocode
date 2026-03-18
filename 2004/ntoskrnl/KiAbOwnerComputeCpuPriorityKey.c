/*
 * XREFs of KiAbOwnerComputeCpuPriorityKey @ 0x14032A828
 * Callers:
 *     KiAbProcessContextSwitch @ 0x14020D880 (KiAbProcessContextSwitch.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140210820 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbProcessThreadLocks @ 0x140329FA4 (KiAbProcessThreadLocks.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x14032A2B0 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x14032A6EC (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbForceProcessLockEntry @ 0x14038D0C4 (KiAbForceProcessLockEntry.c)
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
