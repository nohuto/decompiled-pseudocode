/*
 * XREFs of ?Destroy@FxDevice@@QEAAXXZ @ 0x1C004FD2C
 * Callers:
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C003A578 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C0051224 (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x1C00514D0 (-Dispose@FxDevice@@UEAAEXZ.c)
 *     ?DeleteDevice@FxPkgPnp@@IEAAXXZ @ 0x1C007F6A4 (-DeleteDevice@FxPkgPnp@@IEAAXXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C0032328 (WPP_IFR_SF_qqq.c)
 *     ?DeleteSymbolicLink@FxDevice@@QEAAXXZ @ 0x1C004FCD0 (-DeleteSymbolicLink@FxDevice@@QEAAXXZ.c)
 */

void __fastcall FxDevice::Destroy(FxDevice *this)
{
  _DEVICE_OBJECT *m_DeviceObject; // rdx
  const void *_a2; // rax
  const void *_a1; // rdx
  _DEVICE_OBJECT *v5; // rcx
  _DEVICE_OBJECT *v6; // rcx
  wchar_t *Buffer; // rcx
  wchar_t *v8; // rcx

  m_DeviceObject = this->m_DeviceObject.m_DeviceObject;
  if ( m_DeviceObject )
    m_DeviceObject->DeviceExtension = 0LL;
  _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this);
  WPP_IFR_SF_qqq(
    this->m_Globals,
    4u,
    0x12u,
    0xBu,
    WPP_FxDeviceKm_cpp_Traceguids,
    _a1,
    _a2,
    this->m_AttachedDevice.FxDeviceBase::m_DeviceObject);
  v5 = this->m_AttachedDevice.FxDeviceBase::m_DeviceObject;
  if ( v5 )
  {
    IoDetachDevice(v5);
    this->m_AttachedDevice.FxDeviceBase::m_DeviceObject = 0LL;
  }
  if ( this->m_DeviceObject.m_DeviceObject )
  {
    FxDevice::DeleteSymbolicLink(this);
    v6 = this->m_DeviceObject.m_DeviceObject;
    if ( this->m_DeviceObjectDeleted )
      ObfDereferenceObject(v6);
    else
      IoDeleteDevice(v6);
    this->m_DeviceObject.m_DeviceObject = 0LL;
  }
  Buffer = this->m_DeviceName.Buffer;
  if ( Buffer )
  {
    FxPoolFree((FX_POOL_TRACKER *)Buffer);
    this->m_DeviceName = 0LL;
  }
  v8 = this->m_MofResourceName.Buffer;
  if ( v8 )
  {
    FxPoolFree((FX_POOL_TRACKER *)v8);
    this->m_MofResourceName = 0LL;
  }
}
