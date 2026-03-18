/*
 * XREFs of imp_WdfDeviceRetrieveCompanionTarget @ 0x1C0063C50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceRetrieveCompanionTarget(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        WDFCOMPANIONTARGET__ **CompanionTarget)
{
  FxPkgPnp *m_PkgPnp; // rdx
  __int64 result; // rax
  __int64 v6; // rdx
  FxDevice *pDevice; // [rsp+30h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_PkgPnp = pDevice->m_PkgPnp;
  if ( !m_PkgPnp )
    return 3221225488LL;
  result = (unsigned int)m_PkgPnp->m_CompanionTargetStatus;
  if ( (int)result >= 0 )
  {
    *CompanionTarget = (WDFCOMPANIONTARGET__ *)FxObject::GetObjectHandleUnchecked(m_PkgPnp->m_CompanionTarget);
    return *(unsigned int *)(v6 + 1008);
  }
  return result;
}
