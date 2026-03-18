/*
 * XREFs of RtlpFreeRangeListEntry @ 0x14074E3F8
 * Callers:
 *     RtlDeleteRange @ 0x14074E190 (RtlDeleteRange.c)
 *     RtlDeleteOwnersRanges @ 0x14074E240 (RtlDeleteOwnersRanges.c)
 *     RtlpDeleteRangeListEntry @ 0x14074E398 (RtlpDeleteRangeListEntry.c)
 *     RtlAddRange @ 0x140751410 (RtlAddRange.c)
 *     RtlpAddIntersectingRanges @ 0x1407A6C58 (RtlpAddIntersectingRanges.c)
 *     RtlpDeleteFromMergedRange @ 0x1407B31A4 (RtlpDeleteFromMergedRange.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140269FBC (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFreeRangeListEntry(PVOID Entry)
{
  _DWORD *v2; // rax

  if ( (*((_BYTE *)Entry + 34) & 1) == 0 && (*((_BYTE *)Entry + 33) & 0x10) != 0 )
  {
    v2 = (_DWORD *)*((_QWORD *)Entry + 2);
    if ( (*v2)-- == 1 )
      ExFreePoolWithTag(*((PVOID *)Entry + 2), 0);
  }
  ExFreeToNPagedLookasideList(&RtlpRangeListEntryLookasideList, Entry);
}
