/*
 * XREFs of ?CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0051010
 * Callers:
 *     ?ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C004FA0C (-ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C004FE30 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0050270 (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?ShouldCreateSecure@WDFDEVICE_INIT@@QEAAEXZ @ 0x1C004F49C (-ShouldCreateSecure@WDFDEVICE_INIT@@QEAAEXZ.c)
 *     ?Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C008D300 (-Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C00C4218 (WdmlibIoCreateDeviceSecure.c)
 */

NTSTATUS __fastcall FxDevice::CreateDevice(FxDevice *this, WDFDEVICE_INIT *DeviceInit)
{
  FxPkgGeneral *m_PkgGeneral; // rcx
  NTSTATUS result; // eax
  __int64 DeviceType; // rbx
  unsigned int Exclusive; // edi
  FxString *Sddl; // rdx
  const _UNICODE_STRING *DeviceClassGuid; // rdx
  NTSTATUS v10; // eax
  NTSTATUS v11; // r14d
  _DEVICE_OBJECT *v12; // rbx
  _DEVICE_OBJECT *v13; // rdi
  __int64 m_ObjectSize; // rax
  char *v15; // rax
  _DEVICE_OBJECT *v16; // rax
  _WDF_DEVICE_IO_TYPE ReadWriteIoType; // ecx
  _DEVICE_OBJECT *pNewDeviceObject; // [rsp+70h] [rbp+8h] BYREF

  m_PkgGeneral = this->m_PkgGeneral;
  pNewDeviceObject = 0LL;
  result = FxPkgGeneral::Initialize(m_PkgGeneral, DeviceInit);
  if ( result >= 0 )
  {
    DeviceType = DeviceInit->DeviceType;
    if ( (unsigned int)DeviceType < 0x3C )
      this->m_DefaultPriorityBoost = FxDevice::m_PriorityBoosts[DeviceType];
    Exclusive = DeviceInit->Characteristics;
    if ( WDFDEVICE_INIT::ShouldCreateSecure(DeviceInit) )
    {
      Sddl = DeviceInit->Security.Sddl;
      if ( Sddl )
        DeviceClassGuid = &Sddl->m_UnicodeString;
      else
        DeviceClassGuid = &SDDL_DEVOBJ_SYS_ALL_ADM_ALL;
      v10 = WdmlibIoCreateDeviceSecure(
              this->m_Driver->m_DriverObject.m_DriverObject,
              (unsigned int)DeviceClassGuid,
              (_UNICODE_STRING *)((__int64)&DeviceInit->DeviceName->m_UnicodeString & -(__int64)(DeviceInit->DeviceName != 0LL)),
              DeviceType,
              Exclusive,
              this->m_Exclusive,
              DeviceClassGuid,
              (const _GUID *)((unsigned __int64)&DeviceInit->Security.DeviceClass & -(__int64)(DeviceInit->Security.DeviceClassSet != 0)),
              &pNewDeviceObject);
    }
    else
    {
      v10 = IoCreateDevice(
              this->m_Driver->m_DriverObject.m_DriverObject,
              0x28u,
              0LL,
              DeviceType,
              Exclusive,
              this->m_Exclusive,
              &pNewDeviceObject);
    }
    v11 = v10;
    if ( v10 >= 0 )
    {
      v12 = pNewDeviceObject;
      v13 = pNewDeviceObject + 1;
      IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)&pNewDeviceObject[1], this->m_Globals->Tag, 0, 0, 0x20u);
      LODWORD(v13->CurrentIrp) = DeviceInit->RemoveLockOptionFlags | this->m_Globals->RemoveLockOptionFlags;
      m_ObjectSize = this->m_ObjectSize;
      v15 = (_WORD)m_ObjectSize ? (char *)this + m_ObjectSize : 0LL;
      v12->DeviceExtension = v15 + 48;
      v16 = pNewDeviceObject;
      this->m_DeviceObject.m_DeviceObject = pNewDeviceObject;
      if ( !this->m_Filter )
      {
        ReadWriteIoType = DeviceInit->ReadWriteIoType;
        if ( ReadWriteIoType == WdfDeviceIoBuffered )
        {
          v16->Flags |= 4u;
        }
        else if ( ReadWriteIoType == WdfDeviceIoDirect )
        {
          v16->Flags |= 0x10u;
        }
        this->m_ReadWriteIoType = DeviceInit->ReadWriteIoType;
        this->m_PowerPageableCapable = DeviceInit->PowerPageable;
      }
    }
    return v11;
  }
  return result;
}
