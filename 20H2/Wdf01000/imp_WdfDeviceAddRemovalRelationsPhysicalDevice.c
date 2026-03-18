/*
 * XREFs of imp_WdfDeviceAddRemovalRelationsPhysicalDevice @ 0x1C00484C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0058968 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C007E9A4 (-AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

int __fastcall imp_WdfDeviceAddRemovalRelationsPhysicalDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _DEVICE_OBJECT *PhysicalDevice)
{
  void *retaddr; // [rsp+28h] [rbp+0h]
  FxDevice *pDevice; // [rsp+30h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  if ( !PhysicalDevice )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  return FxPkgPnp::AddRemovalDevice(pDevice->m_PkgPnp, PhysicalDevice);
}
