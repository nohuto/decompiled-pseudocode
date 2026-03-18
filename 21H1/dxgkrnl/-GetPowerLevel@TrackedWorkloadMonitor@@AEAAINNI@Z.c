/*
 * XREFs of ?GetPowerLevel@TrackedWorkloadMonitor@@AEAAINNI@Z @ 0x1C006CF30
 * Callers:
 *     ?ShouldDecreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1C006D290 (-ShouldDecreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z.c)
 *     ?ShouldIncreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1C006D364 (-ShouldIncreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TrackedWorkloadMonitor::GetPowerLevel(TrackedWorkloadMonitor *this, double a2, double a3, int a4)
{
  unsigned int v5; // eax
  unsigned int v6; // ecx
  __int64 result; // rax

  v5 = (int)(a2 / a3 * (double)a4 + 0.5);
  if ( v5 < a4 )
    v5 = (a4 + v5) >> 1;
  v6 = *((_DWORD *)this + 2);
  if ( v5 <= v6 )
    v6 = v5;
  result = *((unsigned int *)this + 1);
  if ( v6 >= (unsigned int)result )
    return v6;
  return result;
}
