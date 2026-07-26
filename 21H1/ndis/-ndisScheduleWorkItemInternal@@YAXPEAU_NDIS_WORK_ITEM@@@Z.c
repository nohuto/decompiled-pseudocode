/*
 * XREFs of ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x1C0019320
 * Callers:
 *     ?ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z @ 0x1C001924C (-ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001C4F8 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisInitModeTimeoutDpc@@YAXPEAX000@Z @ 0x1C0039DE0 (-ndisInitModeTimeoutDpc@@YAXPEAX000@Z.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C005A3A8 (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisTempRefTimerDpc@@YAXPEAX000@Z @ 0x1C005C860 (-ndisTempRefTimerDpc@@YAXPEAX000@Z.c)
 *     NdisMResetMiniport @ 0x1C00731F0 (NdisMResetMiniport.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C0080990 (NdisMReenumerateFailedAdapter.c)
 *     ?ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0082D9C (-ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisPdcTaskClientDisableTimeoutDpc@@YAXPEAX000@Z @ 0x1C00929B0 (-ndisPdcTaskClientDisableTimeoutDpc@@YAXPEAX000@Z.c)
 *     ?ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0094CA0 (-ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIdleWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C00A5190 (-ndisIdleWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z.c)
 *     ?ndisSSIdleTimerDpc@@YAXPEAX000@Z @ 0x1C00A61F0 (-ndisSSIdleTimerDpc@@YAXPEAX000@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00A8654 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisIfScheduleTimestampCapabilityChangeNotification@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00B2D30 (-ndisIfScheduleTimestampCapabilityChangeNotification@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     NdisScheduleWorkItem @ 0x1C00BDD70 (NdisScheduleWorkItem.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisScheduleWorkItemInternal(struct _NDIS_WORK_ITEM *a1)
{
  *(_QWORD *)a1->WrapperReserved = 0LL;
  *(_QWORD *)&a1->WrapperReserved[16] = ndisWorkItemHandler;
  *(_QWORD *)&a1->WrapperReserved[24] = a1;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)a1->WrapperReserved, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
}
