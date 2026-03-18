/*
 * XREFs of ?CreateSettings@FxUsbInterface@@QEAAJXZ @ 0x1C0071440
 * Callers:
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C006F278 (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     memset @ 0x1C001CA80 (memset.c)
 *     WPP_IFR_SF_dd @ 0x1C002DEC8 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_dddd @ 0x1C004B0C8 (WPP_IFR_SF_dddd.c)
 *     ?FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z @ 0x1C006E4BC (-FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z.c)
 *     ?FxUsbValidateDescriptorType@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAX2J_KW4FxUsbValidateDescriptorOp@@K@Z @ 0x1C006E610 (-FxUsbValidateDescriptorType@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAX.c)
 *     WPP_IFR_SF_dddddd @ 0x1C0071FC8 (WPP_IFR_SF_dddddd.c)
 */

__int64 __fastcall FxUsbInterface::CreateSettings(FxUsbInterface *this)
{
  _USB_COMMON_DESCRIPTOR *DescriptorType; // rax
  __int64 v3; // r11
  unsigned __int8 m_InterfaceNumber; // di
  unsigned __int64 v5; // rdi
  FX_POOL **v6; // rax
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rcx
  unsigned __int8 *p_bLength; // r8
  int bLength; // r8d
  int bDescriptorType; // eax
  int m_NumSettings; // r9d
  _USB_COMMON_DESCRIPTOR *v13; // rax
  _USB_INTERFACE_DESCRIPTOR *v14; // rdx
  unsigned __int8 v15; // dl
  unsigned __int8 v16; // di
  _USB_INTERFACE_DESCRIPTOR *InterfaceDescriptor; // rsi
  unsigned int bNumEndpoints; // ebp
  _USB_COMMON_DESCRIPTOR *v19; // rax
  _USB_CONFIGURATION_DESCRIPTOR *v20; // r11
  __int64 v21; // rdx
  _USB_COMMON_DESCRIPTOR *v22; // r9
  int v23; // esi
  const _GUID *Tag; // [rsp+20h] [rbp-48h]
  FxUsbValidateDescriptorOp globals; // [rsp+30h] [rbp-38h]
  int v26; // [rsp+50h] [rbp-18h]
  void *Caller; // [rsp+68h] [rbp+0h]

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
  v5 = 8LL * this->m_NumSettings;
  v6 = FxPoolAllocator(
         this->m_Globals,
         &this->m_Globals->FxPoolFrameworks,
         ExDefaultNonPagedPoolType,
         v5,
         this->m_Globals->Tag,
         Caller);
  this->m_Settings = (FxUsbInterfaceSetting *)v6;
  if ( v6 )
  {
    memset(v6, 0, v5);
    m_ConfigDescriptor = this->m_UsbDevice->m_ConfigDescriptor;
    p_bLength = &m_ConfigDescriptor->bLength;
    while ( 1 )
    {
      v13 = FxUsbFindDescriptorType((char *)m_ConfigDescriptor, m_ConfigDescriptor->wTotalLength, p_bLength, 4);
      v14 = (_USB_INTERFACE_DESCRIPTOR *)v13;
      if ( !v13 )
        break;
      bLength = v13[1].bLength;
      if ( this->m_InterfaceNumber == (_BYTE)bLength )
      {
        bDescriptorType = v13[1].bDescriptorType;
        m_NumSettings = this->m_NumSettings;
        if ( (unsigned __int8)bDescriptorType >= (unsigned __int8)m_NumSettings )
        {
          WPP_IFR_SF_dddd(
            this->m_Globals,
            2u,
            0xEu,
            0xBu,
            WPP_FxUsbInterface_cpp_Traceguids,
            bLength,
            m_NumSettings,
            bDescriptorType,
            -1073741808);
          return 3221225488LL;
        }
        this->m_Settings[bDescriptorType].InterfaceDescriptor = v14;
      }
      p_bLength = &v14->bLength + v14->bLength;
      m_ConfigDescriptor = this->m_UsbDevice->m_ConfigDescriptor;
    }
    v15 = this->m_NumSettings;
    v16 = 0;
    if ( !v15 )
      return 0LL;
    while ( 1 )
    {
      InterfaceDescriptor = this->m_Settings[v16].InterfaceDescriptor;
      if ( !InterfaceDescriptor )
        break;
      bNumEndpoints = InterfaceDescriptor->bNumEndpoints;
      if ( (_BYTE)bNumEndpoints )
      {
        v19 = FxUsbFindDescriptorType(
                (char *)this->m_UsbDevice->m_ConfigDescriptor,
                this->m_UsbDevice->m_ConfigDescriptor->wTotalLength,
                &InterfaceDescriptor->bLength,
                4);
        v22 = (_USB_COMMON_DESCRIPTOR *)(&v20->bLength + v21);
        if ( v19 )
          v22 = v19;
        v23 = FxUsbValidateDescriptorType(
                this->m_Globals,
                v20,
                (char *)InterfaceDescriptor,
                v22,
                5,
                7uLL,
                globals,
                bNumEndpoints);
        if ( v23 < 0 )
        {
          WPP_IFR_SF_dd(
            this->m_Globals,
            2u,
            0xEu,
            0xDu,
            WPP_FxUsbInterface_cpp_Traceguids,
            this->m_InterfaceNumber,
            v23);
          return (unsigned int)v23;
        }
      }
      v15 = this->m_NumSettings;
      if ( ++v16 >= v15 )
        return 0LL;
    }
    WPP_IFR_SF_dddd(
      this->m_Globals,
      2u,
      0xEu,
      0xCu,
      WPP_FxUsbInterface_cpp_Traceguids,
      this->m_InterfaceNumber,
      v15,
      v16,
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
      Tag,
      this->m_NumSettings,
      this->m_InterfaceNumber,
      this->m_Protocol,
      this->m_Class,
      this->m_SubClass,
      v26);
    return 3221225626LL;
  }
}
