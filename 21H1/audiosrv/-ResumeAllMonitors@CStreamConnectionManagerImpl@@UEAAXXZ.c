/*
 * XREFs of ?ResumeAllMonitors@CStreamConnectionManagerImpl@@UEAAXXZ @ 0x1800FFE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CStreamConnectionManagerImpl::ResumeAllMonitors(CMonitorManager **this)
{
  CMonitorManager::Continue(this[1]);
}
