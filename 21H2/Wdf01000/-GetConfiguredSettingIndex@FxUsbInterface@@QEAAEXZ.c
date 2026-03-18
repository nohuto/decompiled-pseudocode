/*
 * XREFs of ?GetConfiguredSettingIndex@FxUsbInterface@@QEAAEXZ @ 0x1C007E90C
 * Callers:
 *     imp_WdfUsbInterfaceGetConfiguredSettingIndex @ 0x1C00774F0 (imp_WdfUsbInterfaceGetConfiguredSettingIndex.c)
 *     ?GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C0079EEC (-GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

unsigned __int8 __fastcall FxUsbInterface::GetConfiguredSettingIndex(FxUsbInterface *this)
{
  const void *_a1; // rax

  if ( this->m_ConfiguredPipes )
    return this->m_CurAlternateSetting;
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
  WPP_IFR_SF_q(this->m_Globals, 2u, 0xEu, 0x15u, WPP_FxUsbInterface_cpp_Traceguids, _a1);
  FxVerifierDbgBreakPoint(this->m_Globals);
  return 0;
}
