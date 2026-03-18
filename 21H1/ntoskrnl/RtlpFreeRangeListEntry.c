/*
 * XREFs of RtlpFreeRangeListEntry @ 0x140749FD8
 * Callers:
 *     RtlDeleteRange @ 0x140749D70 (RtlDeleteRange.c)
 *     RtlDeleteOwnersRanges @ 0x140749E20 (RtlDeleteOwnersRanges.c)
 *     RtlpDeleteRangeListEntry @ 0x140749F78 (RtlpDeleteRangeListEntry.c)
 *     RtlAddRange @ 0x14074CD80 (RtlAddRange.c)
 *     RtlpAddIntersectingRanges @ 0x1407A4500 (RtlpAddIntersectingRanges.c)
 *     RtlpDeleteFromMergedRange @ 0x1407B0034 (RtlpDeleteFromMergedRange.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1402D7298 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
