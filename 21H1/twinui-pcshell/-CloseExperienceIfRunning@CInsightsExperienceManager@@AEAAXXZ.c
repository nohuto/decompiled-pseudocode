/*
 * XREFs of ?CloseExperienceIfRunning@CInsightsExperienceManager@@AEAAXXZ @ 0x1801CC15C
 * Callers:
 *     ?DisplaySettingsChange@CInsightsExperienceManager@@EEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801CC5A0 (-DisplaySettingsChange@CInsightsExperienceManager@@EEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONIT.c)
 *     ?Launch@CInsightsExperienceManager@@EEAAJXZ @ 0x1801CCF10 (-Launch@CInsightsExperienceManager@@EEAAJXZ.c)
 *     ?MonitorAdded@CInsightsExperienceManager@@EEAAJPEAUIImmersiveMonitor@@@Z @ 0x1801CD030 (-MonitorAdded@CInsightsExperienceManager@@EEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?OnDismiss@CInsightsExperienceManager@@EEAAJXZ @ 0x1801CD140 (-OnDismiss@CInsightsExperienceManager@@EEAAJXZ.c)
 *     ?OnEventQueued@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801CD250 (-OnEventQueued@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@P.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DestroyExperience@CInsightsExperienceManager@@AEAAJXZ @ 0x1801CC3F8 (-DestroyExperience@CInsightsExperienceManager@@AEAAJXZ.c)
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
