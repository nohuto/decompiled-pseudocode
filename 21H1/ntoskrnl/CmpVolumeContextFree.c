/*
 * XREFs of CmpVolumeContextFree @ 0x14086DF64
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x140687D20 (CmpVolumeManagerGetContextForFile.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     CmpVolumeContextCleanup @ 0x14086DF2C (CmpVolumeContextCleanup.c)
 */

void __fastcall CmpVolumeContextFree(PPRIVILEGE_SET Privileges)
{
  CmpVolumeContextCleanup((__int64)Privileges);
  CmSiFreeMemory(Privileges);
}
