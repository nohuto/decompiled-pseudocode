/*
 * XREFs of ?PowerPolicyCancelUsbSSIfCapable@FxPkgPnp@@IEAAEXZ @ 0x1C0087E44
 * Callers:
 *     ?PowerPolCancelUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0085F00 (-PowerPolCancelUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolCancelingUsbSSForSystemSleep@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0085F30 (-PowerPolCancelingUsbSSForSystemSleep@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStoppingCancelUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0086CA0 (-PowerPolStoppingCancelUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStoppingD0CancelUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0086D90 (-PowerPolStoppingD0CancelUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolTimerExpiredWakeCapableCleanup@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00873C0 (-PowerPolTimerExpiredWakeCapableCleanup@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolTimerExpiredWakeCapableDxAllocFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0087420 (-PowerPolTimerExpiredWakeCapableDxAllocFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PE.c)
 *     ?PowerPolTimerExpiredWakeCapablePowerDownFailedUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00874E0 (-PowerPolTimerExpiredWakeCapablePowerDownFailedUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_ST.c)
 *     ?PowerPolWaitingArmedIoPresentCancelUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0087A10 (-PowerPolWaitingArmedIoPresentCancelUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@.c)
 *     ?PowerPolWaitingArmedStoppingCancelUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0087A70 (-PowerPolWaitingArmedStoppingCancelUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@.c)
 *     ?PowerPolWaitingArmedWakeFailedCancelUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0087B30 (-PowerPolWaitingArmedWakeFailedCancelUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1.c)
 *     ?PowerPolWaitingArmedWakeSucceededCancelUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0087BD0 (-PowerPolWaitingArmedWakeSucceededCancelUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PE.c)
 *     ?PowerPolWakeFailedUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0087CE0 (-PowerPolWakeFailedUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolWokeFromS0UsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0087DE0 (-PowerPolWokeFromS0UsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall FxPkgPnp::PowerPolicyCancelUsbSSIfCapable(FxPkgPnp *this)
{
  FxUsbIdleInfo *m_UsbIdle; // rcx

  m_UsbIdle = this->m_PowerPolicyMachine.m_Owner->m_UsbIdle;
  if ( !m_UsbIdle || m_UsbIdle->m_EventDropped )
    return 0;
  IoCancelIrp(m_UsbIdle->m_IdleIrp.m_Irp);
  return 1;
}
