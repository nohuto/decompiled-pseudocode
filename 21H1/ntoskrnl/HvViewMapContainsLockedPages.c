/*
 * XREFs of HvViewMapContainsLockedPages @ 0x14068E888
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x1402E0F40 (CmpRecheckHiveVolumePolicy.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvViewMapContainsLockedPages(__int64 a1)
{
  return (*(_BYTE *)(a1 + 32) & 4) != 0;
}
