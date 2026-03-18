/*
 * XREFs of ExpFreeTablePagedPool @ 0x1405D636C
 * Callers:
 *     ExpFreeHandleTable @ 0x1405D6204 (ExpFreeHandleTable.c)
 *     ExpFreeLowLevelTable @ 0x1405D632C (ExpFreeLowLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140671724 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateMidLevelTable @ 0x1406E2724 (ExpAllocateMidLevelTable.c)
 *     ExpSetHandleExtraInfo @ 0x140948248 (ExpSetHandleExtraInfo.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140279990 (PsReturnProcessPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFreeTablePagedPool(ULONG_PTR a1, void *a2, ULONG_PTR a3)
{
  ExFreePoolWithTag(a2, 0x6274624Fu);
  if ( a1 )
    PsReturnProcessPagedPoolQuota(a1, a3);
}
