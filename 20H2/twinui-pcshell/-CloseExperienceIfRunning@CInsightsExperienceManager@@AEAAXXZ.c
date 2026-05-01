/*
 * XREFs of ?CloseExperienceIfRunning@CInsightsExperienceManager@@AEAAXXZ @ 0x1801EEE8C
 * Callers:
 *     ?DisplaySettingsChange@CInsightsExperienceManager@@EEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801EF2D0 (-DisplaySettingsChange@CInsightsExperienceManager@@EEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONIT.c)
 *     ?Launch@CInsightsExperienceManager@@EEAAJXZ @ 0x1801EFC40 (-Launch@CInsightsExperienceManager@@EEAAJXZ.c)
 *     ?MonitorAdded@CInsightsExperienceManager@@EEAAJPEAUIImmersiveMonitor@@@Z @ 0x1801EFD60 (-MonitorAdded@CInsightsExperienceManager@@EEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?OnDismiss@CInsightsExperienceManager@@EEAAJXZ @ 0x1801EFE70 (-OnDismiss@CInsightsExperienceManager@@EEAAJXZ.c)
 *     ?OnEventQueued@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801EFF80 (-OnEventQueued@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@P.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DestroyExperience@CInsightsExperienceManager@@AEAAJXZ @ 0x1801EF128 (-DestroyExperience@CInsightsExperienceManager@@AEAAJXZ.c)
 */

void __fastcall CInsightsExperienceManager::CloseExperienceIfRunning(CInsightsExperienceManager *this)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 26) == 2 )
  {
    v1 = CInsightsExperienceManager::DestroyExperience(this);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1B5,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\insightsexperiencemanager.cpp",
        (const char *)(unsigned int)v1);
  }
}
