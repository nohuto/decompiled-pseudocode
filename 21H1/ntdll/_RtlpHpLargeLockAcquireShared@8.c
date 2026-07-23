/*
 * XREFs of _RtlpHpLargeLockAcquireShared@8 @ 0x4B307A50
 * Callers:
 *     _RtlpHpLargeAllocSetExtraPresent@12 @ 0x4B37A17E (_RtlpHpLargeAllocSetExtraPresent@12.c)
 * Callees:
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 */

char __fastcall RtlpHpLargeLockAcquireShared(_RTL_SRWLOCK *a1, char a2)
{
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockShared(a1 + 16);
  return -1;
}
