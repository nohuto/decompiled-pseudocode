/*
 * XREFs of _RtlpHpLargeLockReleaseShared@12 @ 0x4B307A88
 * Callers:
 *     _RtlpHpLargeAllocSetExtraPresent@12 @ 0x4B37A17E (_RtlpHpLargeAllocSetExtraPresent@12.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 */

int __fastcall RtlpHpLargeLockReleaseShared(int a1, char a2, int a3)
{
  int result; // eax

  if ( (a2 & 1) == 0 )
    return RtlReleaseSRWLockShared((volatile signed __int32 *)(a1 + 64));
  return result;
}
