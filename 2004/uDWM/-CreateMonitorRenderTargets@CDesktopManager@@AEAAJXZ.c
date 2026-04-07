/*
 * XREFs of ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18002DCF4
 * Callers:
 *     ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x1800303D4 (-ModeChange@CDesktopManager@@QEAAJXZ.c)
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x180052320 (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ @ 0x18002C7B4 (-CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ.c)
 *     ?CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ @ 0x180085ED8 (-CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1800BF26C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CDesktopManager::CreateMonitorRenderTargets(CDesktopManager *this)
{
  int MonitorRenderTargetsLegacy; // eax
  unsigned int v3; // ebx
  int MonitorRenderTargetsDDisplay; // eax

  if ( *((_DWORD *)this + 202) == 1 && ((unsigned int)IsKernelDebuggerPresent() || IsDebuggerPresent()) )
    __debugbreak();
  if ( *((_DWORD *)this + 202) )
  {
    MonitorRenderTargetsDDisplay = CDesktopManager::CreateMonitorRenderTargetsDDisplay(this);
    v3 = MonitorRenderTargetsDDisplay;
    if ( MonitorRenderTargetsDDisplay < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, MonitorRenderTargetsDDisplay, 0x480u);
      return v3;
    }
    if ( *((_DWORD *)this + 202) )
      return v3;
  }
  MonitorRenderTargetsLegacy = CDesktopManager::CreateMonitorRenderTargetsLegacy((const struct CDWMDisplaySet **)this);
  v3 = MonitorRenderTargetsLegacy;
  if ( MonitorRenderTargetsLegacy < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, MonitorRenderTargetsLegacy, 0x488u);
  return v3;
}
