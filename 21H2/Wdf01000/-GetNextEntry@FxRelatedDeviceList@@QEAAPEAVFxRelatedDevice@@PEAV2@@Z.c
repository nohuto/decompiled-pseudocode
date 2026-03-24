/*
 * XREFs of ?GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z @ 0x1C0091494
 * Callers:
 *     imp_WdfDeviceClearRemovalRelationsDevices @ 0x1C0048F50 (imp_WdfDeviceClearRemovalRelationsDevices.c)
 *     ?ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ @ 0x1C0078F70 (-ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x1C0080654 (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C00810DC (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C0016E48 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 */

FxTransactionedEntry *__fastcall FxRelatedDeviceList::GetNextEntry(FxRelatedDeviceList *this, FxRelatedDevice *Entry)
{
  FxTransactionedEntry *result; // rax

  result = FxTransactionedList::GetNextEntryLocked(
             this,
             (FxTransactionedEntry *)((unsigned __int64)&Entry->m_TransactionedEntry & -(__int64)(Entry != 0LL)));
  if ( result )
    return (FxTransactionedEntry *)((char *)result - 104);
  return result;
}
