/*
 * XREFs of RtlpHpLfhBucketAddSubsegment @ 0x180003144
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x18002C2B0 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     RtlpHpLfhSubsegmentFree @ 0x1800031B4 (RtlpHpLfhSubsegmentFree.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x18006E350 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhSubsegmentSetOwner @ 0x180078C34 (RtlpHpLfhSubsegmentSetOwner.c)
 */

void __fastcall RtlpHpLfhBucketAddSubsegment(__int64 a1, _RTL_SRWLOCK *a2, __int64 a3, char a4)
{
  __int64 v5; // rbx

  v5 = a3;
  if ( *(_WORD *)(a3 + 32) != *(_WORD *)(a3 + 34) )
  {
    RtlAcquireSRWLockExclusive(a2 + 2);
    RtlpHpLfhSubsegmentSetOwner(v5, a2);
    if ( *(_WORD *)(v5 + 32) == *(_WORD *)(v5 + 34) )
      *(_QWORD *)(v5 + 16) = 0LL;
    else
      v5 = RtlpHpLfhOwnerMoveSubsegment(a2, v5, 0LL);
    RtlReleaseSRWLockExclusive(a2 + 2);
  }
  if ( v5 )
    RtlpHpLfhSubsegmentFree(a1, v5, a2, a4 & 1);
}
