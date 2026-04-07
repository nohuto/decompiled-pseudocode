/*
 * XREFs of ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18000F580
 * Callers:
 *     ?_IsAnimationNeeded@CAccent@@IEAA_NXZ @ 0x180004EAC (-_IsAnimationNeeded@CAccent@@IEAA_NXZ.c)
 *     ?IsEnabled@CStoryboard@@UEAA_NXZ @ 0x18000C420 (-IsEnabled@CStoryboard@@UEAA_NXZ.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NW4WindowAnimationType@1@@Z @ 0x18000F478 (-ShouldShowTransition@CTopLevelWindow3D@@AEAA_NW4WindowAnimationType@1@@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x1800253FC (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x180051EB0 (-StartupBegin@CWindowList@@AEAAJXZ.c)
 *     ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x1800527C0 (-SetupDPIValues@CDesktopManager@@QEAAXXZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x180086560 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 *     ?ShouldShowTransition@CWindowArrangementTransition@@AEAA_NPEAVCWindowData@@@Z @ 0x18009C324 (-ShouldShowTransition@CWindowArrangementTransition@@AEAA_NPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::CheckAnyPreference(unsigned int a1)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 8) + 64LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8),
           a1);
}
