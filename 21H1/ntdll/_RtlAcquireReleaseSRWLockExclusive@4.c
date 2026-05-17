/*
 * XREFs of _RtlAcquireReleaseSRWLockExclusive@4 @ 0x4B34A390
 * Callers:
 *     _RtlCloneUserProcess@20 @ 0x4B335760 (_RtlCloneUserProcess@20.c)
 *     _RtlpHpHeapExtendContext@8 @ 0x4B378E8C (_RtlpHpHeapExtendContext@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

signed __int32 __stdcall RtlAcquireReleaseSRWLockExclusive(volatile signed __int32 *a1)
{
  signed __int32 result; // eax
  signed __int32 v2; // [esp+8h] [ebp-4h] BYREF

  _InterlockedOr(&v2, 0);
  result = *a1;
  if ( (*a1 & 1) != 0 )
  {
    RtlAcquireSRWLockExclusive(a1);
    return RtlReleaseSRWLockExclusive(a1);
  }
  return result;
}
