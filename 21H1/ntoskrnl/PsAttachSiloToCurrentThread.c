/*
 * XREFs of PsAttachSiloToCurrentThread @ 0x1402E1A30
 * Callers:
 *     NtSetInformationThread @ 0x1405FBA80 (NtSetInformationThread.c)
 *     ObCloseHandleTableEntry @ 0x140628AD0 (ObCloseHandleTableEntry.c)
 *     ObpIncrementHandleCountEx @ 0x140629320 (ObpIncrementHandleCountEx.c)
 *     EtwpLogger @ 0x14067AF70 (EtwpLogger.c)
 *     EtwpEnableGuid @ 0x14067E254 (EtwpEnableGuid.c)
 *     ExpWnfLookupPermanentName @ 0x14068A1F4 (ExpWnfLookupPermanentName.c)
 *     ObpDecrementHandleCount @ 0x14068AA54 (ObpDecrementHandleCount.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D2BF4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspExitThread @ 0x1407064A0 (PspExitThread.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x14071F104 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     MmLoadSystemImageEx @ 0x1407444BC (MmLoadSystemImageEx.c)
 *     MmUnloadSystemImage @ 0x14075D670 (MmUnloadSystemImage.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x140786A3C (EtwpUpdateFileInfoDriverRegistration.c)
 *     SepRmCommandServerThread @ 0x1407953A0 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x140795520 (SepRmLsaConnectRequest.c)
 *     EtwInitializeSiloState @ 0x14079FC30 (EtwInitializeSiloState.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x14087E7D8 (VrpHandleIoctlGetVirtualRootKey.c)
 *     DbgkInitializeServerSilo @ 0x14087FF78 (DbgkInitializeServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x140902018 (PspDeleteExternalServerSiloState.c)
 *     PspShutdownCsrProcess @ 0x140902470 (PspShutdownCsrProcess.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x140902798 (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409028E0 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x140902A0C (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x140902B34 (PspSiloLoadApiSets.c)
 *     SeInitServerSilo @ 0x140917A10 (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x14091EF2C (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x14093CAC0 (EtwpTrackGuidEntryRegistrations.c)
 *     ObCreateSiloRootDirectory @ 0x14097BC40 (ObCreateSiloRootDirectory.c)
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
