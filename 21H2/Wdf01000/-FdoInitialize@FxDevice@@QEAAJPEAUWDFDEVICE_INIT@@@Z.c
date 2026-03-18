/*
 * XREFs of ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C002693C
 * Callers:
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0023B1C (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z @ 0x1C0022C90 (-_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z.c)
 *     ?InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z @ 0x1C00240F0 (-InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z.c)
 *     ?MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0026218 (-MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?SetFilter@FxDevice@@QEAAJE@Z @ 0x1C00263B8 (-SetFilter@FxDevice@@QEAAJE@Z.c)
 *     ?CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C002640C (-CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PostCreateDeviceInitialize@FxWmiIrpHandler@@QEAAJXZ @ 0x1C002680C (-PostCreateDeviceInitialize@FxWmiIrpHandler@@QEAAJXZ.c)
 *     ?PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C002684C (-PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ @ 0x1C0026B98 (-PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ.c)
 *     ?CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0031E78 (-CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x1C003420C (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

int __fastcall FxDevice::FdoInitialize(FxDevice *this, WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  int result; // eax
  FxPkgFdo *v6; // rdx
  _DEVICE_OBJECT *v7; // rax
  _WDF_OBJECT_ATTRIBUTES *p_ListConfigAttributes; // r8
  FxPkgPnp *m_PkgPnp; // rcx
  FxPkgFdo *pkgFdo; // [rsp+40h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  pkgFdo = 0LL;
  if ( DeviceInit->Fdo.EventCallbacks.EvtDeviceFilterAddResourceRequirements
    && !DeviceInit->Fdo.EventCallbacks.EvtDeviceRemoveAddedResources )
  {
    WPP_IFR_SF_q(
      m_Globals,
      2u,
      0xCu,
      0xAu,
      WPP_FxDeviceKm_cpp_Traceguids,
      DeviceInit->Fdo.EventCallbacks.EvtDeviceFilterAddResourceRequirements);
    FxVerifierDbgBreakPoint(m_Globals);
    return -1073741436;
  }
  FxObject::MarkNoDeleteDDI(this, ObjectLock);
  this->m_PhysicalDevice.FxDeviceBase::m_DeviceObject = DeviceInit->Fdo.PhysicalDevice;
  this->m_PdoKnown = 1;
  result = FxPkgFdo::_Create(m_Globals, this, &pkgFdo);
  if ( result >= 0 )
  {
    v6 = pkgFdo;
    this->m_PkgPnp = pkgFdo;
    FxDevice::InstallPackage(this, v6);
    result = FxDevice::SetFilter(this, DeviceInit->Fdo.Filter);
    if ( result >= 0 )
    {
      result = this->m_PkgPnp->Initialize(this->m_PkgPnp, DeviceInit);
      if ( result >= 0 )
      {
        if ( !DeviceInit->Fdo.ListConfig.Size )
        {
LABEL_6:
          if ( DeviceInit->Fdo.EventCallbacks.Size )
          {
            m_PkgPnp = this->m_PkgPnp;
            m_PkgPnp[1].m_ChildEntry.Flink = (_LIST_ENTRY *)DeviceInit->Fdo.EventCallbacks.EvtDeviceFilterAddResourceRequirements;
            m_PkgPnp[1].m_ChildEntry.Blink = (_LIST_ENTRY *)DeviceInit->Fdo.EventCallbacks.EvtDeviceFilterRemoveResourceRequirements;
            m_PkgPnp[1].m_DisposeSingleEntry.Next = (_SINGLE_LIST_ENTRY *)DeviceInit->Fdo.EventCallbacks.EvtDeviceRemoveAddedResources;
          }
          result = FxDevice::CreateDevice(this, DeviceInit);
          if ( result >= 0 )
          {
            v7 = IoAttachDeviceToDeviceStack(
                   this->m_DeviceObject.m_DeviceObject,
                   this->m_PhysicalDevice.FxDeviceBase::m_DeviceObject);
            this->m_AttachedDevice.FxDeviceBase::m_DeviceObject = v7;
            if ( v7 )
            {
              if ( this->m_Filter )
              {
                FxDevice::SetFilterIoType(this);
                this->m_DeviceObject.m_DeviceObject->Flags |= this->m_AttachedDevice.FxDeviceBase::m_DeviceObject->Flags & 0x6000;
                this->m_DeviceObject.m_DeviceObject->DeviceType = this->m_AttachedDevice.FxDeviceBase::m_DeviceObject->DeviceType;
                this->m_DeviceObject.m_DeviceObject->Characteristics = this->m_AttachedDevice.FxDeviceBase::m_DeviceObject->Characteristics;
                if ( (this->m_DeviceObject.m_DeviceObject->Flags & 0x2000) != 0 )
                  this->m_PowerPageableCapable = 1;
              }
              else if ( DeviceInit->PowerPageable )
              {
                this->m_DeviceObject.m_DeviceObject->Flags |= 0x2000u;
              }
              else if ( DeviceInit->Inrush )
              {
                this->m_DeviceObject.m_DeviceObject->Flags |= 0x4000u;
              }
              result = FxWmiIrpHandler::PostCreateDeviceInitialize(this->m_PkgWmi);
              if ( result >= 0 )
              {
                result = FxPkgGeneral::PostCreateDeviceInitialize(this->m_PkgGeneral, DeviceInit);
                if ( result >= 0 )
                  return FxPkgFdo::PostCreateDeviceInitialize((FxPkgFdo *)this->m_PkgPnp);
              }
            }
            else
            {
              IoDeleteDevice(this->m_DeviceObject.m_DeviceObject);
              result = -1073741810;
              this->m_DeviceObject.m_DeviceObject = 0LL;
            }
          }
          return result;
        }
        p_ListConfigAttributes = &DeviceInit->Fdo.ListConfigAttributes;
        if ( !DeviceInit->Fdo.ListConfigAttributes.Size )
          p_ListConfigAttributes = 0LL;
        result = FxPkgFdo::CreateDefaultDeviceList(
                   (FxPkgFdo *)this->m_PkgPnp,
                   &DeviceInit->Fdo.ListConfig,
                   p_ListConfigAttributes);
        if ( result >= 0 )
        {
          this->SetDeviceTelemetryInfoFlags(this, DeviceInfoHasDynamicChildren);
          goto LABEL_6;
        }
      }
    }
  }
  return result;
}
