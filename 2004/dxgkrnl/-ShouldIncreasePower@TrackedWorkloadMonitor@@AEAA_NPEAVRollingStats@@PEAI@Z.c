/*
 * XREFs of ?ShouldIncreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1C006E4F4
 * Callers:
 *     ?GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z @ 0x1C006E1D8 (-GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z.c)
 * Callees:
 *     ?GetPowerLevel@TrackedWorkloadMonitor@@AEAAINNI@Z @ 0x1C006E0C0 (-GetPowerLevel@TrackedWorkloadMonitor@@AEAAINNI@Z.c)
 *     ?GetSafeStdDev@TrackedWorkloadMonitor@@AEAANPEAVRollingStats@@@Z @ 0x1C006E108 (-GetSafeStdDev@TrackedWorkloadMonitor@@AEAANPEAVRollingStats@@@Z.c)
 *     ?Update@RollingStats@@IEAAXXZ @ 0x1C006E5A0 (-Update@RollingStats@@IEAAXXZ.c)
 */

char __fastcall TrackedWorkloadMonitor::ShouldIncreasePower(
        TrackedWorkloadMonitor *this,
        struct RollingStats *a2,
        unsigned int *a3)
{
  __int64 v6; // rbp
  double SafeStdDev; // xmm0_8
  unsigned int PowerLevel; // eax
  unsigned int v9; // r9d

  v6 = 5LL * *((unsigned int *)this + 54);
  SafeStdDev = TrackedWorkloadMonitor::GetSafeStdDev(this, a2);
  RollingStats::Update(a2);
  if ( SafeStdDev + *((double *)a2 + 4) <= 80.0 )
    return 0;
  RollingStats::Update(a2);
  PowerLevel = TrackedWorkloadMonitor::GetPowerLevel(
                 this,
                 *((double *)a2 + 4),
                 80.0 - SafeStdDev,
                 *((_DWORD *)this + 2 * v6 + 10));
  if ( PowerLevel <= v9 )
    return 0;
  *a3 = PowerLevel;
  return 1;
}
