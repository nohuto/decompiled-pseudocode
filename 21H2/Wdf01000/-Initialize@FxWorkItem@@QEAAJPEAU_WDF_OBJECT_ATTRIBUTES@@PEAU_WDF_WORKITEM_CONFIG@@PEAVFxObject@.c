/*
 * XREFs of ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C00191FC
 * Callers:
 *     ?_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C0018CCC (-_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIB.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C00193BC (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C00196F8 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z @ 0x1C0019730 (-_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z.c)
 *     ?Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0019A6C (-Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 */

__int64 __fastcall FxWorkItem::Initialize(
        FxWorkItem *this,
        _FX_DRIVER_GLOBALS *Attributes,
        _WDF_WORKITEM_CONFIG *Config,
        FxObject *ParentObject,
        WDFWORKITEM__ **WorkItem)
{
  void (__fastcall *EvtWorkItemFunc)(WDFWORKITEM__ *); // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxDeviceBase *v11; // rax
  int EffectiveLock; // ebx
  void *v13; // r8
  void **v14; // r8
  IFxHasCallbacks *pCallbacks; // [rsp+60h] [rbp+8h] BYREF

  EvtWorkItemFunc = Config->EvtWorkItemFunc;
  pCallbacks = 0LL;
  m_Globals = this->m_Globals;
  this->m_Callback = EvtWorkItemFunc;
  FxObject::AddRef(this, this, 178, "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp");
  v11 = FxDeviceBase::_SearchForDevice(ParentObject, &pCallbacks);
  this->m_DeviceBase = v11;
  if ( !v11 )
    return 3221225488LL;
  EffectiveLock = FxObject::_GetEffectiveLock(
                    ParentObject,
                    pCallbacks,
                    Config->AutomaticSerialization,
                    1u,
                    &this->m_CallbackLock,
                    &this->m_CallbackLockObject);
  if ( EffectiveLock < 0 )
  {
    if ( EffectiveLock == -1071644148 )
      WPP_IFR_SF_qL(
        m_Globals,
        2u,
        0x12u,
        0xCu,
        WPP_FxWorkItem_cpp_Traceguids,
        Attributes->DestroyEvent.m_Event.Header.WaitListHead.Flink,
        0xC020020C);
  }
  else
  {
    MxWorkItem::Allocate(&this->m_WorkItem, this->m_DeviceBase->m_DeviceObject.m_DeviceObject, v13);
    if ( this->m_WorkItem.m_WorkItem )
    {
      FxObject::AddRef(ParentObject, this, 269, "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp");
      v14 = (void **)WorkItem;
      this->m_Object = ParentObject;
      return FxObject::Commit(this, Attributes, v14, ParentObject, 1u);
    }
    EffectiveLock = -1073741670;
    WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xDu, WPP_FxWorkItem_cpp_Traceguids, -1073741670);
  }
  return (unsigned int)EffectiveLock;
}
