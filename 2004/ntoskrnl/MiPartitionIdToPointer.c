/*
 * XREFs of MiPartitionIdToPointer @ 0x14035A294
 * Callers:
 *     MiFreeReadListPages @ 0x1406093AC (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x140609434 (MiFreeReadListPageList.c)
 *     MiUnloadSystemImage @ 0x1406A8E58 (MiUnloadSystemImage.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1407066D8 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiDereferenceSessionFinal @ 0x140765340 (MiDereferenceSessionFinal.c)
 *     MiInitializeDynamicBitmap @ 0x1407744FC (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x140774CAC (MiMapNewSession.c)
 *     MiMarkBootGuardPage @ 0x14078778C (MiMarkBootGuardPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPartitionIdToPointer(unsigned __int16 a1)
{
  return *(_QWORD *)(qword_140C4E448 + 8LL * a1);
}
