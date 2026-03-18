/*
 * XREFs of ExpFreeTablePagedPool @ 0x140631ABC
 * Callers:
 *     ExpFreeHandleTable @ 0x140631954 (ExpFreeHandleTable.c)
 *     ExpFreeLowLevelTable @ 0x140631A7C (ExpFreeLowLevelTable.c)
 *     ExpAllocateMidLevelTable @ 0x1406F4A98 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1406F56D4 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpSetHandleExtraInfo @ 0x14094F3A8 (ExpSetHandleExtraInfo.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140230470 (PsReturnProcessPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFreeTablePagedPool(ULONG_PTR a1, void *a2, ULONG_PTR a3)
{
  ExFreePoolWithTag(a2, 0x6274624Fu);
  if ( a1 )
    PsReturnProcessPagedPoolQuota(a1, a3);
}
