/*
 * XREFs of _RtlpWaitCouldDeadlock@0 @ 0x4B2E7D50
 * Callers:
 *     _LdrpGetDllPath@28 @ 0x4B2B27D0 (_LdrpGetDllPath@28.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 * Callees:
 *     <none>
 */

bool __stdcall RtlpWaitCouldDeadlock()
{
  return byte_4B3A5DA8 != 0;
}
