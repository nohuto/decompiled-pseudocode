/*
 * XREFs of _RtlpFreeDebugInfo@4 @ 0x4B2AFCE0
 * Callers:
 *     _RtlDeleteResource@4 @ 0x4B2A9DF0 (_RtlDeleteResource@4.c)
 *     _RtlDeleteCriticalSection@4 @ 0x4B2AFB90 (_RtlDeleteCriticalSection@4.c)
 *     _RtlInitializeResource@4 @ 0x4B2DFA70 (_RtlInitializeResource@4.c)
 *     _RtlpAddDebugInfoToCriticalSection@4 @ 0x4B2DFCB0 (_RtlpAddDebugInfoToCriticalSection@4.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

int __fastcall RtlpFreeDebugInfo(char *a1)
{
  if ( (unsigned __int16)dword_4B3A49C4 >= 0xAu && (a1 < RtlpStaticDebugInfo || a1 >= &RtlpForceCSDebugInfoCreation) )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
  RtlAcquireSRWLockExclusive((char *)&RtlpSlistLockedAltLocks + 4
                                                              * (((unsigned int)&RtlCriticalSectionDebugSList >> 2) & 0x1F));
  *(_DWORD *)a1 = RtlCriticalSectionDebugSList;
  LOWORD(dword_4B3A49C4) = dword_4B3A49C4 + 1;
  RtlCriticalSectionDebugSList = (int)a1;
  return RtlReleaseSRWLockExclusive((char *)&RtlpSlistLockedAltLocks + 4
                                                                     * (((unsigned int)&RtlCriticalSectionDebugSList >> 2) & 0x1F));
}
