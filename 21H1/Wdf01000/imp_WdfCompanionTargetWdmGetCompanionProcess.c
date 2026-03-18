/*
 * XREFs of imp_WdfCompanionTargetWdmGetCompanionProcess @ 0x1C00425F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

struct _EPROCESS *__fastcall imp_WdfCompanionTargetWdmGetCompanionProcess(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOMPANIONTARGET__ *CompanionTarget)
{
  FxCompanionTarget *pCompanionTarget; // [rsp+30h] [rbp+8h] BYREF

  pCompanionTarget = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)CompanionTarget,
    0x1038u,
    (void **)&pCompanionTarget);
  return pCompanionTarget->m_RdDeviceCompanion->GetCompanionProcess(pCompanionTarget->m_RdDeviceCompanion);
}
