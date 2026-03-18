/*
 * XREFs of PsAttachSiloToCurrentThread @ 0x140204C30
 * Callers:
 *     ExpTimeZoneInitSiloState @ 0x1405CF840 (ExpTimeZoneInitSiloState.c)
 *     ExpWnfLookupPermanentName @ 0x1405DF664 (ExpWnfLookupPermanentName.c)
 *     ObpDecrementHandleCount @ 0x1405E04F8 (ObpDecrementHandleCount.c)
 *     NtSetInformationThread @ 0x14060E970 (NtSetInformationThread.c)
 *     ObCloseHandleTableEntry @ 0x1406160E0 (ObCloseHandleTableEntry.c)
 *     ObpIncrementHandleCountEx @ 0x1406169E0 (ObpIncrementHandleCountEx.c)
 *     PspExitThread @ 0x14068390C (PspExitThread.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406C8854 (SepCleanupLUIDDeviceMapDirectory.c)
 *     EtwpLogger @ 0x140715350 (EtwpLogger.c)
 *     EtwpEnableGuid @ 0x1407188EC (EtwpEnableGuid.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x14072EFB8 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     MmLoadSystemImageEx @ 0x140754C1C (MmLoadSystemImageEx.c)
 *     MmUnloadSystemImage @ 0x14076DF90 (MmUnloadSystemImage.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14078DC20 (EtwpUpdateFileInfoDriverRegistration.c)
 *     ExpRefreshTimeZoneInformation @ 0x14079F494 (ExpRefreshTimeZoneInformation.c)
 *     SepRmCommandServerThread @ 0x1407A4480 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x1407A4600 (SepRmLsaConnectRequest.c)
 *     EtwInitializeSiloState @ 0x1407AB4A4 (EtwInitializeSiloState.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x140885618 (VrpHandleIoctlGetVirtualRootKey.c)
 *     DbgkInitializeServerSilo @ 0x140886DE8 (DbgkInitializeServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x140908A88 (PspDeleteExternalServerSiloState.c)
 *     PspShutdownCsrProcess @ 0x140908EA0 (PspShutdownCsrProcess.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x1409091C8 (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140909310 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x14090943C (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x140909564 (PspSiloLoadApiSets.c)
 *     SeInitServerSilo @ 0x14091E8F4 (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x140925FFC (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x140943AFC (EtwpTrackGuidEntryRegistrations.c)
 *     ExpTimeZoneWork @ 0x14094E440 (ExpTimeZoneWork.c)
 *     ObCreateSiloRootDirectory @ 0x140982DB0 (ObCreateSiloRootDirectory.c)
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
