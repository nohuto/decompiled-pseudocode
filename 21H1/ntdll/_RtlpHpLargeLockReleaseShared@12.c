/*
 * XREFs of _RtlpHpLargeLockReleaseShared@12 @ 0x4B307A88
 * Callers:
 *     _RtlpHpLargeAllocSetExtraPresent@12 @ 0x4B37A17E (_RtlpHpLargeAllocSetExtraPresent@12.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 */

void __fastcall RtlpHpLargeLockReleaseShared(_RTL_SRWLOCK *a1, char a2, int a3)
{
  if ( (a2 & 1) == 0 )
    RtlReleaseSRWLockShared(a1 + 16);
}
