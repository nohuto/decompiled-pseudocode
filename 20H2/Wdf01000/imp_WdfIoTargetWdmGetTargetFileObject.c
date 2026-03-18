/*
 * XREFs of imp_WdfIoTargetWdmGetTargetFileObject @ 0x1C0063C20
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 */

_FILE_OBJECT *__fastcall imp_WdfIoTargetWdmGetTargetFileObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget)
{
  FxIoTarget *v3; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 FxVerboseOn; // al
  _FILE_OBJECT *_a2; // rbx
  FxIoTarget *pTarget; // [rsp+50h] [rbp+8h] BYREF

  pTarget = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)IoTarget,
    0x1200u,
    (void **)&pTarget);
  v3 = pTarget;
  m_Globals = pTarget->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xEu, WPP_FxIoTargetAPIKm_cpp_Traceguids, IoTarget);
    FxVerboseOn = m_Globals->FxVerboseOn;
    v3 = pTarget;
  }
  else
  {
    FxVerboseOn = 0;
  }
  _a2 = v3->m_TargetFileObject;
  if ( FxVerboseOn )
    WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0xFu, WPP_FxIoTargetAPIKm_cpp_Traceguids, IoTarget, _a2);
  return _a2;
}
