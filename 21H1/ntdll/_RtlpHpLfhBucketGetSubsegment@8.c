/*
 * XREFs of _RtlpHpLfhBucketGetSubsegment@8 @ 0x4B3760FA
 * Callers:
 *     _RtlpHpLfhSlotAllocate@20 @ 0x4B376AB9 (_RtlpHpLfhSlotAllocate@20.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpLfhOwnerMoveSubsegment@12 @ 0x4B3769A2 (_RtlpHpLfhOwnerMoveSubsegment@12.c)
 */

int __thiscall RtlpHpLfhBucketGetSubsegment(_RTL_SRWLOCK *this)
{
  unsigned int *v2; // esi
  int v3; // esi

  v2 = (unsigned int *)&this[3];
  if ( (unsigned int *)*v2 == v2 )
    return 0;
  RtlAcquireSRWLockExclusive(this + 2);
  if ( (unsigned int *)*v2 == v2 )
    v3 = 0;
  else
    v3 = RtlpHpLfhOwnerMoveSubsegment(2);
  RtlReleaseSRWLockExclusive(this + 2);
  return v3;
}
