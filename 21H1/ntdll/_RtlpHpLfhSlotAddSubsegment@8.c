/*
 * XREFs of _RtlpHpLfhSlotAddSubsegment@8 @ 0x4B376A81
 * Callers:
 *     _RtlpHpLfhSlotAllocate@20 @ 0x4B376AB9 (_RtlpHpLfhSlotAllocate@20.c)
 * Callees:
 *     _RtlpHpLfhOwnerMoveSubsegment@12 @ 0x4B3769A2 (_RtlpHpLfhOwnerMoveSubsegment@12.c)
 *     _RtlpHpLfhSubsegmentSetOwner@8 @ 0x4B377A21 (_RtlpHpLfhSubsegmentSetOwner@8.c)
 */

int *__fastcall RtlpHpLfhSlotAddSubsegment(_DWORD *a1, int a2)
{
  int v2; // esi

  v2 = a2;
  RtlpHpLfhSubsegmentSetOwner(a2, a1);
  if ( !a1[1] || *(_WORD *)(v2 + 16) != *(_WORD *)(v2 + 18) )
    return RtlpHpLfhOwnerMoveSubsegment(a1, (int *)v2, 0);
  *(_DWORD *)(v2 + 8) = 0;
  return (int *)v2;
}
