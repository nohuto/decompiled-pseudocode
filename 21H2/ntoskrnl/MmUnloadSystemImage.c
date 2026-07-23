/*
 * XREFs of MmUnloadSystemImage @ 0x140772310
 * Callers:
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 *     IopLoadDriver @ 0x140740A28 (IopLoadDriver.c)
 *     IopDeleteDriver @ 0x140772230 (IopDeleteDriver.c)
 *     MiSessionUnloadAllImages @ 0x14077879C (MiSessionUnloadAllImages.c)
 *     MiLoadImportDll @ 0x1407AC5E0 (MiLoadImportDll.c)
 *     PnpReplacePartitionUnit @ 0x1408AC3D0 (PnpReplacePartitionUnit.c)
 *     PnprLoadPluginDriver @ 0x1408ADFA8 (PnprLoadPluginDriver.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140251020 (HalSystemVectorDispatchEntry.c)
 *     PsDetachSiloFromCurrentThread @ 0x14026D070 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14026D090 (PsAttachSiloToCurrentThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     MmReleaseLoadLock @ 0x1406A83F0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A8450 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x1406A84A8 (MiUnloadSystemImage.c)
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
