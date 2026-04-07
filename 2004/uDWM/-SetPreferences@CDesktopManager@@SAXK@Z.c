/*
 * XREFs of ?SetPreferences@CDesktopManager@@SAXK@Z @ 0x180052640
 * Callers:
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x1800525A0 (-StartupBegin@CWindowList@@AEAAJXZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x180086C78 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDesktopManager::SetPreferences()
{
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 8) + 72LL))(
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8),
    16LL);
}
