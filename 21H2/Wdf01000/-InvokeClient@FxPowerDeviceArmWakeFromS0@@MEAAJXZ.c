/*
 * XREFs of ?InvokeClient@FxPowerDeviceArmWakeFromS0@@MEAAJXZ @ 0x1C0085830
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

int (__fastcall *__fastcall FxPowerDeviceArmWakeFromS0::InvokeClient(FxPowerDeviceArmWakeFromS0 *this))(WDFDEVICE__ *)
{
  int (__fastcall *result)(WDFDEVICE__ *); // rax
  int _a3; // eax
  unsigned int v4; // edi

  result = this->m_Method;
  if ( result )
  {
    _a3 = result(this->m_Device);
    v4 = _a3;
    if ( _a3 < 0 )
      WPP_IFR_SF_qqd(
        this->m_PkgPnp->m_Globals,
        2u,
        0xCu,
        0x1Cu,
        WPP_PnpCallbacks_cpp_Traceguids,
        this->m_Device,
        this->m_PkgPnp->m_DeviceBase->m_DeviceObject.m_DeviceObject,
        _a3);
    return (int (__fastcall *)(WDFDEVICE__ *))v4;
  }
  return result;
}
