/*
 * XREFs of HvViewMapContainsLockedPages @ 0x1406644E8
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x1402F73C0 (CmpRecheckHiveVolumePolicy.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvViewMapContainsLockedPages(__int64 a1)
{
  return (*(_BYTE *)(a1 + 32) & 4) != 0;
}
