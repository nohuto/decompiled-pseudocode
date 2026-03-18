/*
 * XREFs of ?AssignProperty@FxDevice@@QEAAJPEAXW4FxPropertyType@@KK0@Z @ 0x1C001423C
 * Callers:
 *     imp_WdfDeviceAssignProperty @ 0x1C0014190 (imp_WdfDeviceAssignProperty.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C0015030 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 */

__int64 __fastcall FxDevice::AssignProperty(
        FxDevice *this,
        void *PropertyData,
        FxPropertyType Type,
        unsigned int BufferLength,
        ULONG PropertyBuffer,
        void *PropertyData_0)
{
  _DEVICE_OBJECT *SafePhysicalDevice; // rcx
  LCID v8; // r8d
  DEVPROPTYPE v9; // r9d
  const DEVPROPKEY *v10; // r10
  ULONG v11; // r11d
  NTSTATUS v12; // edi
  const void *ObjectHandleUnchecked; // rax
  unsigned __int16 v15; // r9
  unsigned int v16; // r8d

  SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this);
  if ( !SafePhysicalDevice )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v15 = 21;
    v12 = -1073741436;
    v16 = 18;
LABEL_6:
    WPP_IFR_SF_qL(this->m_Globals, 2u, v16, v15, WPP_FxDeviceKm_cpp_Traceguids, ObjectHandleUnchecked, v12);
    return (unsigned int)v12;
  }
  v12 = IoSetDevicePropertyData(SafePhysicalDevice, v10, v8, v11, v9, PropertyBuffer, PropertyData_0);
  if ( v12 < 0 )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v15 = 22;
    v16 = 12;
    goto LABEL_6;
  }
  return (unsigned int)v12;
}
