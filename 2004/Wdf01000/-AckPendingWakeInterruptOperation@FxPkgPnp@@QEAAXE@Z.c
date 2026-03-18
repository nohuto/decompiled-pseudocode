/*
 * XREFs of ?AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXE@Z @ 0x1C007F150
 * Callers:
 *     ?CompletingD0@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C008B850 (-CompletingD0@FxWakeInterruptMachine@@CA-AW4FxWakeInterruptStates@@PEAV1@@Z.c)
 *     ?Dx@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C008B870 (-Dx@FxWakeInterruptMachine@@CA-AW4FxWakeInterruptStates@@PEAV1@@Z.c)
 *     ?DxNotArmedForWake@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C008B900 (-DxNotArmedForWake@FxWakeInterruptMachine@@CA-AW4FxWakeInterruptStates@@PEAV1@@Z.c)
 * Callees:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C0011740 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 */

void __fastcall FxPkgPnp::AckPendingWakeInterruptOperation(
        FxPkgPnp *this,
        unsigned __int8 ProcessPowerEventOnDifferentThread)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_WakeInterruptPendingAckCount, 0xFFFFFFFF) == 1 )
    FxPkgPnp::PowerProcessEvent(this, 0x2000u, ProcessPowerEventOnDifferentThread);
}
