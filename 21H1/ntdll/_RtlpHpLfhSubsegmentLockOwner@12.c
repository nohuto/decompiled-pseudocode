/*
 * XREFs of _RtlpHpLfhSubsegmentLockOwner@12 @ 0x4B37790D
 * Callers:
 *     _RtlpHpLfhSubsegmentFreeBlock@16 @ 0x4B377416 (_RtlpHpLfhSubsegmentFreeBlock@16.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

signed __int32 __thiscall RtlpHpLfhSubsegmentLockOwner(volatile signed __int32 *this, _BYTE *a2)
{
  volatile signed __int32 *v2; // ebx
  signed __int32 v3; // esi
  signed __int32 v4; // edi
  signed __int32 v5; // eax
  _RTL_SRWLOCK *SRWLock; // [esp+10h] [ebp-4h]

  v2 = this + 2;
  v3 = *((_DWORD *)this + 2);
  while ( 1 )
  {
    if ( !v3 )
    {
      v3 = _InterlockedCompareExchange(v2, 3, 0);
      if ( !v3 )
        break;
    }
    if ( (v3 & 1) != 0 )
    {
      v5 = _InterlockedCompareExchange(v2, v3 & 1 | (v3 + 2) & 0xFFFFFFFE, v3);
      if ( v5 == v3 )
        return 0;
      v3 = v5;
    }
    else
    {
      v4 = v3;
      SRWLock = (_RTL_SRWLOCK *)(v3 + 8);
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v3 + 8));
      v3 = *v2;
      *a2 = -1;
      if ( v4 == v3 )
        return v4;
      RtlReleaseSRWLockExclusive(SRWLock);
    }
  }
  return 0;
}
