/*
 * XREFs of ?ShouldDecreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1C0081FA8
 * Callers:
 *     ?GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z @ 0x1C0081D48 (-GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z.c)
 * Callees:
 *     ?GetPowerLevel@TrackedWorkloadMonitor@@AEAAINNPEBUTrackedWorkloadStateInfo@@@Z @ 0x1C0081C30 (-GetPowerLevel@TrackedWorkloadMonitor@@AEAAINNPEBUTrackedWorkloadStateInfo@@@Z.c)
 *     ?GetSafeStdDev@TrackedWorkloadMonitor@@AEAANPEAVRollingStats@@@Z @ 0x1C0081C78 (-GetSafeStdDev@TrackedWorkloadMonitor@@AEAANPEAVRollingStats@@@Z.c)
 *     ?Update@RollingStats@@QEAAXXZ @ 0x1C0082120 (-Update@RollingStats@@QEAAXXZ.c)
 */

char __fastcall TrackedWorkloadMonitor::ShouldDecreasePower(
        TrackedWorkloadMonitor *this,
        struct RollingStats *a2,
        unsigned int *a3)
{
  int v3; // r9d
  _DWORD *i; // rax
  __int64 v8; // rax
  const struct TrackedWorkloadStateInfo *v9; // rbp
  double SafeStdDev; // xmm0_8
  double v11; // xmm5_8
  unsigned int PowerLevel; // eax

  v3 = 0;
  for ( i = (_DWORD *)((char *)this + 24); !*((_BYTE *)i + 36) || *i != 4; i += 10 )
  {
    if ( (unsigned int)++v3 >= 5 )
    {
      v8 = *((unsigned int *)this + 56);
      v9 = (TrackedWorkloadMonitor *)((char *)this + 40 * v8 + 24);
      SafeStdDev = TrackedWorkloadMonitor::GetSafeStdDev((TrackedWorkloadMonitor *)(5 * v8), a2);
      RollingStats::Update(a2);
      if ( (double)*((int *)this + 3) > SafeStdDev + *((double *)a2 + 4) )
      {
        RollingStats::Update(a2);
        PowerLevel = TrackedWorkloadMonitor::GetPowerLevel(this, *((double *)a2 + 4), v11 - SafeStdDev, v9);
        if ( PowerLevel < *((_DWORD *)v9 + 6) )
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
