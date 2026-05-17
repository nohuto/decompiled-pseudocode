/*
 * XREFs of _RtlBackoff@4 @ 0x4B2DBA90
 * Callers:
 *     _LdrpGetDllPath@28 @ 0x4B2B27D0 (_LdrpGetDllPath@28.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlpEnterCriticalSectionContended@4 @ 0x4B2BFEE0 (_RtlpEnterCriticalSectionContended@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     @RtlpFreeHeap@16 @ 0x4B2C3C10 (@RtlpFreeHeap@16.c)
 *     @RtlpAllocateHeap@24 @ 0x4B2C6F90 (@RtlpAllocateHeap@24.c)
 *     _RtlUnlockHeap@4 @ 0x4B2DD9F0 (_RtlUnlockHeap@4.c)
 *     _RtlReleaseSwapReference@8 @ 0x4B2E5174 (_RtlReleaseSwapReference@8.c)
 *     _RtlAcquireSwapReference@4 @ 0x4B2E5334 (_RtlAcquireSwapReference@4.c)
 *     _RtlTryAcquireSRWLockShared@4 @ 0x4B2EA860 (_RtlTryAcquireSRWLockShared@4.c)
 *     _RtlpQueueWaitBlockToSRWLock@8 @ 0x4B2F1CB0 (_RtlpQueueWaitBlockToSRWLock@8.c)
 *     _RtlQueryCriticalSectionOwner@8 @ 0x4B34A6A0 (_RtlQueryCriticalSectionOwner@8.c)
 * Callees:
 *     <none>
 */

_PEB *__stdcall RtlBackoff(unsigned int *a1)
{
  unsigned int v1; // esi
  _PEB *result; // eax
  unsigned __int64 v3; // rax
  unsigned int v4; // [esp+4h] [ebp-4h]

  v1 = *a1;
  if ( *a1 )
  {
    if ( v1 < 0x1FFF )
      v1 *= 2;
  }
  else
  {
    result = NtCurrentTeb()->ProcessEnvironmentBlock;
    if ( result->NumberOfProcessors == 1 )
      return result;
    v1 = 64;
  }
  *a1 = v1;
  v3 = __rdtsc();
  v4 = 0;
  result = (_PEB *)(10 * (((v1 - 1) & (unsigned int)v3) + v1) / MEMORY[0x7FFE02D6]);
  if ( result )
  {
    do
    {
      _mm_pause();
      ++v4;
    }
    while ( v4 < (unsigned int)result );
  }
  return result;
}
