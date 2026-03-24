/*
 * XREFs of ExpFreeTablePagedPool @ 0x1406044E0
 * Callers:
 *     ExpFreeHandleTable @ 0x140604378 (ExpFreeHandleTable.c)
 *     ExpFreeLowLevelTable @ 0x1406044A0 (ExpFreeLowLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x14062B0A8 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateMidLevelTable @ 0x14062B444 (ExpAllocateMidLevelTable.c)
 *     ExpSetHandleExtraInfo @ 0x14094CB78 (ExpSetHandleExtraInfo.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140318410 (PsReturnProcessPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFreeTablePagedPool(struct _KPROCESS *a1, void *a2, __int64 a3)
{
  ExFreePoolWithTag(a2, 0x6274624Fu);
  if ( a1 )
    PsReturnProcessPagedPoolQuota(a1, a3);
}
