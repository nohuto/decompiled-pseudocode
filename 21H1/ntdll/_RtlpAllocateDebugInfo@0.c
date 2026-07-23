/*
 * XREFs of _RtlpAllocateDebugInfo@0 @ 0x4B2DFDB0
 * Callers:
 *     _RtlInitializeResource@4 @ 0x4B2DFA70 (_RtlInitializeResource@4.c)
 *     _RtlpAddDebugInfoToCriticalSection@4 @ 0x4B2DFCB0 (_RtlpAddDebugInfoToCriticalSection@4.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

PVOID __stdcall RtlpAllocateDebugInfo()
{
  int v0; // esi
  void *ProcessHeap; // eax
  SIZE_T v3; // [esp-4h] [ebp-10h]

  RtlAcquireSRWLockExclusive(&RtlpSlistLockedAltLocks + (((unsigned int)&RtlCriticalSectionDebugSList >> 2) & 0x1F));
  v0 = RtlCriticalSectionDebugSList;
  if ( RtlCriticalSectionDebugSList )
  {
    RtlCriticalSectionDebugSList = *(_DWORD *)RtlCriticalSectionDebugSList;
    LOWORD(dword_4B3A49C4) = dword_4B3A49C4 - 1;
  }
  RtlReleaseSRWLockExclusive(&RtlpSlistLockedAltLocks + (((unsigned int)&RtlCriticalSectionDebugSList >> 2) & 0x1F));
  if ( v0 )
    return (PVOID)v0;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( !ProcessHeap )
    return (PVOID)v0;
  LODWORD(v3) = 32;
  return RtlAllocateHeap(ProcessHeap, 0, v3);
}
