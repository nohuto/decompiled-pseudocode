/*
 * XREFs of HvViewMapContainsLockedPages @ 0x14068E614
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x14020B1F8 (CmpRecheckHiveVolumePolicy.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvViewMapContainsLockedPages(__int64 a1)
{
  return (*(_BYTE *)(a1 + 32) & 4) != 0;
}
