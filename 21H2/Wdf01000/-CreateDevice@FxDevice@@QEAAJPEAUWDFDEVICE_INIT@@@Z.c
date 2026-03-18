/*
 * XREFs of ?CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C002640C
 * Callers:
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0020D0C (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C002693C (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00347EC (-ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?ShouldCreateSecure@WDFDEVICE_INIT@@QEAAEXZ @ 0x1C00265EC (-ShouldCreateSecure@WDFDEVICE_INIT@@QEAAEXZ.c)
 *     ?Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0026654 (-Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C00BD964 (WdmlibIoCreateDeviceSecure.c)
 */

NTSTATUS __fastcall FxDevice::CreateDevice(FxDevice *this, WDFDEVICE_INIT *DeviceInit)
{
  FxPkgGeneral *m_PkgGeneral; // rcx
  NTSTATUS result; // eax
  __int64 DeviceType; // rbx
  unsigned int DeviceCharacteristics; // edi
  unsigned int v8; // edx
  NTSTATUS v9; // eax
  NTSTATUS v10; // r14d
  _DEVICE_OBJECT *v11; // rbx
  _DEVICE_OBJECT *v12; // rdi
  __int64 m_ObjectSize; // rax
  char *v14; // rax
  _DEVICE_OBJECT *v15; // rax
  _WDF_DEVICE_IO_TYPE ReadWriteIoType; // ecx
  FxString *Sddl; // r8
  const _UNICODE_STRING *p_m_UnicodeString; // r8
  _DEVICE_OBJECT *pNewDeviceObject; // [rsp+70h] [rbp+8h] BYREF

  m_PkgGeneral = this->m_PkgGeneral;
  pNewDeviceObject = 0LL;
  result = FxPkgGeneral::Initialize(m_PkgGeneral, DeviceInit);
  if ( result >= 0 )
  {
    DeviceType = DeviceInit->DeviceType;
    if ( (unsigned int)DeviceType < 0x3C )
      this->m_DefaultPriorityBoost = FxDevice::m_PriorityBoosts[DeviceType];
    DeviceCharacteristics = DeviceInit->Characteristics;
    if ( WDFDEVICE_INIT::ShouldCreateSecure(DeviceInit) )
    {
      Sddl = DeviceInit->Security.Sddl;
      if ( Sddl )
        p_m_UnicodeString = &Sddl->m_UnicodeString;
      else
        p_m_UnicodeString = &SDDL_DEVOBJ_SYS_ALL_ADM_ALL;
      LOBYTE(v8) = this->m_Exclusive;
      v9 = WdmlibIoCreateDeviceSecure(
             this->m_Driver->m_DriverObject.m_DriverObject,
             v8,
             (_UNICODE_STRING *)((__int64)&DeviceInit->DeviceName->m_UnicodeString & -(__int64)(DeviceInit->DeviceName != 0LL)),
             DeviceType,
             DeviceCharacteristics,
             v8,
             p_m_UnicodeString,
             (const _GUID *)((unsigned __int64)&DeviceInit->Security.DeviceClass & -(__int64)(DeviceInit->Security.DeviceClassSet != 0)),
             &pNewDeviceObject);
    }
    else
    {
      v9 = IoCreateDevice(
             this->m_Driver->m_DriverObject.m_DriverObject,
             0x28u,
             0LL,
             DeviceType,
             DeviceCharacteristics,
             this->m_Exclusive,
             &pNewDeviceObject);
    }
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = pNewDeviceObject;
      v12 = pNewDeviceObject + 1;
      IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)&pNewDeviceObject[1], this->m_Globals->Tag, 0, 0, 0x20u);
      LODWORD(v12->CurrentIrp) = DeviceInit->RemoveLockOptionFlags | this->m_Globals->RemoveLockOptionFlags;
      m_ObjectSize = this->m_ObjectSize;
      v14 = (_WORD)m_ObjectSize ? (char *)this + m_ObjectSize : 0LL;
      v11->DeviceExtension = v14 + 48;
      v15 = pNewDeviceObject;
      this->m_DeviceObject.m_DeviceObject = pNewDeviceObject;
      if ( !this->m_Filter )
      {
        ReadWriteIoType = DeviceInit->ReadWriteIoType;
        if ( ReadWriteIoType == WdfDeviceIoBuffered )
        {
          v15->Flags |= 4u;
        }
        else if ( ReadWriteIoType == WdfDeviceIoDirect )
        {
          v15->Flags |= 0x10u;
        }
        this->m_ReadWriteIoType = DeviceInit->ReadWriteIoType;
        this->m_PowerPageableCapable = DeviceInit->PowerPageable;
      }
    }
    return v10;
  }
  return result;
}
