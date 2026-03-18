/*
 * XREFs of ?GetSafeStdDev@TrackedWorkloadMonitor@@AEAANPEAVRollingStats@@@Z @ 0x1C006DFD8
 * Callers:
 *     ?ShouldDecreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1C006E2F0 (-ShouldDecreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z.c)
 *     ?ShouldIncreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1C006E3C4 (-ShouldIncreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z.c)
 * Callees:
 *     sqrt_0 @ 0x1C00270C6 (sqrt_0.c)
 *     ?Update@RollingStats@@IEAAXXZ @ 0x1C006E470 (-Update@RollingStats@@IEAAXXZ.c)
 */

double __fastcall TrackedWorkloadMonitor::GetSafeStdDev(TrackedWorkloadMonitor *this, struct RollingStats *a2)
{
  double v2; // xmm6_8

  v2 = 0.0;
  RollingStats::Update(a2);
  if ( *((double *)a2 + 5) > 0.01 )
  {
    RollingStats::Update(a2);
    return sqrt_0(*((double *)a2 + 5)) * 1.1;
  }
  return v2;
}
