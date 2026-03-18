/*
 * XREFs of PsAttachSiloToCurrentThread @ 0x1402720A0
 * Callers:
 *     ExpTimeZoneInitSiloState @ 0x1405C9844 (ExpTimeZoneInitSiloState.c)
 *     ObCloseHandleTableEntry @ 0x1405F34B0 (ObCloseHandleTableEntry.c)
 *     ObpIncrementHandleCountEx @ 0x1405F3DB0 (ObpIncrementHandleCountEx.c)
 *     EtwpEnableGuid @ 0x140635748 (EtwpEnableGuid.c)
 *     ExpWnfLookupPermanentName @ 0x14063CBD0 (ExpWnfLookupPermanentName.c)
 *     ObpDecrementHandleCount @ 0x14063D434 (ObpDecrementHandleCount.c)
 *     NtSetInformationThread @ 0x140673B60 (NtSetInformationThread.c)
 *     PspExitThread @ 0x1406B05E0 (PspExitThread.c)
 *     EtwpLogger @ 0x1406C9F80 (EtwpLogger.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406F57C4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x140720FC8 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     MmLoadSystemImageEx @ 0x14074603C (MmLoadSystemImageEx.c)
 *     MmUnloadSystemImage @ 0x14075F920 (MmUnloadSystemImage.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1407809CC (EtwpUpdateFileInfoDriverRegistration.c)
 *     ExpRefreshTimeZoneInformation @ 0x140792C10 (ExpRefreshTimeZoneInformation.c)
 *     SepRmCommandServerThread @ 0x140795150 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x1407952D0 (SepRmLsaConnectRequest.c)
 *     EtwInitializeSiloState @ 0x14079C174 (EtwInitializeSiloState.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x14087FAC8 (VrpHandleIoctlGetVirtualRootKey.c)
 *     DbgkInitializeServerSilo @ 0x140881298 (DbgkInitializeServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x140902E78 (PspDeleteExternalServerSiloState.c)
 *     PspShutdownCsrProcess @ 0x140903280 (PspShutdownCsrProcess.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x1409035A8 (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409036F0 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x14090381C (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x140903944 (PspSiloLoadApiSets.c)
 *     SeInitServerSilo @ 0x140918CC4 (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1409201DC (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x14093DD3C (EtwpTrackGuidEntryRegistrations.c)
 *     ExpTimeZoneWork @ 0x140948680 (ExpTimeZoneWork.c)
 *     ObCreateSiloRootDirectory @ 0x14097CFE0 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall PsAttachSiloToCurrentThread(struct _LIST_ENTRY *a1)
{
  struct _KTHREAD *CurrentThread; // rdx
  struct _LIST_ENTRY *result; // rax

  CurrentThread = KeGetCurrentThread();
  result = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  CurrentThread[1].WaitBlock[3].WaitListEntry.Blink = a1;
  return result;
}
