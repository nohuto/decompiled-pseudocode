/*
 * XREFs of ObOpenObjectByName @ 0x14067C970
 * Callers:
 *     NtOpenJobObject @ 0x14067AE50 (NtOpenJobObject.c)
 *     IopReferenceDriverObjectByName @ 0x14067BCBC (IopReferenceDriverObjectByName.c)
 *     NtOpenMutant @ 0x14067C690 (NtOpenMutant.c)
 *     NtOpenSemaphore @ 0x14067C760 (NtOpenSemaphore.c)
 *     NtOpenEvent @ 0x14067C810 (NtOpenEvent.c)
 *     NtOpenSection @ 0x14067C8E0 (NtOpenSection.c)
 *     CmpLinkHiveToMaster @ 0x14067C9E8 (CmpLinkHiveToMaster.c)
 *     ExCreateCallback @ 0x1406E0E40 (ExCreateCallback.c)
 *     NtOpenSession @ 0x1406E4870 (NtOpenSession.c)
 *     IopLoadDriver @ 0x14074A178 (IopLoadDriver.c)
 *     CmpCreatePredefined @ 0x14083451C (CmpCreatePredefined.c)
 *     IopUnloadDriver @ 0x140856DC0 (IopUnloadDriver.c)
 *     NtOpenPartition @ 0x1408617D0 (NtOpenPartition.c)
 *     NtOpenRegistryTransaction @ 0x14090E880 (NtOpenRegistryTransaction.c)
 *     CmpDoReOpenTransKey @ 0x140925ED0 (CmpDoReOpenTransKey.c)
 *     NtOpenIoCompletion @ 0x140936D60 (NtOpenIoCompletion.c)
 *     NtOpenTimer @ 0x1409FB550 (NtOpenTimer.c)
 *     NtOpenKeyedEvent @ 0x140A06EF0 (NtOpenKeyedEvent.c)
 *     CmInitSystem1 @ 0x140B15F88 (CmInitSystem1.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140347D50 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 */

__int64 __fastcall ObOpenObjectByName(__int64 a1, __int64 a2, char a3, __int64 a4, int a5, __int64 a6, __int64 a7)
{
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v12; // r8

  CurrentSilo = PsGetCurrentSilo();
  LOBYTE(v12) = a3;
  return ObOpenObjectByNameEx(a1, a2, v12, a4, a5, a6, CurrentSilo, a7);
}
