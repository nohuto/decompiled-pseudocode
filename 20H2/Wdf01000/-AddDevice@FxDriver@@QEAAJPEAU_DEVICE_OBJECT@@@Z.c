/*
 * XREFs of ?AddDevice@FxDriver@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0054B40
 * Callers:
 *     ?AddDevice@FxDriver@@CAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0054B00 (-AddDevice@FxDriver@@CAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ??0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z @ 0x1C004EFE4 (--0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z.c)
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C004F1C4 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     ?DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z @ 0x1C00511EC (-DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z.c)
 */

__int64 __fastcall FxDriver::AddDevice(FxDriver *this, _DEVICE_OBJECT *PhysicalDeviceObject)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int64 ObjectHandleUnchecked; // rbx
  int (__fastcall *Method)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rax
  FxCallbackLock *m_CallbackLock; // rcx
  int v8; // eax
  __int64 v9; // rdx
  FxCallbackLock *v10; // rcx
  int v11; // ebx
  _FX_DRIVER_GLOBALS *v12; // rcx
  unsigned __int8 v14[16]; // [rsp+30h] [rbp-3E8h] BYREF
  WDFDEVICE_INIT init; // [rsp+40h] [rbp-3D8h] BYREF

  WDFDEVICE_INIT::WDFDEVICE_INIT(&init, this);
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0xAu, WPP_FxDriverKm_cpp_Traceguids, PhysicalDeviceObject);
  init.InitType = FxDeviceInitTypeFdo;
  init.CreatedOnStack = 1;
  init.Fdo.PhysicalDevice = PhysicalDeviceObject;
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
  Method = this->m_DriverDeviceAdd.Method;
  if ( Method )
  {
    m_CallbackLock = this->m_DriverDeviceAdd.m_CallbackLock;
    v14[0] = 0;
    if ( m_CallbackLock )
    {
      m_CallbackLock->Lock(m_CallbackLock, v14);
      Method = this->m_DriverDeviceAdd.Method;
    }
    v8 = Method((WDFDRIVER__ *)ObjectHandleUnchecked, &init);
    v10 = this->m_DriverDeviceAdd.m_CallbackLock;
    v11 = v8;
    if ( v10 )
    {
      LOBYTE(v9) = v14[0];
      v10->Unlock(v10, v9);
    }
  }
  else
  {
    v11 = -1073741823;
  }
  if ( init.CreatedDevice )
  {
    if ( v11 < 0 )
      v11 = FxDevice::DeleteDeviceFromFailedCreate((FxDevice *)init.CreatedDevice, v11, 1u);
    else
      *(_DWORD *)(*((_QWORD *)init.CreatedDevice + 18) + 48LL) &= ~0x80u;
    v12 = this->m_Globals;
    if ( v12->FxVerboseOn )
      WPP_IFR_SF_d(v12, 5u, 0xCu, 0xDu, WPP_FxDriverKm_cpp_Traceguids, v11);
  }
  else
  {
    WPP_IFR_SF_d(this->m_Globals, 3u, 0xCu, 0xBu, WPP_FxDriverKm_cpp_Traceguids, v11);
    if ( init.Fdo.Filter && v11 < 0 )
    {
      WPP_IFR_SF_d(this->m_Globals, 4u, 0xCu, 0xCu, WPP_FxDriverKm_cpp_Traceguids, v11);
      v11 = 0;
    }
  }
  WDFDEVICE_INIT::~WDFDEVICE_INIT(&init);
  return (unsigned int)v11;
}
