/*
 * XREFs of MiPartitionIdToPointer @ 0x1402182F8
 * Callers:
 *     MiDereferenceSessionFinal @ 0x140693A28 (MiDereferenceSessionFinal.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x140693EA8 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 *     MiFreeReadListPages @ 0x1406FAD90 (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x1406FAE2C (MiFreeReadListPageList.c)
 *     MiMarkBootGuardPage @ 0x140829B50 (MiMarkBootGuardPage.c)
 *     MiInitializeDynamicBitmap @ 0x14082B1B4 (MiInitializeDynamicBitmap.c)
 *     MiRemovePhysicalMemory @ 0x140969850 (MiRemovePhysicalMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPartitionIdToPointer(unsigned __int16 a1)
{
  return *(_QWORD *)(qword_140C51F48 + 8LL * a1);
}
