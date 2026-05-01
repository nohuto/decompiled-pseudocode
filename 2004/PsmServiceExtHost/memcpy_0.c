/*
 * XREFs of memcpy_0 @ 0x180046502
 * Callers:
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x18000221C (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     CrmRegistrationStart @ 0x180004FA4 (CrmRegistrationStart.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x180009EB0 (-MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     PsmHostStateNotification2 @ 0x18000B300 (PsmHostStateNotification2.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_K5PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x180012FA0 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KPEAU_RM_ACTIVATOR@@PEA_N6PEAPEAVResourceSet@2@@Z @ 0x180014660 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     RmpWnfPublishMessageToClientStateName @ 0x180021864 (RmpWnfPublishMessageToClientStateName.c)
 *     CrmStateMonitorStart @ 0x18002B120 (CrmStateMonitorStart.c)
 *     CrmStateMonitorStateSet @ 0x18002B6B4 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorLogDataGet @ 0x18002BC40 (CrmStateMonitorLogDataGet.c)
 *     ?RmpRmSidInitialize@@YAXPEAT_RM_SID@@PEAX@Z @ 0x18002C454 (-RmpRmSidInitialize@@YAXPEAT_RM_SID@@PEAX@Z.c)
 *     CempGetTokenHostInfo @ 0x180030F60 (CempGetTokenHostInfo.c)
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x180031238 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x180031460 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 *     ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x1800317B0 (-MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z.c)
 *     PsmMemoryLimitNotification2 @ 0x1800331E0 (PsmMemoryLimitNotification2.c)
 *     CrmStateMonitorGPUUsageStart @ 0x180037F9C (CrmStateMonitorGPUUsageStart.c)
 *     ?CdplIsSupportedInl@@YAJPEAH@Z @ 0x18003CC48 (-CdplIsSupportedInl@@YAJPEAH@Z.c)
 *     ?RmpSystemSetWorkloadAllowedCpuSets@@YAJPEA_KW4_THREAD_WORKLOAD_CLASS@@@Z @ 0x180040FA8 (-RmpSystemSetWorkloadAllowedCpuSets@@YAJPEA_KW4_THREAD_WORKLOAD_CLASS@@@Z.c)
 *     CrmStateMonitorWNFStart @ 0x180042970 (CrmStateMonitorWNFStart.c)
 *     CrmStateMonitorPowerSettingsStart @ 0x180042D98 (CrmStateMonitorPowerSettingsStart.c)
 *     CrmStateMonitorSystemDiskUsageStart @ 0x180043658 (CrmStateMonitorSystemDiskUsageStart.c)
 *     CrmStateMonitorWNFCallback @ 0x180043AC0 (CrmStateMonitorWNFCallback.c)
 *     CrmStateMonitorTimeSinceBootStart @ 0x180043B44 (CrmStateMonitorTimeSinceBootStart.c)
 *     CrmStateMonitorNetworkStart @ 0x180043CC8 (CrmStateMonitorNetworkStart.c)
 *     CrmStateMonitorCPUUsageStart @ 0x180043E4C (CrmStateMonitorCPUUsageStart.c)
 *     CrmStateMonitorTimeSinceLogonStart @ 0x180043F9C (CrmStateMonitorTimeSinceLogonStart.c)
 *     CrmStateMonitorDelayedCsStart @ 0x1800441CC (CrmStateMonitorDelayedCsStart.c)
 *     CrmStateMonitorDelayedAcStart @ 0x180044240 (CrmStateMonitorDelayedAcStart.c)
 *     CrmStateMonitorCsAcDcStart @ 0x1800442B4 (CrmStateMonitorCsAcDcStart.c)
 *     CrmStateMonitorPowerConstrainedStart @ 0x180044318 (CrmStateMonitorPowerConstrainedStart.c)
 *     CrmStateMonitorPostResumeStart @ 0x1800443C0 (CrmStateMonitorPostResumeStart.c)
 *     CrmStateMonitorPostShellReadyStart @ 0x18004442C (CrmStateMonitorPostShellReadyStart.c)
 *     CrmStateMonitorDisconnectedStandbyStart @ 0x180044498 (CrmStateMonitorDisconnectedStandbyStart.c)
 *     CrmStateMonitorCompositeTestStart @ 0x1800849F0 (CrmStateMonitorCompositeTestStart.c)
 *     CrmStateMonitorTestStart @ 0x180084E4C (CrmStateMonitorTestStart.c)
 *     ReportHangInternal2 @ 0x180086804 (ReportHangInternal2.c)
 *     ?ReportHangInternal@@YAJPEAUHWND__@@PEAKKKKPEBG@Z @ 0x180087028 (-ReportHangInternal@@YAJPEAUHWND__@@PEAKKKKPEBG@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
