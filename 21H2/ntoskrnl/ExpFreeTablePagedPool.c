/*
 * XREFs of ExpFreeTablePagedPool @ 0x1406AC298
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x1406A62C8 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1406A6C04 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpFreeHandleTable @ 0x1406AC130 (ExpFreeHandleTable.c)
 *     ExpFreeLowLevelTable @ 0x1406AC258 (ExpFreeLowLevelTable.c)
 *     ExpSetHandleExtraInfo @ 0x1409F9244 (ExpSetHandleExtraInfo.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1402331E0 (PsReturnProcessPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFreeTablePagedPool(struct _KPROCESS *a1, void *a2, __int64 a3)
{
  ExFreePoolWithTag(a2, 0x6274624Fu);
  if ( a1 )
    PsReturnProcessPagedPoolQuota(a1, a3);
}
