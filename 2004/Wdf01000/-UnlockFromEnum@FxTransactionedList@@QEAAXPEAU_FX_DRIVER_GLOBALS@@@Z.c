/*
 * XREFs of ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0010CEC
 * Callers:
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C0004BD4 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C000FA30 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ @ 0x1C0010AE8 (-PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ @ 0x1C001C014 (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ.c)
 *     imp_WdfDeviceClearRemovalRelationsDevices @ 0x1C0048ED0 (imp_WdfDeviceClearRemovalRelationsDevices.c)
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x1C00525DC (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 *     ?ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ @ 0x1C0078EF0 (-ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ.c)
 *     ?PnpEventRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007AEA0 (-PnpEventRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ @ 0x1C007B370 (-PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x1C00805D4 (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 *     ?NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ @ 0x1C0080FAC (-NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C008105C (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ @ 0x1C0088880 (-PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxTransactionedList::UnlockFromEnum(FxTransactionedList *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  MxEvent *m_DeletingDoneEvent; // r14
  __int64 v5; // r8
  bool v6; // zf
  unsigned int m_ListLockedRecursionCount; // eax
  _LIST_ENTRY *p_m_TransactionHead; // rsi
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v10; // rax
  _LIST_ENTRY *v11; // rcx
  _LIST_ENTRY *v12; // rdi
  int v13; // ecx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v15; // rcx
  _LIST_ENTRY *v16; // rdx
  _LIST_ENTRY *v17; // rcx
  _LIST_ENTRY *v18; // rcx
  _LIST_ENTRY *v19; // rdi
  _LIST_ENTRY releaseHead; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int8 irql; // [rsp+60h] [rbp+20h] BYREF

  irql = 0;
  releaseHead.Blink = &releaseHead;
  releaseHead.Flink = &releaseHead;
  m_DeletingDoneEvent = 0LL;
  this->AcquireLock(this, FxDriverGlobals, &irql);
  v6 = this->m_ListLockedRecursionCount-- == 1;
  m_ListLockedRecursionCount = this->m_ListLockedRecursionCount;
  if ( v6 )
  {
    p_m_TransactionHead = &this->m_TransactionHead;
    while ( 1 )
    {
      Flink = p_m_TransactionHead->Flink;
      if ( p_m_TransactionHead->Flink == p_m_TransactionHead )
        break;
      if ( Flink->Blink != p_m_TransactionHead || (v11 = Flink->Flink, Flink->Flink->Blink != Flink) )
LABEL_27:
        __fastfail(3u);
      p_m_TransactionHead->Flink = v11;
      v12 = Flink - 1;
      v11->Blink = p_m_TransactionHead;
      Flink->Blink = Flink;
      Flink->Flink = Flink;
      v13 = (int)Flink[1].Flink;
      if ( v13 == 2 )
      {
        Blink = this->m_ListHead.Blink;
        if ( Blink->Flink != &this->m_ListHead )
          goto LABEL_27;
        v12->Flink = &this->m_ListHead;
        v12->Blink = Blink;
        Blink->Flink = v12;
        this->m_ListHead.Blink = v12;
        this->EntryAdded(this, (FxTransactionedEntry *)v12);
      }
      else if ( v13 == 3 )
      {
        v15 = v12->Flink;
        if ( v12->Flink->Blink != v12 )
          goto LABEL_27;
        v16 = v12->Blink;
        if ( v16->Flink != v12 )
          goto LABEL_27;
        v16->Flink = v15;
        v15->Blink = v16;
        v17 = releaseHead.Blink;
        if ( releaseHead.Blink->Flink != &releaseHead )
          goto LABEL_27;
        Flink->Blink = releaseHead.Blink;
        Flink->Flink = &releaseHead;
        v17->Flink = Flink;
        releaseHead.Blink = Flink;
        this->EntryRemoved(this, (FxTransactionedEntry *)v12);
      }
      LODWORD(v12[2].Flink) = 1;
    }
    m_ListLockedRecursionCount = this->m_ListLockedRecursionCount;
  }
  if ( !m_ListLockedRecursionCount && this->m_Deleting )
  {
    m_DeletingDoneEvent = this->m_DeletingDoneEvent;
    this->m_DeletingDoneEvent = 0LL;
  }
  LOBYTE(v5) = irql;
  this->ReleaseLock(this, FxDriverGlobals, v5);
  while ( 1 )
  {
    v10 = releaseHead.Flink;
    if ( releaseHead.Flink == &releaseHead )
      break;
    if ( releaseHead.Flink->Blink != &releaseHead )
      goto LABEL_27;
    v18 = releaseHead.Flink->Flink;
    if ( releaseHead.Flink->Flink->Blink != releaseHead.Flink )
      goto LABEL_27;
    releaseHead.Flink = releaseHead.Flink->Flink;
    v19 = v10 - 1;
    v18->Blink = &releaseHead;
    v10->Blink = v10;
    v10->Flink = v10;
    ((void (__fastcall *)(_LIST_ENTRY *, _LIST_ENTRY *, __int64, const char *))v10[1].Blink->Flink[1].Flink)(
      v10[1].Blink,
      &v10[-1],
      226LL,
      "minkernel\\wdf\\framework\\shared\\support\\fxtransactionedlist.cpp");
    if ( this->m_DeleteOnRemove )
      ((void (__fastcall *)(_LIST_ENTRY *))v19[2].Blink->Flink[3].Flink)(v19[2].Blink);
  }
  if ( m_DeletingDoneEvent )
    KeSetEvent(&m_DeletingDoneEvent->m_Event, 0, 0);
}
