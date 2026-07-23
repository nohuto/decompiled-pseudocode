/*
 * XREFs of CmpVolumeContextFree @ 0x140872F68
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x1406F9894 (CmpVolumeManagerGetContextForFile.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     CmpVolumeContextCleanup @ 0x140872F30 (CmpVolumeContextCleanup.c)
 */

void __fastcall CmpVolumeContextFree(PPRIVILEGE_SET Privileges)
{
  CmpVolumeContextCleanup((__int64)Privileges);
  CmSiFreeMemory(Privileges);
}
