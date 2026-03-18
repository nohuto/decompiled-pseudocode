/*
 * XREFs of HvViewMapContainsLockedPages @ 0x14063C6E4
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x1402718B0 (CmpRecheckHiveVolumePolicy.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvViewMapContainsLockedPages(__int64 a1)
{
  return (*(_BYTE *)(a1 + 32) & 4) != 0;
}
