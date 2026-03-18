/*
 * XREFs of imp_WdfWmiProviderCreate @ 0x1C003DCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0032554 (WPP_IFR_SF_.c)
 *     FxIsEqualGuid @ 0x1C0039B4C (FxIsEqualGuid.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C003E45C (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0059244 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfWmiProviderCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_WMI_PROVIDER_CONFIG *WmiProviderConfig,
        _WDF_OBJECT_ATTRIBUTES *ProviderAttributes,
        WDFWMIPROVIDER__ **WmiProvider)
{
  _FX_DRIVER_GLOBALS *DriverName; // rbx
  WDFWMIPROVIDER__ **v9; // rsi
  FxPowerPolicyOwnerSettings *m_Owner; // rdi
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxDevice *pDevice; // [rsp+60h] [rbp+8h] BYREF
  FxWmiProvider *pProvider; // [rsp+70h] [rbp+18h] BYREF

  pDevice = 0LL;
  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  pProvider = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  if ( !WmiProviderConfig )
    FxVerifierNullBugCheck(DriverName, retaddr);
  v9 = WmiProvider;
  if ( !WmiProvider )
    FxVerifierNullBugCheck(DriverName, retaddr);
  m_Owner = pDevice->m_PkgPnp->m_PowerPolicyMachine.m_Owner;
  if ( !m_Owner
    || (!FxIsEqualGuid(&WmiProviderConfig->Guid, &GUID_POWER_DEVICE_ENABLE) || !m_Owner->m_IdleSettings.WmiInstance)
    && (!FxIsEqualGuid(&WmiProviderConfig->Guid, &GUID_POWER_DEVICE_WAKE_ENABLE) || !m_Owner->m_WakeSettings.WmiInstance) )
  {
    return FxWmiProvider::_Create(DriverName, Device, ProviderAttributes, WmiProviderConfig, v9, &pProvider);
  }
  WPP_IFR_SF_(DriverName, 2u, 0x12u, 0xAu, WPP_FxWmiAPI_cpp_Traceguids);
  return -1073741055;
}
