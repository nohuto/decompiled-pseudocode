/*
 * XREFs of CmpVolumeContextFree @ 0x140875574
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x1405DD2FC (CmpVolumeManagerGetContextForFile.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140267C30 (CmSiFreeMemory.c)
 *     CmpVolumeContextCleanup @ 0x14087553C (CmpVolumeContextCleanup.c)
 */

void __fastcall CmpVolumeContextFree(PPRIVILEGE_SET Privileges)
{
  CmpVolumeContextCleanup((__int64)Privileges);
  CmSiFreeMemory(Privileges);
}
