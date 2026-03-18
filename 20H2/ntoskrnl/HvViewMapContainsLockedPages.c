/*
 * XREFs of HvViewMapContainsLockedPages @ 0x1406CA770
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x140204810 (CmpRecheckHiveVolumePolicy.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvViewMapContainsLockedPages(__int64 a1)
{
  return (*(_BYTE *)(a1 + 32) & 4) != 0;
}
