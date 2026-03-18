/*
 * XREFs of ObOpenObjectByName @ 0x1405EB090
 * Callers:
 *     NtOpenJobObject @ 0x1405CE6F0 (NtOpenJobObject.c)
 *     CmOpenKey @ 0x1405EA950 (CmOpenKey.c)
 *     CmpLinkHiveToMaster @ 0x14068C2C8 (CmpLinkHiveToMaster.c)
 *     CmCreateKey @ 0x14068D940 (CmCreateKey.c)
 *     NtOpenDirectoryObject @ 0x1406C2230 (NtOpenDirectoryObject.c)
 *     NtOpenSection @ 0x1406C2300 (NtOpenSection.c)
 *     NtOpenEvent @ 0x1406C7CF0 (NtOpenEvent.c)
 *     NtOpenMutant @ 0x1406D0080 (NtOpenMutant.c)
 *     NtOpenSemaphore @ 0x1406D1620 (NtOpenSemaphore.c)
 *     ExCreateCallback @ 0x1406E71C0 (ExCreateCallback.c)
 *     NtOpenSession @ 0x1406EA250 (NtOpenSession.c)
 *     IopLoadDriver @ 0x140725EF8 (IopLoadDriver.c)
 *     IopReferenceDriverObjectByName @ 0x140727EC8 (IopReferenceDriverObjectByName.c)
 *     IopUnloadDriver @ 0x140754A50 (IopUnloadDriver.c)
 *     CmpCreatePredefined @ 0x14078EF28 (CmpCreatePredefined.c)
 *     NtOpenPartition @ 0x1407BBD10 (NtOpenPartition.c)
 *     NtOpenRegistryTransaction @ 0x140863C20 (NtOpenRegistryTransaction.c)
 *     CmpDoReOpenTransKey @ 0x14087DE9C (CmpDoReOpenTransKey.c)
 *     NtOpenIoCompletion @ 0x140890080 (NtOpenIoCompletion.c)
 *     NtOpenTimer @ 0x14094A830 (NtOpenTimer.c)
 *     NtOpenKeyedEvent @ 0x140956430 (NtOpenKeyedEvent.c)
 *     CmInitSystem1 @ 0x140A525D4 (CmInitSystem1.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140206860 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x1405EB110 (ObOpenObjectByNameEx.c)
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
