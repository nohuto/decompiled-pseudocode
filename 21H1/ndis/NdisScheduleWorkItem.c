/*
 * XREFs of NdisScheduleWorkItem @ 0x1C00BDD70
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisRecordEvent@@YAXPEAUNDIS_EVENT_LOG_HANDLE__@@GPEAX@Z @ 0x1C0017A1C (-ndisRecordEvent@@YAXPEAUNDIS_EVENT_LOG_HANDLE__@@GPEAX@Z.c)
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x1C0019320 (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 */

NDIS_STATUS __stdcall NdisScheduleWorkItem(PNDIS_WORK_ITEM WorkItem)
{
  ndisRecordEvent((struct _NDIS_EVENT_LOG *)ndisWorkItemLog, 0, WorkItem);
  ndisScheduleWorkItemInternal(WorkItem);
  return 0;
}
