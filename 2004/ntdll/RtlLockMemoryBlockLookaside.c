/*
 * XREFs of RtlLockMemoryBlockLookaside @ 0x18005D430
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockMemoryZone @ 0x18005CEB0 (RtlUnlockMemoryZone.c)
 *     RtlLockMemoryZone @ 0x18005D4A0 (RtlLockMemoryZone.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x18005D5E0 (RtlpRegisterLockedMemoryBlockLookaside.c)
 */

__int64 __fastcall RtlLockMemoryBlockLookaside(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int locked; // edi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int64 v13; // rcx

  locked = 0;
  RtlAcquireSRWLockExclusive(a1, a2, a3, a4);
  if ( *(_DWORD *)(a1 + 44) )
    goto LABEL_5;
  locked = RtlLockMemoryZone(*(_QWORD *)(a1 + 8));
  if ( locked >= 0 )
  {
    locked = RtlLockMemoryZone(*(_QWORD *)(a1 + 16));
    if ( locked < 0 )
    {
      v13 = *(_QWORD *)(a1 + 8);
    }
    else
    {
      locked = RtlpRegisterLockedMemoryBlockLookaside();
      if ( locked >= 0 )
      {
LABEL_5:
        ++*(_DWORD *)(a1 + 44);
        goto LABEL_6;
      }
      RtlUnlockMemoryZone(*(_QWORD *)(a1 + 8), v9, v10, v11);
      v13 = *(_QWORD *)(a1 + 16);
    }
    RtlUnlockMemoryZone(v13, v6, v7, v8);
  }
LABEL_6:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return (unsigned int)locked;
}
