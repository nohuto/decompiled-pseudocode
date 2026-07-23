/*
 * XREFs of _RtlpHpLfhBucketAddSubsegment@16 @ 0x4B375FDC
 * Callers:
 *     _RtlpHpLfhSlotAllocate@20 @ 0x4B376AB9 (_RtlpHpLfhSlotAllocate@20.c)
 *     _RtlpHpLfhSubsegmentFreeBlock@16 @ 0x4B377416 (_RtlpHpLfhSubsegmentFreeBlock@16.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpLfhOwnerMoveSubsegment@12 @ 0x4B3769A2 (_RtlpHpLfhOwnerMoveSubsegment@12.c)
 *     _RtlpHpLfhSubsegmentFree@16 @ 0x4B377399 (_RtlpHpLfhSubsegmentFree@16.c)
 *     _RtlpHpLfhSubsegmentSetOwner@8 @ 0x4B377A21 (_RtlpHpLfhSubsegmentSetOwner@8.c)
 */

void __fastcall RtlpHpLfhBucketAddSubsegment(int a1, _RTL_SRWLOCK *a2, int a3, char a4)
{
  int v4; // esi

  v4 = a3;
  if ( *(_WORD *)(a3 + 16) != *(_WORD *)(a3 + 18) )
  {
    RtlAcquireSRWLockExclusive(a2 + 2);
    RtlpHpLfhSubsegmentSetOwner(a3, a2);
    if ( *(_WORD *)(a3 + 16) == *(_WORD *)(a3 + 18) )
      *(_DWORD *)(a3 + 8) = 0;
    else
      v4 = RtlpHpLfhOwnerMoveSubsegment(0);
    RtlReleaseSRWLockExclusive(a2 + 2);
  }
  if ( v4 )
    RtlpHpLfhSubsegmentFree(a2, a4 & 1);
}
