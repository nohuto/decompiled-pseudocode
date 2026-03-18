/*
 * XREFs of MmUnloadSystemImage @ 0x140762490
 * Callers:
 *     IopLoadDriver @ 0x14074A178 (IopLoadDriver.c)
 *     MiSessionUnloadAllImages @ 0x140761DF8 (MiSessionUnloadAllImages.c)
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 *     MiLoadImportDll @ 0x14082ECCC (MiLoadImportDll.c)
 *     IopDeleteDriver @ 0x14085D640 (IopDeleteDriver.c)
 *     PnpReplacePartitionUnit @ 0x140950E30 (PnpReplacePartitionUnit.c)
 *     PnprLoadPluginDriver @ 0x1409528A8 (PnprLoadPluginDriver.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140971848 (MiApplyHotPatchToLoadedDriver.c)
 *     MiMapAndApplyPatchInSession @ 0x140975FF0 (MiMapAndApplyPatchInSession.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140203DC0 (HalSystemVectorDispatchEntry.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 *     MmReleaseLoadLock @ 0x1406F5AF0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406F5B50 (MmAcquireLoadLock.c)
 */

__int64 __fastcall MmUnloadSystemImage(__int64 BugCheckParameter2)
{
  struct _LIST_ENTRY *v2; // rdi
  char v3; // si
  struct _KTHREAD *Lock; // rbx
  struct _LIST_ENTRY *v6; // rax

  v2 = 0LL;
  v3 = 0;
  if ( *((_BYTE *)PsGetCurrentServerSiloGlobals() + 1368) )
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
