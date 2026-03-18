/*
 * XREFs of ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x1C0031D90
 * Callers:
 *     imp_WdfDmaEnablerCreate @ 0x1C002EDA0 (imp_WdfDmaEnablerCreate.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0015188 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C002E65C (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_dd @ 0x1C002E798 (WPP_IFR_SF_dd.c)
 *     ?ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CONFIG@@@Z @ 0x1C0031890 (-ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CON.c)
 *     ?ReleaseResources@FxDmaEnabler@@AEAAXXZ @ 0x1C003250C (-ReleaseResources@FxDmaEnabler@@AEAAXXZ.c)
 *     WPP_IFR_SF_ @ 0x1C0032554 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_dLd @ 0x1C0032618 (WPP_IFR_SF_dLd.c)
 */

__int64 __fastcall FxDmaEnabler::Initialize(FxDmaEnabler *this, _WDF_DMA_ENABLER_CONFIG *Config, FxDeviceBase *Device)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  FxDeviceBase_vtbl *v7; // rax
  unsigned int v8; // r12d
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int _a2; // edi
  const void *_a1; // rax
  char v14; // dl
  unsigned __int8 v15; // r13
  _WDF_DMA_PROFILE Profile; // ecx
  __int32 v17; // ecx
  __int32 v18; // ecx
  __int32 v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  __int64 v25; // rdx
  FxDeviceBase_vtbl *v26; // rax
  unsigned __int8 v27; // di
  void (__fastcall *SetDeviceTelemetryInfoFlags)(FxDeviceBase *, FxDeviceInfoFlags); // rax
  char v29; // dl
  char v30; // dl
  char v31; // cl
  unsigned int AddressWidthOverride; // edx
  unsigned __int16 v33; // r9
  unsigned int WdmDmaVersionOverride; // eax
  const void *ObjectHandleUnchecked; // rax
  _FX_DRIVER_GLOBALS *v36; // r10
  __int16 v37; // r8
  unsigned __int16 v38; // r9
  bool v39; // zf
  FxDeviceBase *m_DeviceBase; // rcx
  FxDeviceBase *v41; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-60h]
  int globals; // [rsp+38h] [rbp-48h]
  _DEVICE_DESCRIPTION deviceDescription; // [rsp+40h] [rbp-40h] BYREF

  m_Globals = this->m_Globals;
  memset(&deviceDescription, 0, sizeof(deviceDescription));
  v7 = Device->FxNonPagedObject::FxObject::__vftable;
  v8 = 2;
  deviceDescription.Version = 2;
  v9 = v7->AllocateDmaEnablerList(Device);
  v11 = 0LL;
  _a2 = v9;
  if ( v9 >= 0 )
  {
    v14 = *((_BYTE *)this + 380);
    v15 = 1;
    this->m_DeviceBase = Device;
    Profile = Config->Profile;
    LOBYTE(v10) = v14 | 4;
    this->m_Profile = Profile;
    deviceDescription.Master = 1;
    deviceDescription.Dma32BitAddresses = 1;
    deviceDescription.InterfaceType = PCIBus;
    *((_BYTE *)this + 380) = v14 | 4;
    v17 = Profile - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( !v19 )
        {
          deviceDescription.ScatterGather = 0;
          goto LABEL_21;
        }
        v20 = v19 - 1;
        if ( !v20 )
        {
          v29 = v14 | 0xC;
LABEL_16:
          deviceDescription.ScatterGather = 1;
          *((_BYTE *)this + 380) = v29;
LABEL_21:
          v27 = 1;
          deviceDescription.Dma64BitAddresses = 1;
          v31 = 1;
          goto LABEL_26;
        }
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( v23 )
            {
              if ( v23 != 1 )
                return 3221225485LL;
              v25 = 128LL;
              *((_BYTE *)this + 380) = v10 & 0xEB | 0x10;
            }
            else
            {
              *((_BYTE *)this + 380) = v14 & 0xFB;
              v25 = 64LL;
            }
            v26 = Device->FxNonPagedObject::FxObject::__vftable;
            v8 = 3;
            deviceDescription.Version = 3;
            deviceDescription.Dma64BitAddresses = 0;
            v27 = 0;
            deviceDescription.Dma32BitAddresses = 0;
            v15 = 0;
            SetDeviceTelemetryInfoFlags = v26->SetDeviceTelemetryInfoFlags;
            *(_WORD *)&deviceDescription.Master = 0;
            SetDeviceTelemetryInfoFlags(Device, (FxDeviceInfoFlags)v25);
            v11 = 0LL;
            goto LABEL_25;
          }
          v29 = v14 | 0x1C;
          goto LABEL_16;
        }
        v30 = v14 | 0x1C;
      }
      else
      {
        v30 = v14 | 0xC;
      }
      deviceDescription.ScatterGather = 1;
      *((_BYTE *)this + 380) = v30;
    }
    else
    {
      deviceDescription.ScatterGather = 0;
    }
    v27 = 0;
    deviceDescription.Dma64BitAddresses = 0;
LABEL_25:
    v31 = 0;
LABEL_26:
    this->m_MaximumLength = Config->MaximumLength;
    AddressWidthOverride = Config->AddressWidthOverride;
    if ( AddressWidthOverride )
    {
      if ( (*((_BYTE *)this + 380) & 4) == 0 )
      {
        v33 = 11;
LABEL_29:
        WPP_IFR_SF_dLd(
          this->m_Globals,
          AddressWidthOverride,
          v10,
          v33,
          traceGuid,
          AddressWidthOverride,
          Config->Profile,
          globals);
LABEL_30:
        FxVerifierDbgBreakPoint(this->m_Globals);
        return 3221225485LL;
      }
      if ( !v31 && AddressWidthOverride > 0x20 )
      {
        v33 = 12;
        goto LABEL_29;
      }
      if ( FxLibraryGlobals.OsVersionInfo.dwMajorVersion > 6
        || FxLibraryGlobals.OsVersionInfo.dwMajorVersion == 6 && FxLibraryGlobals.OsVersionInfo.dwMinorVersion >= 2 )
      {
        v8 = 3;
        deviceDescription.DmaAddressWidth = Config->AddressWidthOverride;
        deviceDescription.Version = 3;
      }
      else
      {
        if ( AddressWidthOverride < 0x40 )
          v27 = 0;
        deviceDescription.Dma64BitAddresses = v27;
        if ( AddressWidthOverride < 0x20 )
          v15 = 0;
        deviceDescription.Dma32BitAddresses = v15;
        if ( AddressWidthOverride < 0x18 )
        {
          WPP_IFR_SF_(this->m_Globals, 2u, 0xFu, 0xDu, WPP_FxDmaEnabler_cpp_Traceguids);
          return 3221225473LL;
        }
        if ( ((AddressWidthOverride - 32) & 0xFFFFFFDF) != 0 )
        {
          WPP_IFR_SF_dd(
            this->m_Globals,
            3u,
            0xFu,
            0xEu,
            WPP_FxDmaEnabler_cpp_Traceguids,
            AddressWidthOverride,
            v15 != 0 ? 32 : 24);
          v11 = 0LL;
        }
      }
    }
    WdmDmaVersionOverride = Config->WdmDmaVersionOverride;
    if ( WdmDmaVersionOverride )
    {
      if ( WdmDmaVersionOverride < v8 )
      {
        WPP_IFR_SF_DDd(
          this->m_Globals,
          AddressWidthOverride,
          0xFu,
          0xFu,
          WPP_FxDmaEnabler_cpp_Traceguids,
          WdmDmaVersionOverride,
          v8,
          -1073741811);
        goto LABEL_30;
      }
      v8 = Config->WdmDmaVersionOverride;
      deviceDescription.Version = v8;
    }
    if ( v8 >= 3 && !deviceDescription.DmaAddressWidth )
    {
      if ( v27 )
        deviceDescription.DmaAddressWidth = 64;
      else
        deviceDescription.DmaAddressWidth = v15 != 0 ? 32 : 24;
    }
    if ( (Config->Flags & 2) != 0 )
    {
      if ( !_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, AddressWidthOverride, 0x13u) )
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
        v38 = 17;
        goto LABEL_59;
      }
      if ( v8 != 3 )
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
        v38 = v37 - 3;
LABEL_59:
        WPP_IFR_SF_qL(v36, 2u, 0xFu, v38, WPP_FxDmaEnabler_cpp_Traceguids, ObjectHandleUnchecked, 0xC000000D);
        goto LABEL_30;
      }
      *((_BYTE *)this + 380) |= 0x40u;
    }
    v39 = (*((_BYTE *)this + 380) & 4) == 0;
    m_DeviceBase = this->m_DeviceBase;
    this->m_FDO = m_DeviceBase->m_DeviceObject.m_DeviceObject;
    this->m_PDO = m_DeviceBase->m_PhysicalDevice.m_DeviceObject;
    if ( v39
      || (_a2 = FxDmaEnabler::ConfigureBusMasterAdapters(this, &deviceDescription, Config), (_a2 & 0x80000000) == 0) )
    {
      v41 = this->m_DeviceBase;
      this->m_EvtDmaEnablerFill.m_Method = Config->EvtDmaEnablerFill;
      this->m_EvtDmaEnablerFlush.m_Method = Config->EvtDmaEnablerFlush;
      this->m_EvtDmaEnablerEnable.m_Method = Config->EvtDmaEnablerEnable;
      this->m_EvtDmaEnablerDisable.m_Method = Config->EvtDmaEnablerDisable;
      this->m_EvtDmaEnablerSelfManagedIoStart.m_Method = Config->EvtDmaEnablerSelfManagedIoStart;
      this->m_EvtDmaEnablerSelfManagedIoStop.m_Method = Config->EvtDmaEnablerSelfManagedIoStop;
      ((void (__fastcall *)(FxDeviceBase *, FxDmaEnabler *, __int64, __int64))v41->AddDmaEnabler)(v41, this, v10, v11);
      *((_BYTE *)this + 380) |= 1u;
      if ( (*((_BYTE *)this + 380) & 4) != 0 )
        this->m_DeviceBase->SetDeviceTelemetryInfoFlags(this->m_DeviceBase, DeviceInfoDmaBusMaster);
      return 0;
    }
    else
    {
      FxDmaEnabler::ReleaseResources(this);
    }
    return _a2;
  }
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(Device);
  WPP_IFR_SF_qL(m_Globals, 2u, 0xFu, 0xAu, WPP_FxDmaEnabler_cpp_Traceguids, _a1, _a2);
  return _a2;
}
