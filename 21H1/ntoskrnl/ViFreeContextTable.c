/*
 * XREFs of ViFreeContextTable @ 0x1409C5494
 * Callers:
 *     VfInsertContext @ 0x14059AC90 (VfInsertContext.c)
 *     VfRemoveContext @ 0x14059AE60 (VfRemoveContext.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1402D7298 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall ViFreeContextTable(PVOID Entry)
{
  ExFreeToNPagedLookasideList(&ViObjectContextTableLookaside, Entry);
}
