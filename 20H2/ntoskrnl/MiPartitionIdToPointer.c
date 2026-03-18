/*
 * XREFs of MiPartitionIdToPointer @ 0x14031EF60
 * Callers:
 *     MiFreeReadListPages @ 0x1406584B4 (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x14065853C (MiFreeReadListPageList.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14065EABC (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiUnloadSystemImage @ 0x1406CB9B0 (MiUnloadSystemImage.c)
 *     MiDereferenceSessionFinal @ 0x140774370 (MiDereferenceSessionFinal.c)
 *     MiInitializeDynamicBitmap @ 0x140782AFC (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x1407832AC (MiMapNewSession.c)
 *     MiMarkBootGuardPage @ 0x14079549C (MiMarkBootGuardPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPartitionIdToPointer(unsigned __int16 a1)
{
  return *(_QWORD *)(qword_140C4E4C8 + 8LL * a1);
}
