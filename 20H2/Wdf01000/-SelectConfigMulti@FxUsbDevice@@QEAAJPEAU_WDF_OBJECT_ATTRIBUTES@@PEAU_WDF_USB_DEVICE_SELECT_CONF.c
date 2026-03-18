/*
 * XREFs of ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0072F6C
 * Callers:
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x1C006AD10 (imp_WdfUsbTargetDeviceSelectConfig.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     memset @ 0x1C001CA80 (memset.c)
 *     WPP_IFR_SF_qddd @ 0x1C002EF1C (WPP_IFR_SF_qddd.c)
 *     ?FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INTERFACE_LIST_ENTRY@@K@Z @ 0x1C006E304 (-FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR.c)
 *     ?FxUsbParseConfigurationDescriptor@@YAPEAU_USB_INTERFACE_DESCRIPTOR@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@EE@Z @ 0x1C006E4E8 (-FxUsbParseConfigurationDescriptor@@YAPEAU_USB_INTERFACE_DESCRIPTOR@@PEAU_USB_CONFIGURATION_DESC.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C007056C (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z @ 0x1C007191C (-GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z.c)
 */

__int64 __fastcall FxUsbDevice::SelectConfigMulti(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS *Params)
{
  unsigned __int8 *p_NumberOfConfiguredInterfaces; // rbp
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _POOL_TYPE v7; // r8d
  _WDF_OBJECT_ATTRIBUTES *v8; // r12
  ULONG Tag; // eax
  __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  FX_POOL **v12; // rax
  _USBD_INTERFACE_LIST_ENTRY *v13; // r14
  unsigned __int8 v15; // r11
  __int64 v16; // rbx
  _USB_INTERFACE_DESCRIPTOR *SettingDescriptor; // rax
  char v18; // r11
  const void *ObjectHandleUnchecked; // rax
  unsigned int v20; // ebx
  unsigned __int8 v21; // si
  unsigned __int8 v22; // bp
  _FX_DRIVER_GLOBALS *v23; // rcx
  _USB_INTERFACE_DESCRIPTOR **v24; // rbx
  int v25; // r13d
  __int64 v26; // r12
  unsigned __int8 v27; // al
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rcx
  unsigned __int8 v29; // r8
  _USB_COMMON_DESCRIPTOR *v30; // rax
  const void *v31; // rax
  int _a4; // edx
  const void *v33; // rax
  unsigned __int8 v34; // dl
  FX_POOL **ConfigRequest; // rax
  FX_POOL_TRACKER *v36; // rsi
  void *PPObject; // [rsp+50h] [rbp-168h] BYREF
  _WDF_OBJECT_ATTRIBUTES *v38; // [rsp+58h] [rbp-160h]
  unsigned __int8 *v39; // [rsp+60h] [rbp-158h]
  unsigned __int8 bitArray[256]; // [rsp+70h] [rbp-148h] BYREF
  void *Caller; // [rsp+1B8h] [rbp+0h]

  p_NumberOfConfiguredInterfaces = &Params->Types.MultiInterface.NumberOfConfiguredInterfaces;
  m_Globals = this->m_Globals;
  v7 = ExDefaultNonPagedPoolType;
  v8 = PipesAttributes;
  *p_NumberOfConfiguredInterfaces = 0;
  Tag = m_Globals->Tag;
  v10 = this->m_NumInterfaces + 1LL;
  v38 = PipesAttributes;
  v11 = 16 * v10;
  v39 = p_NumberOfConfiguredInterfaces;
  v12 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, v7, v11, Tag, Caller);
  v13 = (_USBD_INTERFACE_LIST_ENTRY *)v12;
  if ( !v12 )
    return 3221225626LL;
  memset(v12, 0, v11);
  if ( Params->Type == WdfUsbTargetDeviceSelectConfigTypeMultiInterface )
  {
    v15 = 0;
    if ( this->m_NumInterfaces )
    {
      while ( 1 )
      {
        v16 = v15;
        SettingDescriptor = FxUsbInterface::GetSettingDescriptor(this->m_Interfaces[v15], 0);
        v13[(unsigned int)v16].InterfaceDescriptor = SettingDescriptor;
        if ( !SettingDescriptor )
          break;
        v15 = v18 + 1;
        if ( v15 >= this->m_NumInterfaces )
          goto LABEL_20;
      }
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qL(
        this->m_Globals,
        2u,
        0xEu,
        0x1Du,
        WPP_FxusbDeviceKm_cpp_Traceguids,
        ObjectHandleUnchecked,
        this->m_Interfaces[v16]->m_InterfaceNumber);
      v20 = -1073741811;
      goto $Done_56;
    }
  }
  else
  {
    v21 = 0;
    memset(bitArray, 0, 0xFFuLL);
    v22 = 0;
    if ( Params->Types.SingleInterface.NumberConfiguredPipes )
    {
      while ( 1 )
      {
        v23 = this->m_Globals;
        PPObject = 0LL;
        v24 = &Params->Types.Descriptor.InterfaceDescriptors[2 * v22];
        FxObjectHandleGetPtr(v23, (unsigned __int64)*v24, 0x1204u, &PPObject);
        v25 = *((unsigned __int8 *)v24 + 8);
        v26 = *((unsigned __int8 *)PPObject + 146);
        v27 = bitArray[v26];
        if ( (v27 & 1) == 0 )
        {
          m_ConfigDescriptor = this->m_ConfigDescriptor;
          v29 = *((_BYTE *)v24 + 8);
          bitArray[v26] = v27 | 1;
          v30 = FxUsbParseConfigurationDescriptor(m_ConfigDescriptor, v26, v29);
          v13[v21].InterfaceDescriptor = (_USB_INTERFACE_DESCRIPTOR *)v30;
          if ( !v30 )
          {
            v20 = -1073741811;
            v33 = (const void *)FxObject::GetObjectHandleUnchecked(this);
            WPP_IFR_SF_qddd(
              this->m_Globals,
              v34,
              0xEu,
              0x1Eu,
              WPP_FxusbDeviceKm_cpp_Traceguids,
              v33,
              v25,
              v26,
              -1073741811);
            goto $Done_56;
          }
          ++v21;
        }
        if ( ++v22 >= Params->Types.SingleInterface.NumberConfiguredPipes )
        {
          v8 = v38;
          break;
        }
      }
    }
    if ( this->m_NumInterfaces > v21 )
    {
      v20 = -1073741811;
      v31 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qddd(this->m_Globals, v21, 0xEu, 0x1Fu, WPP_FxusbDeviceKm_cpp_Traceguids, v31, v21, _a4, -1073741811);
      goto $Done_56;
    }
    p_NumberOfConfiguredInterfaces = v39;
  }
LABEL_20:
  ConfigRequest = FxUsbCreateConfigRequest(this->m_Globals, (FX_POOL *)this->m_ConfigDescriptor, v13, 0xFFFFFFFF);
  v36 = (FX_POOL_TRACKER *)ConfigRequest;
  if ( ConfigRequest )
  {
    v20 = FxUsbDevice::SelectConfig(
            this,
            v8,
            (_FILE_OBJECT *)ConfigRequest,
            FxUrbTypeLegacy,
            p_NumberOfConfiguredInterfaces);
    FxPoolFree(v36);
  }
  else
  {
    v20 = -1073741670;
  }
$Done_56:
  FxPoolFree((FX_POOL_TRACKER *)v13);
  return v20;
}
