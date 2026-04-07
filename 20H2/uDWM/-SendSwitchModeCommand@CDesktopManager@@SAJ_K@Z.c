/*
 * XREFs of ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x18003887C
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180015780 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180035960 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x180035FC0 (-ModeChange@CDesktopManager@@QEAAJXZ.c)
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x180051AB4 (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x180051EB0 (-StartupBegin@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x180027E44 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x1800388FC (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ?UpdateRemotingMode@CDesktopManager@@AEAA_NXZ @ 0x18003896C (-UpdateRemotingMode@CDesktopManager@@AEAA_NXZ.c)
 *     ?UpdateHolographicLockState@CAnalogCompositorManager@@AEAAJXZ @ 0x18003F730 (-UpdateHolographicLockState@CAnalogCompositorManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::SendSwitchModeCommand(__int64 a1)
{
  CDesktopManager *v2; // rax
  unsigned int v3; // ebx
  int v4; // eax
  unsigned int v5; // ebx
  struct CAnalogCompositorManager *Instance; // rax
  int updated; // eax
  bool v9; // zf

  CDesktopManager::UpdateRemotingMode(CDesktopManager::s_pDesktopManagerInstance);
  v2 = CDesktopManager::s_pDesktopManagerInstance;
  v3 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 7);
  if ( v3 == 5 )
  {
    v9 = !CDesktopManager::IsLogonDesktop(a1);
    v2 = CDesktopManager::s_pDesktopManagerInstance;
    if ( !v9 )
      v3 = 3;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)v2 + 5) + 16LL) + 240LL))(
         *(_QWORD *)(*((_QWORD *)v2 + 5) + 16LL),
         v3);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x129u);
  }
  else
  {
    Instance = CAnalogCompositorManager::GetInstance();
    *((_QWORD *)Instance + 9) = a1;
    updated = CAnalogCompositorManager::UpdateHolographicLockState(Instance);
    v5 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x12Cu);
  }
  return v5;
}
