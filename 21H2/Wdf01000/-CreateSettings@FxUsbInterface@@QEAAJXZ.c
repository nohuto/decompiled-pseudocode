/*
 * XREFs of ?CreateSettings@FxUsbInterface@@QEAAJXZ @ 0x1C007E4DC
 * Callers:
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C007C358 (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C0053078 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_dddd @ 0x1C00660B4 (WPP_IFR_SF_dddd.c)
 *     ?FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z @ 0x1C007B654 (-FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z.c)
 *     ?FxUsbValidateDescriptorType@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAX2J_KW4FxUsbValidateDescriptorOp@@K@Z @ 0x1C007B7A8 (-FxUsbValidateDescriptorType@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAX.c)
 *     WPP_IFR_SF_dddddd @ 0x1C007F0F4 (WPP_IFR_SF_dddddd.c)
 */

__int64 __fastcall FxUsbInterface::CreateSettings(FxUsbInterface *this)
{
  _USB_COMMON_DESCRIPTOR *DescriptorType; // rax
  __int64 v3; // r11
  unsigned __int8 m_InterfaceNumber; // di
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  __int64 m_NumSettings; // rdx
  void *v7; // rax
  FX_POOL **v8; // rax
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rcx
  unsigned __int8 *p_bLength; // r8
  int bLength; // r8d
  int bDescriptorType; // eax
  int v14; // r9d
  _USB_COMMON_DESCRIPTOR *v15; // rax
  _USB_INTERFACE_DESCRIPTOR *v16; // rdx
  unsigned __int8 v17; // dl
  unsigned __int8 v18; // di
  _USB_INTERFACE_DESCRIPTOR *InterfaceDescriptor; // rsi
  unsigned int bNumEndpoints; // ebp
  _USB_COMMON_DESCRIPTOR *v21; // rax
  _USB_CONFIGURATION_DESCRIPTOR *v22; // r11
  __int64 v23; // rdx
  _USB_COMMON_DESCRIPTOR *v24; // r9
  int v25; // esi
  const _GUID *_a4; // [rsp+20h] [rbp-58h]
  FxUsbValidateDescriptorOp globals; // [rsp+30h] [rbp-48h]
  int v28; // [rsp+50h] [rbp-28h]
  __m128i v29; // [rsp+60h] [rbp-18h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  DescriptorType = FxUsbFindDescriptorType(
                     (char *)this->m_UsbDevice->m_ConfigDescriptor,
                     this->m_UsbDevice->m_ConfigDescriptor->wTotalLength,
                     &this->m_UsbDevice->m_ConfigDescriptor->bLength,
                     4);
  if ( DescriptorType )
  {
    m_InterfaceNumber = this->m_InterfaceNumber;
    do
    {
      if ( m_InterfaceNumber == DescriptorType[1].bLength )
        ++this->m_NumSettings;
      DescriptorType = FxUsbFindDescriptorType(
                         *(char **)(v3 + 400),
                         *(unsigned __int16 *)(*(_QWORD *)(v3 + 400) + 2LL),
                         &DescriptorType->bLength + DescriptorType->bLength,
                         4);
    }
    while ( DescriptorType );
  }
  m_Globals = this->m_Globals;
  m_NumSettings = this->m_NumSettings;
  v29.m128i_i64[0] = 0LL;
  v29.m128i_i64[1] = 64LL;
  if ( m_Globals->FxPoolTrackingOn )
    v7 = retaddr;
  else
    v7 = 0LL;
  v8 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v29, 8 * m_NumSettings, m_Globals->Tag, v7);
  this->m_Settings = (FxUsbInterfaceSetting *)v8;
  if ( v8 )
  {
    m_ConfigDescriptor = this->m_UsbDevice->m_ConfigDescriptor;
    p_bLength = &m_ConfigDescriptor->bLength;
    while ( 1 )
    {
      v15 = FxUsbFindDescriptorType((char *)m_ConfigDescriptor, m_ConfigDescriptor->wTotalLength, p_bLength, 4);
      v16 = (_USB_INTERFACE_DESCRIPTOR *)v15;
      if ( !v15 )
        break;
      bLength = v15[1].bLength;
      if ( this->m_InterfaceNumber == (_BYTE)bLength )
      {
        bDescriptorType = v15[1].bDescriptorType;
        v14 = this->m_NumSettings;
        if ( (unsigned __int8)bDescriptorType >= (unsigned __int8)v14 )
        {
          WPP_IFR_SF_dddd(
            this->m_Globals,
            2u,
            0xEu,
            0xBu,
            WPP_FxUsbInterface_cpp_Traceguids,
            bLength,
            v14,
            bDescriptorType,
            -1073741808);
          return 3221225488LL;
        }
        this->m_Settings[bDescriptorType].InterfaceDescriptor = v16;
      }
      p_bLength = &v16->bLength + v16->bLength;
      m_ConfigDescriptor = this->m_UsbDevice->m_ConfigDescriptor;
    }
    v17 = this->m_NumSettings;
    v18 = 0;
    if ( !v17 )
      return 0LL;
    while ( 1 )
    {
      InterfaceDescriptor = this->m_Settings[v18].InterfaceDescriptor;
      if ( !InterfaceDescriptor )
        break;
      bNumEndpoints = InterfaceDescriptor->bNumEndpoints;
      if ( (_BYTE)bNumEndpoints )
      {
        v21 = FxUsbFindDescriptorType(
                (char *)this->m_UsbDevice->m_ConfigDescriptor,
                this->m_UsbDevice->m_ConfigDescriptor->wTotalLength,
                &InterfaceDescriptor->bLength,
                4);
        v24 = (_USB_COMMON_DESCRIPTOR *)(&v22->bLength + v23);
        if ( v21 )
          v24 = v21;
        v25 = FxUsbValidateDescriptorType(
                this->m_Globals,
                v22,
                (char *)InterfaceDescriptor,
                v24,
                5,
                7uLL,
                globals,
                bNumEndpoints);
        if ( v25 < 0 )
        {
          WPP_IFR_SF_dd(
            this->m_Globals,
            2u,
            0xEu,
            0xDu,
            WPP_FxUsbInterface_cpp_Traceguids,
            this->m_InterfaceNumber,
            v25);
          return (unsigned int)v25;
        }
      }
      v17 = this->m_NumSettings;
      if ( ++v18 >= v17 )
        return 0LL;
    }
    WPP_IFR_SF_dddd(
      this->m_Globals,
      2u,
      0xEu,
      0xCu,
      WPP_FxUsbInterface_cpp_Traceguids,
      this->m_InterfaceNumber,
      v17,
      v18,
      -1073741808);
    return 3221225488LL;
  }
  else
  {
    WPP_IFR_SF_dddddd(
      this->m_Globals,
      this->m_Protocol,
      this->m_InterfaceNumber,
      this->m_NumSettings,
      _a4,
      this->m_NumSettings,
      this->m_InterfaceNumber,
      this->m_Protocol,
      this->m_Class,
      this->m_SubClass,
      v28);
    return 3221225626LL;
  }
}
