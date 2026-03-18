/*
 * XREFs of ?InvokeClient@FxPnpDeviceSelfManagedIoRestart@@MEAAJXZ @ 0x1C000EE90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

int (__fastcall *__fastcall FxPnpDeviceSelfManagedIoRestart::InvokeClient(
        FxPnpDeviceSelfManagedIoRestart *this))(WDFDEVICE__ *)
{
  int (__fastcall *result)(WDFDEVICE__ *); // rax
  int _a3; // edi

  result = this->m_Method;
  if ( result )
  {
    _a3 = result(this->m_Device);
    if ( _a3 < 0 )
      WPP_IFR_SF_qqd(
        this->m_PkgPnp->m_Globals,
        4u,
        0xCu,
        0x19u,
        WPP_PnpCallbacks_cpp_Traceguids,
        this->m_Device,
        this->m_PkgPnp->m_DeviceBase->m_DeviceObject.m_DeviceObject,
        _a3);
    return (int (__fastcall *)(WDFDEVICE__ *))(unsigned int)_a3;
  }
  return result;
}
