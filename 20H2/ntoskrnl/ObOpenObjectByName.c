/*
 * XREFs of ObOpenObjectByName @ 0x14060CA70
 * Callers:
 *     NtOpenJobObject @ 0x1405D5F70 (NtOpenJobObject.c)
 *     CmpLinkHiveToMaster @ 0x1405DA88C (CmpLinkHiveToMaster.c)
 *     CmOpenKey @ 0x14060C320 (CmOpenKey.c)
 *     NtOpenDirectoryObject @ 0x1406B9E40 (NtOpenDirectoryObject.c)
 *     NtOpenSection @ 0x1406BA000 (NtOpenSection.c)
 *     NtOpenEvent @ 0x1406BD660 (NtOpenEvent.c)
 *     NtOpenMutant @ 0x1406C4820 (NtOpenMutant.c)
 *     NtOpenSemaphore @ 0x1406C5980 (NtOpenSemaphore.c)
 *     ExCreateCallback @ 0x1406DD3F0 (ExCreateCallback.c)
 *     NtOpenSession @ 0x1406E03F0 (NtOpenSession.c)
 *     CmCreateKey @ 0x1406FF300 (CmCreateKey.c)
 *     IopReferenceDriverObjectByName @ 0x140737084 (IopReferenceDriverObjectByName.c)
 *     IopLoadDriver @ 0x140737DD0 (IopLoadDriver.c)
 *     IopUnloadDriver @ 0x140766018 (IopUnloadDriver.c)
 *     CmpCreatePredefined @ 0x14079DBC8 (CmpCreatePredefined.c)
 *     NtOpenPartition @ 0x1407CD710 (NtOpenPartition.c)
 *     NtOpenRegistryTransaction @ 0x14086A960 (NtOpenRegistryTransaction.c)
 *     CmpDoReOpenTransKey @ 0x140884D18 (CmpDoReOpenTransKey.c)
 *     NtOpenIoCompletion @ 0x140896E90 (NtOpenIoCompletion.c)
 *     NtOpenTimer @ 0x140951990 (NtOpenTimer.c)
 *     NtOpenKeyedEvent @ 0x14095D8C0 (NtOpenKeyedEvent.c)
 *     CmInitSystem1 @ 0x140A58954 (CmInitSystem1.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140211160 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x14060CAF0 (ObOpenObjectByNameEx.c)
 */

__int64 __fastcall ObOpenObjectByName(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  struct _LIST_ENTRY *CurrentSilo; // rax

  CurrentSilo = PsGetCurrentSilo();
  return ObOpenObjectByNameEx(a1, a2, a3, a4, a5, a6, CurrentSilo, a7);
}
