/*
 * XREFs of ??1WorkloadInstancePair@DXGTRACKEDWORKLOAD@@QEAA@XZ @ 0x1C004C1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroySynchObject@MonitoredFenceHelper@@AEAAXXZ @ 0x1C02B7CCC (-DestroySynchObject@MonitoredFenceHelper@@AEAAXXZ.c)
 */

void __fastcall DXGTRACKEDWORKLOAD::WorkloadInstancePair::~WorkloadInstancePair(
        DXGTRACKEDWORKLOAD::WorkloadInstancePair *this)
{
  MonitoredFenceHelper::DestroySynchObject((DXGTRACKEDWORKLOAD::WorkloadInstancePair *)((char *)this + 56));
}
