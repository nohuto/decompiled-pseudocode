/*
 * XREFs of ?SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x1C00725AC
 * Callers:
 *     imp_WdfUsbInterfaceSelectSetting @ 0x1C006A2F0 (imp_WdfUsbInterfaceSelectSetting.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1C002F7EC (WPP_IFR_SF_qddd.c)
 *     ?FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z @ 0x1C0071FF4 (-FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C0072234 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 */

__int64 __fastcall FxUsbInterface::SelectSettingByDescriptor(
        FxUsbInterface *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _USB_INTERFACE_DESCRIPTOR *InterfaceDescriptor)
{
  const void *_a2; // rax
  int _a4; // edx
  int _a3; // r8d
  FX_POOL **v10; // rax
  _URB *v11; // rsi
  unsigned int v12; // ebx
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( this->m_ConfiguredPipes && this->m_CurAlternateSetting == InterfaceDescriptor->bAlternateSetting )
    return 0LL;
  if ( InterfaceDescriptor->bInterfaceNumber == this->m_InterfaceNumber )
  {
    v10 = FxPoolAllocator(
            this->m_Globals,
            &this->m_Globals->FxPoolFrameworks,
            ExDefaultNonPagedPoolType,
            24LL * InterfaceDescriptor->bNumEndpoints + 56,
            this->m_Globals->Tag,
            retaddr);
    v11 = (_URB *)v10;
    if ( v10 )
    {
      FxUsbInterface::FormatSelectSettingUrb(
        this,
        (_URB *)v10,
        InterfaceDescriptor->bNumEndpoints,
        InterfaceDescriptor->bAlternateSetting);
      v12 = FxUsbInterface::SelectSetting(this, PipesAttributes, v11);
      FxPoolFree((FX_POOL_TRACKER *)v11);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
    return v12;
  }
  else
  {
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qddd(this->m_Globals, _a3, 0xEu, 0xEu, WPP_FxUsbInterface_cpp_Traceguids, _a2, _a3, _a4, -1073741811);
    return 3221225485LL;
  }
}
