/*
 * XREFs of ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C004FA60
 * Callers:
 *     imp_WdfDeviceCreateSymbolicLink @ 0x1C0047130 (imp_WdfDeviceCreateSymbolicLink.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C000F144 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C002EF1C (WPP_IFR_SF_qddd.c)
 *     ??1FxAutoString@@QEAA@XZ @ 0x1C00461B0 (--1FxAutoString@@QEAA@XZ.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00612BC (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 */

__int64 __fastcall FxDevice::CreateSymbolicLink(
        FxDevice *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *SymbolicLinkName)
{
  bool v3; // zf
  _DEVICE_OBJECT *SafePhysicalDevice; // r14
  NTSTATUS DeviceProperty; // ebx
  const void *ObjectHandleUnchecked; // rax
  unsigned __int16 v10; // dx
  unsigned __int16 v11; // r9
  const void *_a2; // rax
  int _a3; // edx
  int _a4; // r8d
  __int16 v15; // dx
  FX_POOL **v16; // rax
  FxAutoString *p_pdoName; // r14
  FxAutoString pdoName; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+28h]
  unsigned int length; // [rsp+90h] [rbp+30h] BYREF

  v3 = this->m_DeviceName.Buffer == 0LL;
  pdoName = 0LL;
  if ( v3 )
  {
    length = 0;
    if ( this->m_Legacy || (SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this)) == 0LL )
    {
      DeviceProperty = -1073741436;
LABEL_7:
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v11 = v10;
LABEL_22:
      WPP_IFR_SF_qL(
        FxDriverGlobals,
        2u,
        0x12u,
        v11,
        WPP_FxDeviceKm_cpp_Traceguids,
        ObjectHandleUnchecked,
        DeviceProperty);
      goto LABEL_23;
    }
    DeviceProperty = IoGetDeviceProperty(SafePhysicalDevice, DevicePropertyPhysicalDeviceObjectName, 0, 0LL, &length);
    if ( (int)(DeviceProperty + 0x80000000) >= 0 && DeviceProperty != -1073741789 )
      goto LABEL_7;
    if ( length > 0xFFFF )
    {
      _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      DeviceProperty = -1073741675;
      WPP_IFR_SF_qddd(FxDriverGlobals, _a3, 0x12u, 0xFu, WPP_FxDeviceKm_cpp_Traceguids, _a2, _a3, _a4, -1073741675);
      goto LABEL_23;
    }
    if ( !length )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      DeviceProperty = -1073741436;
      v11 = v15 + 16;
      goto LABEL_22;
    }
    v16 = FxPoolAllocator(
            FxDriverGlobals,
            &FxDriverGlobals->FxPoolFrameworks,
            1u,
            length,
            FxDriverGlobals->Tag,
            retaddr);
    if ( !v16 )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      DeviceProperty = -1073741670;
      v11 = 17;
      goto LABEL_22;
    }
    pdoName.m_UnicodeString.Buffer = (wchar_t *)v16;
    DeviceProperty = IoGetDeviceProperty(
                       SafePhysicalDevice,
                       DevicePropertyPhysicalDeviceObjectName,
                       length,
                       v16,
                       &length);
    if ( DeviceProperty < 0 )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v11 = 18;
      goto LABEL_22;
    }
    p_pdoName = &pdoName;
    pdoName.m_UnicodeString.MaximumLength = length;
    pdoName.m_UnicodeString.Length = length - 2;
  }
  else
  {
    p_pdoName = (FxAutoString *)&this->m_DeviceName;
  }
  DeviceProperty = FxDuplicateUnicodeString(FxDriverGlobals, SymbolicLinkName, &this->m_SymbolicLinkName);
  if ( DeviceProperty < 0 )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v11 = 19;
    goto LABEL_22;
  }
  DeviceProperty = IoCreateSymbolicLink(&this->m_SymbolicLinkName, &p_pdoName->m_UnicodeString);
  if ( DeviceProperty < 0 )
  {
    FxPoolFree((FX_POOL_TRACKER *)this->m_SymbolicLinkName.Buffer);
    this->m_SymbolicLinkName = 0LL;
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v11 = 20;
    goto LABEL_22;
  }
LABEL_23:
  FxAutoString::~FxAutoString(&pdoName);
  return (unsigned int)DeviceProperty;
}
