/*
 * XREFs of ?SetDeviceFailed@FxPkgPnp@@QEAAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_DEVICE_FAILED_ACTION@@@Z @ 0x1C0082818
 * Callers:
 *     ?InvalidateDeviceStateAndReportFailed@FxCompanionTarget@@EEAAXXZ @ 0x1C0043780 (-InvalidateDeviceStateAndReportFailed@FxCompanionTarget@@EEAAXXZ.c)
 *     imp_WdfDeviceSetFailed @ 0x1C0048640 (imp_WdfDeviceSetFailed.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0015188 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?InvalidateDeviceState@FxPkgPnp@@AEAAXXZ @ 0x1C0080EF4 (-InvalidateDeviceState@FxPkgPnp@@AEAAXXZ.c)
 *     ?SetDeviceFailedAttemptRestart@FxPkgPnp@@AEAAXE@Z @ 0x1C0082868 (-SetDeviceFailedAttemptRestart@FxPkgPnp@@AEAAXE@Z.c)
 */

void __fastcall FxPkgPnp::SetDeviceFailed(
        FxPkgPnp *this,
        _FX_DRIVER_GLOBALS *CallerFxDriverGlobals,
        _WDF_DEVICE_FAILED_ACTION FailedAction)
{
  bool IsVersionGreaterThanOrEqualTo; // al
  FxPkgPnp *v4; // r10
  int v5; // r9d

  IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(
                                    CallerFxDriverGlobals,
                                    (unsigned int)CallerFxDriverGlobals,
                                    0x17u);
  v4->m_FailedAction = v5;
  v4->m_Failed = 1;
  if ( v5 == 1 )
    FxPkgPnp::SetDeviceFailedAttemptRestart(v4, !IsVersionGreaterThanOrEqualTo);
  else
    FxPkgPnp::InvalidateDeviceState(v4);
}
