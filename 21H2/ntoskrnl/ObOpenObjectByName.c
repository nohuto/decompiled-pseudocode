/*
 * XREFs of ObOpenObjectByName @ 0x140655C50
 * Callers:
 *     NtOpenJobObject @ 0x1405D8F10 (NtOpenJobObject.c)
 *     CmOpenKey @ 0x140655330 (CmOpenKey.c)
 *     CmCreateKey @ 0x14066F690 (CmCreateKey.c)
 *     NtOpenDirectoryObject @ 0x140692FE0 (NtOpenDirectoryObject.c)
 *     NtOpenSection @ 0x1406931A0 (NtOpenSection.c)
 *     NtOpenEvent @ 0x140699680 (NtOpenEvent.c)
 *     NtOpenMutant @ 0x1406A0930 (NtOpenMutant.c)
 *     NtOpenSemaphore @ 0x1406A1960 (NtOpenSemaphore.c)
 *     ExCreateCallback @ 0x1406BD240 (ExCreateCallback.c)
 *     NtOpenSession @ 0x1406C0670 (NtOpenSession.c)
 *     CmpLinkHiveToMaster @ 0x14071E230 (CmpLinkHiveToMaster.c)
 *     IopLoadDriver @ 0x140740868 (IopLoadDriver.c)
 *     IopReferenceDriverObjectByName @ 0x140742838 (IopReferenceDriverObjectByName.c)
 *     IopUnloadDriver @ 0x140769798 (IopUnloadDriver.c)
 *     CmpCreatePredefined @ 0x1407A7C88 (CmpCreatePredefined.c)
 *     NtOpenPartition @ 0x1407D19C0 (NtOpenPartition.c)
 *     NtOpenRegistryTransaction @ 0x140868580 (NtOpenRegistryTransaction.c)
 *     CmpDoReOpenTransKey @ 0x1408822B0 (CmpDoReOpenTransKey.c)
 *     NtOpenIoCompletion @ 0x140894460 (NtOpenIoCompletion.c)
 *     NtOpenTimer @ 0x14094F160 (NtOpenTimer.c)
 *     NtOpenKeyedEvent @ 0x14095B140 (NtOpenKeyedEvent.c)
 *     CmInitSystem1 @ 0x140A59F78 (CmInitSystem1.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x14027C930 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x140655CD0 (ObOpenObjectByNameEx.c)
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
