/*
 * XREFs of RtlpFreeRangeListEntry @ 0x14075CFD8
 * Callers:
 *     RtlDeleteRange @ 0x14075CD70 (RtlDeleteRange.c)
 *     RtlDeleteOwnersRanges @ 0x14075CE20 (RtlDeleteOwnersRanges.c)
 *     RtlpDeleteRangeListEntry @ 0x14075CF78 (RtlpDeleteRangeListEntry.c)
 *     RtlAddRange @ 0x14075FFF0 (RtlAddRange.c)
 *     RtlpAddIntersectingRanges @ 0x1407B7D24 (RtlpAddIntersectingRanges.c)
 *     RtlpDeleteFromMergedRange @ 0x1407C10F4 (RtlpDeleteFromMergedRange.c)
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x14020A4F0 (ExFreeToPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)&RtlpRangeListEntryLookasideList, Entry);
}
