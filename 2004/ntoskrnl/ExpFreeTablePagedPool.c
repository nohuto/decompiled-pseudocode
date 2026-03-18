/*
 * XREFs of ExpFreeTablePagedPool @ 0x14065CAFC
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x1405D04B8 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1405D0C04 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpFreeHandleTable @ 0x14065C994 (ExpFreeHandleTable.c)
 *     ExpFreeLowLevelTable @ 0x14065CABC (ExpFreeLowLevelTable.c)
 *     ExpSetHandleExtraInfo @ 0x1409495E8 (ExpSetHandleExtraInfo.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140220940 (PsReturnProcessPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFreeTablePagedPool(struct _KPROCESS *a1, void *a2, __int64 a3)
{
  ExFreePoolWithTag(a2, 0x6274624Fu);
  if ( a1 )
    PsReturnProcessPagedPoolQuota(a1, a3);
}
