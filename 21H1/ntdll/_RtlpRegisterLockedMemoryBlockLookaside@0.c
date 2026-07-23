/*
 * XREFs of _RtlpRegisterLockedMemoryBlockLookaside@0 @ 0x4B34D67B
 * Callers:
 *     _RtlLockMemoryBlockLookaside@4 @ 0x4B34D570 (_RtlLockMemoryBlockLookaside@4.c)
 * Callees:
 *     _RtlLockModuleSection@4 @ 0x4B2A96A0 (_RtlLockModuleSection@4.c)
 *     _RtlUnlockModuleSection@4 @ 0x4B2A99B0 (_RtlUnlockModuleSection@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

NTSTATUS __stdcall RtlpRegisterLockedMemoryBlockLookaside()
{
  NTSTATUS v0; // edi
  int v1; // eax
  int v2; // esi
  void *v4; // [esp-4h] [ebp-10h]

  v0 = 0;
  RtlAcquireSRWLockExclusive(&RtlpMemoryBlockLookasideLock);
  v1 = RtlpLockedMemoryBlockLookasideCount;
  if ( RtlpLockedMemoryBlockLookasideCount )
  {
LABEL_6:
    RtlpLockedMemoryBlockLookasideCount = v1 + 1;
  }
  else
  {
    v2 = 0;
    while ( 1 )
    {
      v0 = RtlLockModuleSection(*(&RtlpMemoryBlockLookasideCriticalRoutines + v2));
      if ( v0 < 0 )
        break;
      if ( (unsigned int)++v2 >= 4 )
      {
        v1 = RtlpLockedMemoryBlockLookasideCount;
        goto LABEL_6;
      }
    }
    while ( v2 )
    {
      v4 = (void *)*((_DWORD *)&dword_4B2818AC + v2--);
      RtlUnlockModuleSection(v4);
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpMemoryBlockLookasideLock);
  return v0;
}
