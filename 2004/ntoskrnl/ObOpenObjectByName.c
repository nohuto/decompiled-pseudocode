/*
 * XREFs of ObOpenObjectByName @ 0x1406945D0
 * Callers:
 *     NtOpenJobObject @ 0x1405CFAC0 (NtOpenJobObject.c)
 *     CmpLinkHiveToMaster @ 0x140650940 (CmpLinkHiveToMaster.c)
 *     CmCreateKey @ 0x140651FB0 (CmCreateKey.c)
 *     CmOpenKey @ 0x140693E90 (CmOpenKey.c)
 *     NtOpenDirectoryObject @ 0x1406E27B0 (NtOpenDirectoryObject.c)
 *     NtOpenSection @ 0x1406E2880 (NtOpenSection.c)
 *     NtOpenEvent @ 0x1406E83B0 (NtOpenEvent.c)
 *     NtOpenMutant @ 0x1406F1420 (NtOpenMutant.c)
 *     NtOpenSemaphore @ 0x1406F25E0 (NtOpenSemaphore.c)
 *     ExCreateCallback @ 0x14070B0F0 (ExCreateCallback.c)
 *     NtOpenSession @ 0x14070DFA0 (NtOpenSession.c)
 *     IopReferenceDriverObjectByName @ 0x1407285F4 (IopReferenceDriverObjectByName.c)
 *     IopLoadDriver @ 0x140729340 (IopLoadDriver.c)
 *     IopUnloadDriver @ 0x1407573D8 (IopUnloadDriver.c)
 *     CmpCreatePredefined @ 0x140791328 (CmpCreatePredefined.c)
 *     NtOpenPartition @ 0x1407BEE80 (NtOpenPartition.c)
 *     NtOpenRegistryTransaction @ 0x140864F40 (NtOpenRegistryTransaction.c)
 *     CmpDoReOpenTransKey @ 0x14087F18C (CmpDoReOpenTransKey.c)
 *     NtOpenIoCompletion @ 0x1408913A0 (NtOpenIoCompletion.c)
 *     NtOpenTimer @ 0x14094BBD0 (NtOpenTimer.c)
 *     NtOpenKeyedEvent @ 0x140957B00 (NtOpenKeyedEvent.c)
 *     CmInitSystem1 @ 0x140A582D4 (CmInitSystem1.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140299370 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x140694650 (ObOpenObjectByNameEx.c)
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
