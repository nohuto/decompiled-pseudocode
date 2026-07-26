/*
 * XREFs of ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x1C00192E0
 * Callers:
 *     ?ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z @ 0x1C001920C (-ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001C4B8 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisInitModeTimeoutDpc@@YAXPEAX000@Z @ 0x1C003A020 (-ndisInitModeTimeoutDpc@@YAXPEAX000@Z.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C005AA30 (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisTempRefTimerDpc@@YAXPEAX000@Z @ 0x1C005CEE0 (-ndisTempRefTimerDpc@@YAXPEAX000@Z.c)
 *     NdisMResetMiniport @ 0x1C00738D0 (NdisMResetMiniport.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C0081070 (NdisMReenumerateFailedAdapter.c)
 *     ?ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C008347C (-ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisPdcTaskClientDisableTimeoutDpc@@YAXPEAX000@Z @ 0x1C0092E70 (-ndisPdcTaskClientDisableTimeoutDpc@@YAXPEAX000@Z.c)
 *     ?ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0095160 (-ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIdleWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C00A5650 (-ndisIdleWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z.c)
 *     ?ndisSSIdleTimerDpc@@YAXPEAX000@Z @ 0x1C00A66B0 (-ndisSSIdleTimerDpc@@YAXPEAX000@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00A8B14 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisIfScheduleTimestampCapabilityChangeNotification@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00B31F0 (-ndisIfScheduleTimestampCapabilityChangeNotification@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     NdisScheduleWorkItem @ 0x1C00BE230 (NdisScheduleWorkItem.c)
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
