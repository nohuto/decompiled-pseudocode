/*
 * XREFs of ?SetEffectivePowerLevel@TrackedWorkloadMonitor@@QEAAXI_N@Z @ 0x1C006D274
 * Callers:
 *     ?EndTrackedWorkload@DXGTRACKEDWORKLOAD@@IEAAJXZ @ 0x1C02B7E10 (-EndTrackedWorkload@DXGTRACKEDWORKLOAD@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall TrackedWorkloadMonitor::SetEffectivePowerLevel(TrackedWorkloadMonitor *this, int a2, char a3)
{
  __int64 v3; // r9

  v3 = 5LL * *((unsigned int *)this + 54);
  *((_DWORD *)this + 2 * v3 + 10) = a2;
  *((_BYTE *)this + 8 * v3 + 49) = a3;
}
