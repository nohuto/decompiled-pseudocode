/*
 * XREFs of ?GetCurrentPowerLevel@TrackedWorkloadMonitor@@QEAAIXZ @ 0x1C006DF78
 * Callers:
 *     ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1C02BB838 (-ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TrackedWorkloadMonitor::GetCurrentPowerLevel(TrackedWorkloadMonitor *this)
{
  return *((unsigned int *)this + 10 * *((unsigned int *)this + 54) + 10);
}
