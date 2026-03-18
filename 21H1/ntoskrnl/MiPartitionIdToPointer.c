/*
 * XREFs of MiPartitionIdToPointer @ 0x140323828
 * Callers:
 *     MiFreeReadListPages @ 0x14063E4FC (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x14063E584 (MiFreeReadListPageList.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1406E2D20 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
 *     MiDereferenceSessionFinal @ 0x140763920 (MiDereferenceSessionFinal.c)
 *     MiInitializeDynamicBitmap @ 0x1407720EC (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x14077289C (MiMapNewSession.c)
 *     MiMarkBootGuardPage @ 0x140781E08 (MiMarkBootGuardPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPartitionIdToPointer(unsigned __int16 a1)
{
  return *(_QWORD *)(qword_140C4E588 + 8LL * a1);
}
