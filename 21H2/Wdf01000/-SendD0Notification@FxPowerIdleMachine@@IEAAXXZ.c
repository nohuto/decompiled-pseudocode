/*
 * XREFs of ?SendD0Notification@FxPowerIdleMachine@@IEAAXXZ @ 0x1C0011F68
 * Callers:
 *     ?PowerUp@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C000ED90 (-PowerUp@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?TimedOutDisabled@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0011F40 (-TimedOutDisabled@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?Reset@FxPowerIdleMachine@@QEAAXXZ @ 0x1C00222E4 (-Reset@FxPowerIdleMachine@@QEAAXXZ.c)
 *     ?StartedPowerUp@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0034D10 (-StartedPowerUp@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?InDxStopped@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C00897C0 (-InDxStopped@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?PowerFailed@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C00897F0 (-PowerFailed@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?StartedPowerFailed@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0089820 (-StartedPowerFailed@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?TimedOutEnabled@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C00898A0 (-TimedOutEnabled@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 * Callees:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C001E240 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 */

void __fastcall FxPowerIdleMachine::SendD0Notification(FxPowerIdleMachine *this)
{
  unsigned __int8 v2; // r8
  signed __int8 m_Flags; // al
  FxPkgPnp *m_TagTracker; // rcx

  KeSetEvent(&this->m_D0NotificationEvent.m_Event.m_Event, 0, 0);
  m_Flags = this->m_Flags;
  if ( m_Flags < 0 )
  {
    m_TagTracker = (FxPkgPnp *)this[2].m_TagTracker;
    this->m_Flags = m_Flags & 0x7F;
    FxPkgPnp::PnpProcessEvent(m_TagTracker, PnpEventDeviceInD0, v2);
  }
}
