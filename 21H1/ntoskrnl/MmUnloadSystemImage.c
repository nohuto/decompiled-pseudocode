/*
 * XREFs of MmUnloadSystemImage @ 0x14075D670
 * Callers:
 *     NtSetSystemInformation @ 0x1405CF400 (NtSetSystemInformation.c)
 *     IopLoadDriver @ 0x140725EF8 (IopLoadDriver.c)
 *     IopDeleteDriver @ 0x14075D590 (IopDeleteDriver.c)
 *     MiSessionUnloadAllImages @ 0x140763BDC (MiSessionUnloadAllImages.c)
 *     MiLoadImportDll @ 0x140793230 (MiLoadImportDll.c)
 *     PnpReplacePartitionUnit @ 0x1408A7E50 (PnpReplacePartitionUnit.c)
 *     PnprLoadPluginDriver @ 0x1408A9A28 (PnprLoadPluginDriver.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x1402D53D0 (HalSystemVectorDispatchEntry.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402E1A10 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402E1A30 (PsAttachSiloToCurrentThread.c)
 *     MmReleaseLoadLock @ 0x1406EF8C0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406EF920 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
 */

__int64 __fastcall MmUnloadSystemImage(__int64 BugCheckParameter2)
{
  struct _LIST_ENTRY *v2; // rdi
  char v3; // si
  struct _KTHREAD *Lock; // rbx
  struct _LIST_ENTRY *v6; // rax

  v2 = 0LL;
  v3 = 0;
  if ( *((_BYTE *)PsGetCurrentServerSiloGlobals() + 1160) )
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
