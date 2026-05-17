/*
 * XREFs of _RtlpOptimizeSRWLockList@8 @ 0x4B2E3B53
 * Callers:
 *     _LdrpGetDllPath@28 @ 0x4B2B27D0 (_LdrpGetDllPath@28.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlpQueueWaitBlockToSRWLock@8 @ 0x4B2F1CB0 (_RtlpQueueWaitBlockToSRWLock@8.c)
 * Callees:
 *     _RtlpWakeSRWLock@12 @ 0x4B2E3BAB (_RtlpWakeSRWLock@12.c)
 */

signed __int32 __thiscall RtlpOptimizeSRWLockList(volatile signed __int32 *this, signed __int32 a2)
{
  signed __int32 v2; // edx
  _DWORD *v4; // ecx
  _DWORD *v5; // eax
  int v6; // eax
  signed __int32 result; // eax

  v2 = a2;
  if ( (a2 & 1) == 0 )
    return RtlpWakeSRWLock(v2);
  while ( 1 )
  {
    v4 = (_DWORD *)(v2 & 0xFFFFFFF0);
    if ( !*(_DWORD *)((v2 & 0xFFFFFFF0) + 4) )
    {
      do
      {
        v5 = v4;
        v4 = (_DWORD *)*v4;
        v4[2] = v5;
        v6 = v4[1];
      }
      while ( !v6 );
      if ( v4 != (_DWORD *)(v2 & 0xFFFFFFF0) )
        *(_DWORD *)((v2 & 0xFFFFFFF0) + 4) = v6;
    }
    result = _InterlockedCompareExchange(this, v2 - 4, v2);
    if ( result == v2 )
      break;
    v2 = result;
    if ( (result & 1) == 0 )
      return RtlpWakeSRWLock(v2);
  }
  return result;
}
