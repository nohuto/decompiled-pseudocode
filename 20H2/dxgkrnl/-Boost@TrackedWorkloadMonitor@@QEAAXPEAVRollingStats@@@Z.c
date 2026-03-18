/*
 * XREFs of ?Boost@TrackedWorkloadMonitor@@QEAAXPEAVRollingStats@@@Z @ 0x1C006DE9C
 * Callers:
 *     ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1C02BB838 (-ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_.c)
 *     ?UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD@@_K@Z @ 0x1C02BBEC0 (-UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD.c)
 * Callees:
 *     ?ChangeState@TrackedWorkloadMonitor@@AEAAXW4TrackedWorkloadState@@PEAVRollingStats@@I@Z @ 0x1C006DED4 (-ChangeState@TrackedWorkloadMonitor@@AEAAXW4TrackedWorkloadState@@PEAVRollingStats@@I@Z.c)
 */

void __fastcall TrackedWorkloadMonitor::Boost(TrackedWorkloadMonitor *this, struct RollingStats *a2)
{
  if ( (unsigned int)(*((_DWORD *)this + 10 * *((unsigned int *)this + 54) + 4) - 1) > 1 )
    TrackedWorkloadMonitor::ChangeState(this, 7LL, a2, *((unsigned int *)this + 10 * *((unsigned int *)this + 54) + 10));
}
