/*
 * XREFs of ??1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ @ 0x1C02B7B78
 * Callers:
 *     NtDxgkDestroyTrackedWorkload @ 0x1C02B8DA0 (NtDxgkDestroyTrackedWorkload.c)
 *     NtDxgkGetAvailableTrackedWorkloadIndex @ 0x1C02B91C0 (NtDxgkGetAvailableTrackedWorkloadIndex.c)
 *     NtDxgkGetTrackedWorkloadStatistics @ 0x1C02B9500 (NtDxgkGetTrackedWorkloadStatistics.c)
 *     NtDxgkResetTrackedWorkloadStatistics @ 0x1C02B9870 (NtDxgkResetTrackedWorkloadStatistics.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1C02B9A70 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     ?Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ @ 0x1C004C2F8 (-Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(DXGTRACKEDWORKLOAD **this)
{
  DXGTRACKEDWORKLOAD *v2; // rcx
  DXGTRACKEDWORKLOAD *v3; // rcx

  v2 = *this;
  if ( v2 )
    DXGTRACKEDWORKLOAD::Release(v2);
  v3 = this[1];
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v3 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v3 + 2), v3);
  }
}
