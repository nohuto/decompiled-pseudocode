/*
 * XREFs of ??1FxPkgPnp@@MEAA@XZ @ 0x1C0020990
 * Callers:
 *     ??1FxPkgPdo@@UEAA@XZ @ 0x1C001FC38 (--1FxPkgPdo@@UEAA@XZ.c)
 *     ??_EFxPkgPnp@@MEAAPEAXI@Z @ 0x1C0087B70 (--_EFxPkgPnp@@MEAAPEAXI@Z.c)
 *     ??1FxPkgFdo@@MEAA@XZ @ 0x1C008990C (--1FxPkgFdo@@MEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0006180 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ?Free@MxWorkItem@@QEAAXXZ @ 0x1C001AD70 (-Free@MxWorkItem@@QEAAXXZ.c)
 *     ??1FxPowerPolicyMachine@@QEAA@XZ @ 0x1C001FCC0 (--1FxPowerPolicyMachine@@QEAA@XZ.c)
 *     ??_GFxSelfManagedIoMachine@@QEAAPEAXI@Z @ 0x1C001FCFC (--_GFxSelfManagedIoMachine@@QEAAPEAXI@Z.c)
 *     ??1FxTransactionedList@@QEAA@XZ @ 0x1C002BAA0 (--1FxTransactionedList@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ??_GFxDeviceInterface@@QEAAPEAXI@Z @ 0x1C006FDC4 (--_GFxDeviceInterface@@QEAAPEAXI@Z.c)
 *     ??_GFxRelatedDeviceList@@QEAAPEAXI@Z @ 0x1C0083258 (--_GFxRelatedDeviceList@@QEAAPEAXI@Z.c)
 *     ??_GFxEnumerationInfo@@QEAAPEAXI@Z @ 0x1C0087B3C (--_GFxEnumerationInfo@@QEAAPEAXI@Z.c)
 *     SleepstudyHelper_Uninitialize @ 0x1C00BFAF4 (SleepstudyHelper_Uninitialize.c)
 */

void __fastcall FxPkgPnp::~FxPkgPnp(FxPkgPnp *this)
{
  unsigned int v2; // edx
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rcx
  FxCompanionTarget *m_CompanionTarget; // rcx
  _SINGLE_LIST_ENTRY *Next; // rdi
  FxSpinLockTransactionedList *m_DmaEnablerList; // rdi
  FxRelatedDeviceList *m_RemovalDeviceList; // rcx
  FxRelatedDeviceList *m_UsageDependentDeviceList; // rcx
  FxPnpStateCallback *m_PnpStateCallbacks; // rcx
  FxPowerStateCallback *m_PowerStateCallbacks; // rcx
  FxPowerPolicyStateCallback *m_PowerPolicyStateCallbacks; // rcx
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  FxEnumerationInfo *m_EnumInfo; // rcx
  FxCmResList *m_Resources; // rcx
  FxCmResList *m_ResourcesRaw; // rcx
  unsigned int v16; // edx
  FxDeviceInterface *v17; // rcx
  _SINGLE_LIST_ENTRY *v18; // rax

  this->__vftable = (FxPkgPnp_vtbl *)FxPkgPnp::`vftable';
  KeGetCurrentIrql();
  m_SleepStudy = this->m_SleepStudy;
  if ( m_SleepStudy )
  {
    if ( m_SleepStudy->ComponentPowerRef )
    {
      if ( unk_1C00AB328 )
      {
        unk_1C00AB328(m_SleepStudy->ComponentPowerRef);
        m_SleepStudy = this->m_SleepStudy;
      }
      m_SleepStudy->ComponentPowerRef = 0LL;
      m_SleepStudy = this->m_SleepStudy;
    }
    if ( m_SleepStudy->SleepStudyLibContext )
    {
      SleepstudyHelper_Uninitialize(m_SleepStudy->SleepStudyLibContext);
      this->m_SleepStudy->SleepStudyLibContext = 0LL;
      m_SleepStudy = this->m_SleepStudy;
    }
    ExFreePoolWithTag(m_SleepStudy, 0);
    this->m_SleepStudy = 0LL;
  }
  m_CompanionTarget = this->m_CompanionTarget;
  if ( m_CompanionTarget )
    m_CompanionTarget->Release(
      m_CompanionTarget,
      this,
      313,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
  Next = this->m_DeviceInterfaceHead.Next;
  while ( Next )
  {
    v17 = (FxDeviceInterface *)&Next[-6];
    v18 = Next;
    Next = Next->Next;
    v18->Next = 0LL;
    if ( v17 )
      FxDeviceInterface::`scalar deleting destructor'(v17, v2);
  }
  m_DmaEnablerList = this->m_DmaEnablerList;
  this->m_DeviceInterfaceHead.Next = 0LL;
  if ( m_DmaEnablerList )
  {
    m_DmaEnablerList->m_ListLock.m_DbgFlagIsInitialized = 0;
    FxTransactionedList::~FxTransactionedList(m_DmaEnablerList);
    FxPoolFree((FX_POOL_TRACKER *)m_DmaEnablerList);
    this->m_DmaEnablerList = 0LL;
  }
  m_RemovalDeviceList = this->m_RemovalDeviceList;
  if ( m_RemovalDeviceList )
  {
    FxRelatedDeviceList::`scalar deleting destructor'(m_RemovalDeviceList, v2);
    this->m_RemovalDeviceList = 0LL;
  }
  m_UsageDependentDeviceList = this->m_UsageDependentDeviceList;
  if ( m_UsageDependentDeviceList )
  {
    FxRelatedDeviceList::`scalar deleting destructor'(m_UsageDependentDeviceList, v2);
    this->m_UsageDependentDeviceList = 0LL;
  }
  m_PnpStateCallbacks = this->m_PnpStateCallbacks;
  if ( m_PnpStateCallbacks )
    FxPoolFree((FX_POOL_TRACKER *)m_PnpStateCallbacks);
  m_PowerStateCallbacks = this->m_PowerStateCallbacks;
  if ( m_PowerStateCallbacks )
    FxPoolFree((FX_POOL_TRACKER *)m_PowerStateCallbacks);
  m_PowerPolicyStateCallbacks = this->m_PowerPolicyStateCallbacks;
  if ( m_PowerPolicyStateCallbacks )
    FxPoolFree((FX_POOL_TRACKER *)m_PowerPolicyStateCallbacks);
  m_SelfManagedIoMachine = this->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine )
  {
    FxSelfManagedIoMachine::`scalar deleting destructor'(m_SelfManagedIoMachine);
    this->m_SelfManagedIoMachine = 0LL;
  }
  m_EnumInfo = this->m_EnumInfo;
  if ( m_EnumInfo )
  {
    FxEnumerationInfo::`scalar deleting destructor'(m_EnumInfo, v2);
    this->m_EnumInfo = 0LL;
  }
  m_Resources = this->m_Resources;
  if ( m_Resources )
  {
    m_Resources->Release(m_Resources, this, 383, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
    this->m_Resources = 0LL;
  }
  m_ResourcesRaw = this->m_ResourcesRaw;
  if ( m_ResourcesRaw )
  {
    m_ResourcesRaw->Release(
      m_ResourcesRaw,
      this,
      388,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
    this->m_ResourcesRaw = 0LL;
  }
  FxPowerPolicyMachine::~FxPowerPolicyMachine(&this->m_PowerPolicyMachine);
  this->m_PowerMachine.m_WaitWakeLock.m_DbgFlagIsInitialized = 0;
  MxWorkItem::Free(&this->m_PowerMachine.m_WorkItem);
  this->m_PowerMachine.m_QueueLock.m_DbgFlagIsInitialized = 0;
  MxWorkItem::Free(&this->m_PnpMachine.m_WorkItem);
  this->m_PnpMachine.m_QueueLock.m_DbgFlagIsInitialized = 0;
  FxNonPagedObject::~FxNonPagedObject(this, v16);
}
