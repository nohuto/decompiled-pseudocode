/*
 * XREFs of ViFreeContextTable @ 0x1409C54A4
 * Callers:
 *     VfInsertContext @ 0x14059B380 (VfInsertContext.c)
 *     VfRemoveContext @ 0x14059B550 (VfRemoveContext.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140269FBC (ExFreeToNPagedLookasideList.c)
 */

void __fastcall ViFreeContextTable(PVOID Entry)
{
  ExFreeToNPagedLookasideList(&ViObjectContextTableLookaside, Entry);
}
