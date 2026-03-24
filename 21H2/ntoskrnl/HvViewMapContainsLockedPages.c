/*
 * XREFs of HvViewMapContainsLockedPages @ 0x14071CA30
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x140362080 (CmpRecheckHiveVolumePolicy.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvViewMapContainsLockedPages(__int64 a1)
{
  return (*(_BYTE *)(a1 + 32) & 4) != 0;
}
