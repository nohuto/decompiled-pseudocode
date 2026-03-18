/*
 * XREFs of MmUnloadSystemImage @ 0x14075F920
 * Callers:
 *     NtSetSystemInformation @ 0x1406AA390 (NtSetSystemInformation.c)
 *     IopLoadDriver @ 0x140729340 (IopLoadDriver.c)
 *     IopDeleteDriver @ 0x14075F840 (IopDeleteDriver.c)
 *     MiSessionUnloadAllImages @ 0x1407655FC (MiSessionUnloadAllImages.c)
 *     MiLoadImportDll @ 0x14078C060 (MiLoadImportDll.c)
 *     PnpReplacePartitionUnit @ 0x1408A9170 (PnpReplacePartitionUnit.c)
 *     PnprLoadPluginDriver @ 0x1408AAD48 (PnprLoadPluginDriver.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x14026BA30 (HalSystemVectorDispatchEntry.c)
 *     PsDetachSiloFromCurrentThread @ 0x140272080 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402720A0 (PsAttachSiloToCurrentThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 *     MmReleaseLoadLock @ 0x1406A8DA0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A8E00 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x1406A8E58 (MiUnloadSystemImage.c)
 */

__int64 __fastcall MmUnloadSystemImage(__int64 BugCheckParameter2)
{
  struct _LIST_ENTRY *v2; // rdi
  char v3; // si
  struct _KTHREAD *Lock; // rbx
  struct _LIST_ENTRY *v6; // rax

  v2 = 0LL;
  v3 = 0;
  if ( *((_BYTE *)PsGetCurrentServerSiloGlobals() + 1168) )
  {
    v6 = (struct _LIST_ENTRY *)HalSystemVectorDispatchEntry();
    v2 = PsAttachSiloToCurrentThread(v6);
    v3 = 1;
  }
  Lock = MmAcquireLoadLock();
  MiUnloadSystemImage(BugCheckParameter2, -1);
  MmReleaseLoadLock((__int64)Lock);
  if ( v3 )
    PsDetachSiloFromCurrentThread(v2);
  return 0LL;
}
