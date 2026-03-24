/*
 * XREFs of MiPartitionIdToPointer @ 0x1402CBF58
 * Callers:
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x140682FC4 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiUnloadSystemImage @ 0x1406D11C8 (MiUnloadSystemImage.c)
 *     MiFreeReadListPages @ 0x1406E8BA4 (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x1406E8C2C (MiFreeReadListPageList.c)
 *     MiDereferenceSessionFinal @ 0x140778320 (MiDereferenceSessionFinal.c)
 *     MiInitializeDynamicBitmap @ 0x1407868DC (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x14078708C (MiMapNewSession.c)
 *     MiMarkBootGuardPage @ 0x14079F9BC (MiMarkBootGuardPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPartitionIdToPointer(unsigned __int16 a1)
{
  return *(_QWORD *)(qword_140C4E648 + 8LL * a1);
}
