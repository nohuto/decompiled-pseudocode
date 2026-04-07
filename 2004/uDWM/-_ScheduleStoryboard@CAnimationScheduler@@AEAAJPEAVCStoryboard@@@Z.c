/*
 * XREFs of ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x180036BC4
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180035E54 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x1800379F4 (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x180008088 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x1800329C8 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x1800336A4 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x180036C48 (-MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z.c)
 */

__int64 __fastcall CAnimationScheduler::_ScheduleStoryboard(CAnimationScheduler *this, struct CStoryboard *a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // eax
  __int64 v6; // rdx

  v3 = CTransitionVisualController::MorphForStoryboard(
         *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
         a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800D33EC, 1LL, v3, 0x3A9u);
  }
  else
  {
    v5 = CTransitionVisualController::RemoveTargetsForStoryboard(
           *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
           a2,
           0,
           0x10000000);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800D33EC, 1LL, v5, 0x3ACu);
    }
    else if ( *((_DWORD *)a2 + 6) <= 1u )
    {
      *((_DWORD *)a2 + 6) = 2;
      CStoryboard::_LogStoryboardEvent((unsigned __int64)a2, v6);
    }
  }
  if ( v4 < 0 )
    CStoryboard::Abandon(a2);
  return (unsigned int)v4;
}
