/*
 * XREFs of ?PauseAllMonitors@CStreamConnectionManagerImpl@@UEAAXXZ @ 0x1800FE420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CStreamConnectionManagerImpl::PauseAllMonitors(CMonitorManager **this)
{
  CMonitorManager::Pause(this[1]);
}
