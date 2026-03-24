/*
 * XREFs of ?IsSaturated@TrackedWorkloadMonitor@@QEAA_NXZ @ 0x1C006F188
 * Callers:
 *     ?GetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAU_D3DKMT_GETTRACKEDWORKLOADSTATISTICS@@@Z @ 0x1C02BCAD8 (-GetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAU_D3DKMT_GETTRACKED.c)
 * Callees:
 *     <none>
 */

bool __fastcall TrackedWorkloadMonitor::IsSaturated(TrackedWorkloadMonitor *this)
{
  return *((_BYTE *)this + 40 * *((unsigned int *)this + 54) + 49);
}
