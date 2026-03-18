/*
 * XREFs of ?GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801CAD00
 * Callers:
 *     ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z @ 0x180204E30 (-StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z.c)
 *     ?StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXM_N@Z @ 0x180205430 (-StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXM_N@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CInteractionTracker::GetInertiaDecayRate(float *a1, int a2)
{
  float result; // xmm0_4
  int v3; // edx

  result = 0.0;
  if ( !a2 )
    return a1[27];
  v3 = a2 - 1;
  if ( !v3 )
    return a1[28];
  if ( v3 == 1 )
    return a1[41];
  return result;
}
