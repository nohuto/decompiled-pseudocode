/*
 * XREFs of ?IsBelowImmersiveLauncher@ZBandHelpers@@YA_NW4ZBID@@@Z @ 0x180173C1C
 * Callers:
 *     ?ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x18007C760 (-ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANG.c)
 *     ?ActiveZBandChangedForMonitor@CJumpViewExperienceManager@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x180087B40 (-ActiveZBandChangedForMonitor@CJumpViewExperienceManager@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_C.c)
 *     _lambda_898c08e1df1d86c3a23ee6020b72647e_::operator() @ 0x180173930 (_lambda_898c08e1df1d86c3a23ee6020b72647e_--operator().c)
 *     ?ActiveZBandChangedForMonitor@CTaskContinuityActivitiesExperienceManager@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x1801BFD80 (-ActiveZBandChangedForMonitor@CTaskContinuityActivitiesExperienceManager@@UEAAJKKPEAUIImmersiveM.c)
 * Callees:
 *     <none>
 */

char __fastcall ZBandHelpers::IsBelowImmersiveLauncher(int a1)
{
  char v1; // dl

  v1 = 0;
  if ( a1 == 1 || a1 == 5 || (unsigned int)(a1 - 8) <= 4 )
    return 1;
  return v1;
}
