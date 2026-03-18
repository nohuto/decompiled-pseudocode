/*
 * XREFs of ??1FxPkgPdo@@UEAA@XZ @ 0x1C001FC38
 * Callers:
 *     ??_EFxPkgPdo@@UEAAPEAXI@Z @ 0x1C001F420 (--_EFxPkgPdo@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?_CleanupList@FxDeviceText@@SAHPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C001FA30 (-_CleanupList@FxDeviceText@@SAHPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C0020990 (--1FxPkgPnp@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ??_GFxRelatedDeviceList@@QEAAPEAXI@Z @ 0x1C0083258 (--_GFxRelatedDeviceList@@QEAAPEAXI@Z.c)
 */

void __fastcall FxPkgPdo::~FxPkgPdo(FxPkgPdo *this, unsigned int a2)
{
  unsigned int v3; // edx
  wchar_t *m_IDsAllocation; // rcx
  FxChildList *m_OwningChildList; // rcx
  FxRelatedDeviceList *m_EjectionDeviceList; // rcx

  this->__vftable = (FxPkgPdo_vtbl *)FxPkgPdo::`vftable';
  FxDeviceText::_CleanupList(&this->m_DeviceTextHead, a2);
  m_IDsAllocation = this->m_IDsAllocation;
  if ( m_IDsAllocation )
  {
    FxPoolFree((FX_POOL_TRACKER *)m_IDsAllocation);
    this->m_IDsAllocation = 0LL;
  }
  m_OwningChildList = this->m_OwningChildList;
  if ( m_OwningChildList )
    m_OwningChildList->Release(
      m_OwningChildList,
      this,
      178,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpdo.cpp");
  m_EjectionDeviceList = this->m_EjectionDeviceList;
  if ( m_EjectionDeviceList )
  {
    FxRelatedDeviceList::`scalar deleting destructor'(m_EjectionDeviceList, v3);
    this->m_EjectionDeviceList = 0LL;
  }
  FxPkgPnp::~FxPkgPnp(this);
}
