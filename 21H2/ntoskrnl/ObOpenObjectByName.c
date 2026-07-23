/*
 * XREFs of ObOpenObjectByName @ 0x14064AA70
 * Callers:
 *     NtOpenJobObject @ 0x1405D8F10 (NtOpenJobObject.c)
 *     NtOpenDirectoryObject @ 0x1405F2670 (NtOpenDirectoryObject.c)
 *     NtOpenSection @ 0x1405F2830 (NtOpenSection.c)
 *     NtOpenEvent @ 0x1405F8370 (NtOpenEvent.c)
 *     NtOpenMutant @ 0x1405FFC70 (NtOpenMutant.c)
 *     NtOpenSemaphore @ 0x140601890 (NtOpenSemaphore.c)
 *     ExCreateCallback @ 0x14061C450 (ExCreateCallback.c)
 *     NtOpenSession @ 0x14061F580 (NtOpenSession.c)
 *     CmOpenKey @ 0x14064A150 (CmOpenKey.c)
 *     CmCreateKey @ 0x140665B70 (CmCreateKey.c)
 *     CmpLinkHiveToMaster @ 0x1406F8338 (CmpLinkHiveToMaster.c)
 *     IopLoadDriver @ 0x140740A28 (IopLoadDriver.c)
 *     IopReferenceDriverObjectByName @ 0x1407429F8 (IopReferenceDriverObjectByName.c)
 *     IopUnloadDriver @ 0x140769958 (IopUnloadDriver.c)
 *     CmpCreatePredefined @ 0x1407A7E88 (CmpCreatePredefined.c)
 *     NtOpenPartition @ 0x1407D1B30 (NtOpenPartition.c)
 *     NtOpenRegistryTransaction @ 0x1408686E0 (NtOpenRegistryTransaction.c)
 *     CmpDoReOpenTransKey @ 0x140882410 (CmpDoReOpenTransKey.c)
 *     NtOpenIoCompletion @ 0x1408945C0 (NtOpenIoCompletion.c)
 *     NtOpenTimer @ 0x14094F330 (NtOpenTimer.c)
 *     NtOpenKeyedEvent @ 0x14095B310 (NtOpenKeyedEvent.c)
 *     CmInitSystem1 @ 0x140A5AF78 (CmInitSystem1.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x14026A8D0 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x14064AAF0 (ObOpenObjectByNameEx.c)
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
