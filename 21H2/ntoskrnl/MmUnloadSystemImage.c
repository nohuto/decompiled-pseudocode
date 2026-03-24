/*
 * XREFs of MmUnloadSystemImage @ 0x140772150
 * Callers:
 *     NtSetSystemInformation @ 0x1406DA380 (NtSetSystemInformation.c)
 *     IopLoadDriver @ 0x140740868 (IopLoadDriver.c)
 *     IopDeleteDriver @ 0x140772070 (IopDeleteDriver.c)
 *     MiSessionUnloadAllImages @ 0x1407785DC (MiSessionUnloadAllImages.c)
 *     MiLoadImportDll @ 0x1407AC3E0 (MiLoadImportDll.c)
 *     PnpReplacePartitionUnit @ 0x1408AC270 (PnpReplacePartitionUnit.c)
 *     PnprLoadPluginDriver @ 0x1408ADE48 (PnprLoadPluginDriver.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140252E40 (HalSystemVectorDispatchEntry.c)
 *     PsDetachSiloFromCurrentThread @ 0x140264010 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140264030 (PsAttachSiloToCurrentThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
 *     MmReleaseLoadLock @ 0x1406D1110 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406D1170 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x1406D11C8 (MiUnloadSystemImage.c)
 */

__int64 __fastcall MmUnloadSystemImage(__int64 BugCheckParameter2, __int64 a2)
{
  struct _LIST_ENTRY *v3; // rdi
  char v4; // si
  struct _KTHREAD *Lock; // rbx
  struct _LIST_ENTRY *v7; // rax

  v3 = 0LL;
  v4 = 0;
  if ( *((_BYTE *)PsGetCurrentServerSiloGlobals(BugCheckParameter2, a2) + 1176) )
  {
    v7 = (struct _LIST_ENTRY *)HalSystemVectorDispatchEntry();
    v3 = PsAttachSiloToCurrentThread(v7);
    v4 = 1;
  }
  Lock = MmAcquireLoadLock();
  MiUnloadSystemImage(BugCheckParameter2, -1);
  MmReleaseLoadLock((__int64)Lock);
  if ( v4 )
    PsDetachSiloFromCurrentThread(v3);
  return 0LL;
}
