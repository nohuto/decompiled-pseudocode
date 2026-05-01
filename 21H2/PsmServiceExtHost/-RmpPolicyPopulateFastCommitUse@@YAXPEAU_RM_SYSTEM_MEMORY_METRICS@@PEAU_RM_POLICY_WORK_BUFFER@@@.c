/*
 * XREFs of ?RmpPolicyPopulateFastCommitUse@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_POLICY_WORK_BUFFER@@@Z @ 0x180072470
 * Callers:
 *     ?RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180071E6C (-RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x180076C10 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 * Callees:
 *     ?RmpPolicyGetFastCommitFromMetrics@@YA_KPEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x1800722E8 (-RmpPolicyGetFastCommitFromMetrics@@YA_KPEAU_RM_ACTIVITY_HOST_METRICS@@@Z.c)
 */

void __fastcall RmpPolicyPopulateFastCommitUse(struct _RM_SYSTEM_MEMORY_METRICS *a1, struct _RM_POLICY_WORK_BUFFER *a2)
{
  unsigned int i; // edi

  for ( i = 0; i < *((_DWORD *)a2 + 9); ++i )
    *((_QWORD *)a1 + 4) += RmpPolicyGetFastCommitFromMetrics((struct _RM_ACTIVITY_HOST_METRICS *)(*(_QWORD *)a2
                                                                                                + ((unsigned __int64)i << 6)));
  *((_DWORD *)a1 + 18) |= 1u;
}
