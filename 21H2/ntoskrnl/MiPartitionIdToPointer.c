/*
 * XREFs of MiPartitionIdToPointer @ 0x14024A6C4
 * Callers:
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14067BC6C (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiUnloadSystemImage @ 0x1406A84A8 (MiUnloadSystemImage.c)
 *     MiFreeReadListPages @ 0x1406FFF84 (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x14070000C (MiFreeReadListPageList.c)
 *     MiDereferenceSessionFinal @ 0x1407784E0 (MiDereferenceSessionFinal.c)
 *     MiInitializeDynamicBitmap @ 0x140786A9C (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x14078724C (MiMapNewSession.c)
 *     MiMarkBootGuardPage @ 0x14079FBBC (MiMarkBootGuardPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPartitionIdToPointer(unsigned __int16 a1)
{
  return *(_QWORD *)(qword_140C4E688 + 8LL * a1);
}
