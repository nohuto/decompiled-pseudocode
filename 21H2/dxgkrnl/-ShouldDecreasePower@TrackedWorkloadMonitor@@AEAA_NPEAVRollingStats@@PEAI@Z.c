/*
 * XREFs of ?ShouldDecreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1C006F200
 * Callers:
 *     ?GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z @ 0x1C006EFB8 (-GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z.c)
 * Callees:
 *     ?GetPowerLevel@TrackedWorkloadMonitor@@AEAAINNI@Z @ 0x1C006EEA0 (-GetPowerLevel@TrackedWorkloadMonitor@@AEAAINNI@Z.c)
 *     ?GetSafeStdDev@TrackedWorkloadMonitor@@AEAANPEAVRollingStats@@@Z @ 0x1C006EEE8 (-GetSafeStdDev@TrackedWorkloadMonitor@@AEAANPEAVRollingStats@@@Z.c)
 *     ?Update@RollingStats@@IEAAXXZ @ 0x1C006F380 (-Update@RollingStats@@IEAAXXZ.c)
 */

char __fastcall TrackedWorkloadMonitor::ShouldDecreasePower(
        TrackedWorkloadMonitor *this,
        struct RollingStats *a2,
        unsigned int *a3)
{
  char *v5; // rax
  unsigned int v7; // r9d
  __int64 v8; // r14
  double SafeStdDev; // xmm0_8
  unsigned int PowerLevel; // eax
  unsigned int v11; // r9d

  v5 = (char *)this + 16;
  v7 = 0;
  while ( !v5[32] || *(_DWORD *)v5 != 4 )
  {
    ++v7;
    v5 += 40;
    if ( v7 >= 5 )
    {
      v8 = 5LL * *((unsigned int *)this + 54);
      SafeStdDev = TrackedWorkloadMonitor::GetSafeStdDev(this, a2);
      RollingStats::Update(a2);
      if ( SafeStdDev + *((double *)a2 + 4) < 80.0 )
      {
        RollingStats::Update(a2);
        PowerLevel = TrackedWorkloadMonitor::GetPowerLevel(
                       this,
                       *((double *)a2 + 4),
                       80.0 - SafeStdDev,
                       *((_DWORD *)this + 2 * v8 + 10));
        if ( PowerLevel < v11 )
        {
          *a3 = PowerLevel;
          return 1;
        }
      }
      return 0;
    }
  }
  return 0;
}
