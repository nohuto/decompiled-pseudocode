/*
 * XREFs of ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C001ED40
 * Callers:
 *     ?Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C001EC3C (-Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C00193BC (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z @ 0x1C0019730 (-_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C00199A0 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x1C00233E4 (-_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPE.c)
 *     ?MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0026218 (-MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 */

__int64 __fastcall FxInterrupt::InitializeWorker(
        FxInterrupt *this,
        FxObject *Parent,
        _WDF_INTERRUPT_CONFIG *Configuration)
{
  unsigned __int16 m_Type; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _WDF_TRI_STATE ReportInactiveOnPowerDown; // ecx
  unsigned __int8 PassiveHandling; // al
  WDFSPINLOCK__ *SpinLock; // rdx
  unsigned __int64 *p_m_Lock; // rax
  FxDeviceBase *v12; // rax
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int8 v14; // r9
  __int64 result; // rax
  WDFWAITLOCK__ *v16; // rdx
  int v17; // eax
  unsigned int v18; // edi
  int v19; // eax
  unsigned int v20; // ebx
  const void *ObjectHandleUnchecked; // rax
  _WDF_OBJECT_ATTRIBUTES attributes; // [rsp+40h] [rbp-40h] BYREF
  WDFWAITLOCK__ *waitLock; // [rsp+C0h] [rbp+40h] BYREF
  IFxHasCallbacks *callbacks; // [rsp+C8h] [rbp+48h] BYREF
  FxObject *tmpObject; // [rsp+D0h] [rbp+50h] BYREF

  m_Type = Parent->m_Type;
  m_Globals = this->m_Globals;
  this->m_EvtInterruptIsr = Configuration->EvtInterruptIsr;
  this->m_EvtInterruptDpc = Configuration->EvtInterruptDpc;
  this->m_EvtInterruptWorkItem = Configuration->EvtInterruptWorkItem;
  ReportInactiveOnPowerDown = Configuration->ReportInactiveOnPowerDown;
  tmpObject = 0LL;
  callbacks = 0LL;
  if ( ReportInactiveOnPowerDown )
  {
    if ( ReportInactiveOnPowerDown == WdfTrue )
      this->m_UseSoftDisconnect = 1;
  }
  else
  {
    this->m_UseSoftDisconnect = 0;
  }
  PassiveHandling = Configuration->PassiveHandling;
  this->m_PassiveHandling = PassiveHandling;
  SpinLock = Configuration->SpinLock;
  if ( SpinLock )
  {
    waitLock = 0LL;
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)SpinLock, 0x1024u, (void **)&waitLock);
    *((_BYTE *)waitLock + 121) = 1;
    p_m_Lock = (unsigned __int64 *)(waitLock + 28);
    goto LABEL_7;
  }
  if ( !PassiveHandling )
  {
    p_m_Lock = &this->m_BuiltInSpinLock.m_Lock;
LABEL_7:
    this->m_SpinLock = p_m_Lock;
  }
  v12 = FxDeviceBase::_SearchForDevice(Parent, &callbacks);
  m_DeviceBase = this->m_DeviceBase;
  if ( !m_DeviceBase || v12 != m_DeviceBase || (unsigned __int16)(m_Type - 4098) > 1u )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(Parent);
    v20 = -1073741811;
    WPP_IFR_SF_qqd(
      m_Globals,
      2u,
      0xCu,
      0x12u,
      WPP_InterruptObject_cpp_Traceguids,
      ObjectHandleUnchecked,
      Configuration,
      -1073741811);
    return v20;
  }
  if ( Configuration->EvtInterruptWorkItem )
  {
    v14 = 1;
  }
  else if ( Configuration->EvtInterruptDpc )
  {
    v14 = 0;
  }
  else
  {
    v14 = this->m_PassiveHandling != 0;
  }
  result = FxObject::_GetEffectiveLock(
             Parent,
             callbacks,
             Configuration->AutomaticSerialization,
             v14,
             &this->m_CallbackLock,
             &tmpObject);
  if ( (int)result >= 0 )
  {
    if ( m_Type == 4099 )
      FxObject::MarkNoDeleteDDI(Parent, ObjectLock);
    if ( this->m_PassiveHandling )
    {
      v16 = Configuration->WaitLock;
      if ( v16 )
        FxObjectHandleGetPtr(this->m_Globals, (unsigned __int64)v16, 0x1023u, (void **)&this->m_WaitLock);
      if ( !this->m_WaitLock )
      {
        waitLock = 0LL;
        attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
        memset(&attributes, 0, 24);
        attributes.Size = 56;
        memset(&attributes.ParentObject, 0, 24);
        attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
        v17 = FxWaitLock::_Create(m_Globals, &attributes, 0LL, 0, &waitLock);
        v18 = v17;
        if ( v17 < 0 )
        {
          WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0x13u, WPP_InterruptObject_cpp_Traceguids, v17);
          return v18;
        }
        FxObjectHandleGetPtr(m_Globals, (unsigned __int64)waitLock, 0x1023u, (void **)&this->m_WaitLock);
        this->m_DisposeWaitLock = 1;
      }
    }
    if ( this->m_EvtInterruptWorkItem || FxLibraryGlobals.IsUserModeFramework && this->m_EvtInterruptDpc )
    {
      v19 = FxSystemWorkItem::_Create(
              m_Globals,
              this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
              &this->m_SystemWorkItem);
      v20 = v19;
      if ( v19 < 0 )
      {
        WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0x14u, WPP_InterruptObject_cpp_Traceguids, v19);
        return v20;
      }
    }
    return 0LL;
  }
  return result;
}
