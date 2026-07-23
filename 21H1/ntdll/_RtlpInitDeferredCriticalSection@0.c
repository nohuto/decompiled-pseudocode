/*
 * XREFs of _RtlpInitDeferredCriticalSection@0 @ 0x4B34A7FC
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

int __stdcall RtlpInitDeferredCriticalSection()
{
  char *v0; // ecx

  RtlFailedCriticalDebugAllocations = 0;
  v0 = RtlpStaticDebugInfo;
  RtlCriticalSectionDebugSList = 0;
  dword_4B3A49C4 = 0;
  do
  {
    *(_DWORD *)v0 = v0 + 32;
    v0 += 32;
  }
  while ( v0 <= byte_4B3A4AA0 );
  *(_DWORD *)v0 = 0;
  RtlAcquireSRWLockExclusive(&RtlpSlistLockedAltLocks + (((unsigned int)&RtlCriticalSectionDebugSList >> 2) & 0x1F));
  LOWORD(dword_4B3A49C4) = dword_4B3A49C4 + 8;
  dword_4B3A4AC0 = RtlCriticalSectionDebugSList;
  RtlCriticalSectionDebugSList = (int)RtlpStaticDebugInfo;
  RtlReleaseSRWLockExclusive(&RtlpSlistLockedAltLocks + (((unsigned int)&RtlCriticalSectionDebugSList >> 2) & 0x1F));
  return 0;
}
