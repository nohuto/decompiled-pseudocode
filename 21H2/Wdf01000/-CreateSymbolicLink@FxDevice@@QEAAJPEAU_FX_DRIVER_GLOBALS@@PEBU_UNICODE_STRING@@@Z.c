/*
 * XREFs of ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0031464
 * Callers:
 *     imp_WdfDeviceCreateSymbolicLink @ 0x1C00313A0 (imp_WdfDeviceCreateSymbolicLink.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C0015030 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00273A8 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ??1FxAutoString@@QEAA@XZ @ 0x1C00278E4 (--1FxAutoString@@QEAA@XZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C0053A68 (WPP_IFR_SF_qddd.c)
 */

__int64 __fastcall FxDevice::CreateSymbolicLink(
        FxDevice *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *SymbolicLinkName)
{
  bool v3; // zf
  FxAutoString *p_m_DeviceName; // r14
  signed int DeviceProperty; // ebx
  _DEVICE_OBJECT *SafePhysicalDevice; // r14
  FX_POOL **v11; // rax
  const void *ObjectHandleUnchecked; // rax
  unsigned __int16 v13; // dx
  unsigned __int16 v14; // r9
  const void *_a2; // rax
  int _a3; // edx
  int _a4; // r8d
  ULONG Tag; // ecx
  void *v19; // rax
  FxAutoString pdoName; // [rsp+50h] [rbp-20h] BYREF
  __m128i v21; // [rsp+60h] [rbp-10h] BYREF
  void *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int length; // [rsp+A0h] [rbp+30h] BYREF

  v3 = this->m_DeviceName.Buffer == 0LL;
  pdoName = 0LL;
  if ( !v3 )
  {
    p_m_DeviceName = (FxAutoString *)&this->m_DeviceName;
    goto LABEL_3;
  }
  length = 0;
  if ( this->m_Legacy || (SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this)) == 0LL )
  {
    DeviceProperty = -1073741436;
LABEL_17:
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v14 = v13;
LABEL_27:
    WPP_IFR_SF_qL(FxDriverGlobals, 2u, 0x12u, v14, WPP_FxDeviceKm_cpp_Traceguids, ObjectHandleUnchecked, DeviceProperty);
    goto LABEL_5;
  }
  DeviceProperty = IoGetDeviceProperty(SafePhysicalDevice, DevicePropertyPhysicalDeviceObjectName, 0, 0LL, &length);
  if ( (int)(DeviceProperty + 0x80000000) >= 0 && DeviceProperty != -1073741789 )
    goto LABEL_17;
  if ( length > 0xFFFF )
  {
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    DeviceProperty = -1073741675;
    WPP_IFR_SF_qddd(FxDriverGlobals, _a3, 0x12u, 0xFu, WPP_FxDeviceKm_cpp_Traceguids, _a2, _a3, _a4, -1073741675);
    goto LABEL_5;
  }
  if ( !length )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    DeviceProperty = -1073741436;
    v14 = 16;
    goto LABEL_27;
  }
  v3 = FxDriverGlobals->FxPoolTrackingOn == 0;
  Tag = FxDriverGlobals->Tag;
  v21.m128i_i64[0] = 0LL;
  v21.m128i_i64[1] = 256LL;
  if ( v3 )
    v19 = 0LL;
  else
    v19 = retaddr;
  v11 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, &v21, length, Tag, v19);
  if ( !v11 )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    DeviceProperty = -1073741670;
    v14 = 17;
    goto LABEL_27;
  }
  pdoName.m_UnicodeString.Buffer = (wchar_t *)v11;
  DeviceProperty = IoGetDeviceProperty(SafePhysicalDevice, DevicePropertyPhysicalDeviceObjectName, length, v11, &length);
  if ( DeviceProperty < 0 )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v14 = 18;
    goto LABEL_27;
  }
  p_m_DeviceName = &pdoName;
  pdoName.m_UnicodeString.MaximumLength = length;
  pdoName.m_UnicodeString.Length = length - 2;
LABEL_3:
  DeviceProperty = FxDuplicateUnicodeString(FxDriverGlobals, SymbolicLinkName, &this->m_SymbolicLinkName);
  if ( DeviceProperty < 0 )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v14 = 19;
    goto LABEL_27;
  }
  DeviceProperty = IoCreateSymbolicLink(&this->m_SymbolicLinkName, &p_m_DeviceName->m_UnicodeString);
  if ( DeviceProperty < 0 )
  {
    FxPoolFree((FX_POOL_TRACKER *)this->m_SymbolicLinkName.Buffer);
    this->m_SymbolicLinkName = 0LL;
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v14 = 20;
    goto LABEL_27;
  }
LABEL_5:
  FxAutoString::~FxAutoString(&pdoName);
  return (unsigned int)DeviceProperty;
}
