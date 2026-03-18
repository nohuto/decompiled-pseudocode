/*
 * XREFs of ViFreeContextTable @ 0x1409CB4C4
 * Callers:
 *     VfInsertContext @ 0x14059EE20 (VfInsertContext.c)
 *     VfRemoveContext @ 0x14059EFF0 (VfRemoveContext.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14020B100 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall ViFreeContextTable(PVOID Entry)
{
  ExFreeToNPagedLookasideList(&ViObjectContextTableLookaside, Entry);
}
