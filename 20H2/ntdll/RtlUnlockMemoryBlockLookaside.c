/*
 * XREFs of RtlUnlockMemoryBlockLookaside @ 0x18005CEA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockMemoryZone @ 0x18005CF00 (RtlUnlockMemoryZone.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x18005CFD4 (RtlpUnregisterLockedMemoryBlockLookaside.c)
 */

__int64 __fastcall RtlUnlockMemoryBlockLookaside(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v5; // ecx
  unsigned int v6; // edi
  int v7; // ecx

  RtlAcquireSRWLockExclusive(a1, a2, a3, a4);
  v5 = *(_DWORD *)(a1 + 44);
  v6 = 0;
  if ( v5 )
  {
    v7 = v5 - 1;
    *(_DWORD *)(a1 + 44) = v7;
    if ( !v7 )
    {
      RtlUnlockMemoryZone(*(_QWORD *)(a1 + 16));
      RtlUnlockMemoryZone(*(_QWORD *)(a1 + 8));
      RtlpUnregisterLockedMemoryBlockLookaside();
    }
  }
  else
  {
    v6 = -1073741823;
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return v6;
}
