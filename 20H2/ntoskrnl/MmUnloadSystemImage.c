/*
 * XREFs of MmUnloadSystemImage @ 0x14076DF90
 * Callers:
 *     NtSetSystemInformation @ 0x1406F5A80 (NtSetSystemInformation.c)
 *     IopLoadDriver @ 0x140737DD0 (IopLoadDriver.c)
 *     IopDeleteDriver @ 0x14076DEB0 (IopDeleteDriver.c)
 *     MiSessionUnloadAllImages @ 0x14077462C (MiSessionUnloadAllImages.c)
 *     MiLoadImportDll @ 0x1407A2310 (MiLoadImportDll.c)
 *     PnpReplacePartitionUnit @ 0x1408AECA0 (PnpReplacePartitionUnit.c)
 *     PnprLoadPluginDriver @ 0x1408B0878 (PnprLoadPluginDriver.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x140204C10 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140204C30 (PsAttachSiloToCurrentThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     HalSystemVectorDispatchEntry @ 0x140245E60 (HalSystemVectorDispatchEntry.c)
 *     MmReleaseLoadLock @ 0x1406592C0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140659320 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x1406CB9B0 (MiUnloadSystemImage.c)
 */

__int64 __fastcall MmUnloadSystemImage(__int64 BugCheckParameter2)
{
  struct _LIST_ENTRY *v2; // rdi
  char v3; // si
  struct _KTHREAD *Lock; // rbx
  struct _LIST_ENTRY *v6; // rax

  v2 = 0LL;
  v3 = 0;
  if ( *((_BYTE *)PsGetCurrentServerSiloGlobals() + 1176) )
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
