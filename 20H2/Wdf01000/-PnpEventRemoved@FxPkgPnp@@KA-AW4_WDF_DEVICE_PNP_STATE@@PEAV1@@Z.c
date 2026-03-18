/*
 * XREFs of ?PnpEventRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007A5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0010CEC (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0010DB0 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C0016EE8 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     ?NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z @ 0x1C003B388 (-NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventRemoved(FxPkgPnp *This)
{
  FxTransactionedEntry *v2; // rdi
  FxEnumerationInfo *m_EnumInfo; // rcx
  FxTransactionedEntry *NextEntryLocked; // rax
  __int64 v5; // r8
  __int64 result; // rax

  v2 = 0LL;
  m_EnumInfo = This->m_EnumInfo;
  if ( m_EnumInfo )
  {
    FxTransactionedList::LockForEnum(&m_EnumInfo->m_ChildListList, This->m_Globals);
    while ( 1 )
    {
      NextEntryLocked = FxTransactionedList::GetNextEntryLocked(&This->m_EnumInfo->m_ChildListList, v2);
      v2 = NextEntryLocked;
      if ( !NextEntryLocked )
        break;
      FxChildList::NotifyDeviceRemove(
        (FxChildList *)&NextEntryLocked[-3].m_TransactionLink.Blink,
        &This->m_PendingChildCount);
    }
    FxTransactionedList::UnlockFromEnum((FxTransactionedList *)(v5 + 40), This->m_Globals);
  }
  result = 310LL;
  if ( _InterlockedExchangeAdd(&This->m_PendingChildCount, 0xFFFFFFFF) > 1 )
    return 293LL;
  return result;
}
