/*
 * XREFs of imp_WdfUsbTargetDeviceSelectConfig @ 0x1C0078A20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00062C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_qLd @ 0x1C002C4F0 (WPP_IFR_SF_qLd.c)
 *     WPP_IFR_SF_DDd @ 0x1C0052E4C (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_dd @ 0x1C0053078 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qddd @ 0x1C0053A68 (WPP_IFR_SF_qddd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_qqddd @ 0x1C006CB20 (WPP_IFR_SF_qqddd.c)
 *     WPP_IFR_SF_qqDLd @ 0x1C0077AEC (WPP_IFR_SF_qqDLd.c)
 *     WPP_IFR_SF_qqLd @ 0x1C0077C28 (WPP_IFR_SF_qqLd.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C007CC50 (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C007D5CC (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C007DD10 (-SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0080138 (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0080420 (-SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CON.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceSelectConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS *Params)
{
  _FX_DRIVER_GLOBALS *v4; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  __int64 result; // rax
  unsigned __int8 v10; // dl
  unsigned int v11; // r8d
  unsigned __int16 v12; // r9
  FxUsbDevice *v13; // r10
  unsigned int v14; // edi
  unsigned __int8 m_NumInterfaces; // dl
  unsigned int v16; // esi
  _URB *_a3; // rax
  _USB_INTERFACE_DESCRIPTOR **InterfaceDescriptors; // rcx
  const void *ObjectHandleUnchecked; // rax
  const void *v21; // rax
  int v22; // edx
  int v23; // r8d
  unsigned int v24; // edi
  _USB_INTERFACE_DESCRIPTOR **v25; // r14
  const void *v26; // rax
  __int64 v27; // rdx
  int v28; // r8d
  const _GUID *_a1; // [rsp+20h] [rbp-58h]
  ULONG_PTR retaddr; // [rsp+78h] [rbp+0h]
  FxUsbDevice *pUsbDevice; // [rsp+80h] [rbp+8h] BYREF
  FxUsbInterface *pUsbInterface; // [rsp+98h] [rbp+20h] BYREF

  v4 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pUsbDevice = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice);
  m_Globals = pUsbDevice->m_Globals;
  if ( !Params )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    if ( Params->Size != 32 )
    {
      WPP_IFR_SF_DDd(m_Globals, 0x20u, 0xEu, 0xFu, WPP_FxUsbDeviceAPI_cpp_Traceguids, Params->Size, 32, -1073741820);
      return 3221225476LL;
    }
    if ( (unsigned int)(Params->Type - 1) > 5 )
    {
      v14 = -1073741811;
      WPP_IFR_SF_dd(m_Globals, 2u, 0xEu, 0x10u, WPP_FxUsbDeviceAPI_cpp_Traceguids, 32, -1073741811);
      return v14;
    }
    result = FxValidateObjectAttributes(m_Globals, PipesAttributes, 1);
    if ( (int)result < 0 )
      return result;
    v13 = pUsbDevice;
    if ( pUsbDevice->m_MismatchedInterfacesInConfigDescriptor )
    {
      v14 = -1073741808;
      WPP_IFR_SF_qLd(
        m_Globals,
        v10,
        0xEu,
        0x12u,
        WPP_FxUsbDeviceAPI_cpp_Traceguids,
        UsbDevice,
        Params->Type,
        -1073741808);
      return v14;
    }
    m_NumInterfaces = pUsbDevice->m_NumInterfaces;
    if ( !m_NumInterfaces )
    {
      WPP_IFR_SF_qLd(m_Globals, 0, 0xEu, 0x13u, WPP_FxUsbDeviceAPI_cpp_Traceguids, UsbDevice, Params->Type, 0);
      return 0LL;
    }
    if ( Params->Type == WdfUsbTargetDeviceSelectConfigTypeDeconfig )
      return (unsigned int)FxUsbDevice::Deconfig(pUsbDevice);
    if ( Params->Type != WdfUsbTargetDeviceSelectConfigTypeSingleInterface )
    {
      if ( Params->Type != WdfUsbTargetDeviceSelectConfigTypeMultiInterface )
      {
        if ( Params->Type != WdfUsbTargetDeviceSelectConfigTypeInterfacesPairs )
        {
          if ( Params->Type == WdfUsbTargetDeviceSelectConfigTypeInterfacesDescriptor )
          {
            InterfaceDescriptors = Params->Types.Descriptor.InterfaceDescriptors;
            if ( !InterfaceDescriptors || !Params->Types.Descriptor.NumInterfaceDescriptors )
            {
              v16 = -1073741811;
              WPP_IFR_SF_qqDLd(
                m_Globals,
                m_NumInterfaces,
                v11,
                v12,
                _a1,
                UsbDevice,
                InterfaceDescriptors,
                Params->Types.Descriptor.NumInterfaceDescriptors,
                5u);
              return v16;
            }
            return (unsigned int)FxUsbDevice::SelectConfigDescriptor(pUsbDevice, PipesAttributes, Params);
          }
          else
          {
            if ( Params->Type != WdfUsbTargetDeviceSelectConfigTypeUrb )
              return (unsigned int)-1073741811;
            _a3 = Params->Types.Urb.Urb;
            if ( !_a3 || _a3->UrbHeader.Function || _a3->UrbHeader.Length < 0x40u )
            {
              v16 = -1073741811;
              WPP_IFR_SF_qqLd(
                m_Globals,
                m_NumInterfaces,
                0xEu,
                0x15u,
                WPP_FxUsbDeviceAPI_cpp_Traceguids,
                UsbDevice,
                _a3,
                6u,
                -1073741811);
              return v16;
            }
            return (unsigned int)FxUsbDevice::SelectConfig(pUsbDevice, PipesAttributes, _a3, FxUrbTypeLegacy, 0LL);
          }
        }
        if ( !Params->Types.Descriptor.InterfaceDescriptors )
        {
          v16 = -1073741811;
          ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(pUsbDevice);
          WPP_IFR_SF_qL(
            m_Globals,
            2u,
            0xEu,
            0x16u,
            WPP_FxUsbDeviceAPI_cpp_Traceguids,
            ObjectHandleUnchecked,
            0xC000000D);
          return v16;
        }
        if ( Params->Types.SingleInterface.NumberConfiguredPipes != m_NumInterfaces )
        {
          v16 = -1073741811;
          v21 = (const void *)FxObject::GetObjectHandleUnchecked(pUsbDevice);
          WPP_IFR_SF_qddd(m_Globals, v22, 0xEu, 0x17u, WPP_FxUsbDeviceAPI_cpp_Traceguids, v21, v23, v22, -1073741811);
          return v16;
        }
      }
      v24 = 0;
      if ( Params->Types.SingleInterface.NumberConfiguredPipes )
      {
        while ( 1 )
        {
          pUsbInterface = 0LL;
          v25 = &Params->Types.Descriptor.InterfaceDescriptors[2 * v24];
          FxObjectHandleGetPtr(v4, (unsigned __int64)*v25, 0x1204u, (void **)&pUsbInterface);
          if ( *((_BYTE *)v25 + 8) >= pUsbInterface->m_NumSettings )
            break;
          if ( ++v24 >= Params->Types.SingleInterface.NumberConfiguredPipes )
          {
            v13 = pUsbDevice;
            return (unsigned int)FxUsbDevice::SelectConfigMulti(v13, PipesAttributes, Params);
          }
        }
        v26 = (const void *)FxObject::GetObjectHandleUnchecked(pUsbDevice);
        v14 = -1073741811;
        WPP_IFR_SF_qqddd(
          m_Globals,
          *(_BYTE *)(v27 + 144) - 1,
          0xEu,
          0x18u,
          WPP_FxUsbDeviceAPI_cpp_Traceguids,
          v26,
          *v25,
          v28,
          *(unsigned __int8 *)(v27 + 144) - 1,
          -1073741811);
        return v14;
      }
      return (unsigned int)FxUsbDevice::SelectConfigMulti(v13, PipesAttributes, Params);
    }
    return (unsigned int)FxUsbDevice::SelectConfigSingle(pUsbDevice, PipesAttributes, Params);
  }
  return result;
}
