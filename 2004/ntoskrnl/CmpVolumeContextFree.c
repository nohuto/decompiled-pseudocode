/*
 * XREFs of CmpVolumeContextFree @ 0x14086FA24
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x14063A1A4 (CmpVolumeManagerGetContextForFile.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     CmpVolumeContextCleanup @ 0x14086F9EC (CmpVolumeContextCleanup.c)
 */

void __fastcall CmpVolumeContextFree(PPRIVILEGE_SET Privileges)
{
  CmpVolumeContextCleanup((__int64)Privileges);
  CmSiFreeMemory(Privileges);
}
