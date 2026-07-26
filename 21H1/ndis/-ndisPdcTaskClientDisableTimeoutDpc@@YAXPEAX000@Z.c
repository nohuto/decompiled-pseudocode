/*
 * XREFs of ?ndisPdcTaskClientDisableTimeoutDpc@@YAXPEAX000@Z @ 0x1C00929B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x1C0019320 (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 */

void __fastcall ndisPdcTaskClientDisableTimeoutDpc(
        PVOID SystemSpecific1,
        char *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  ndisScheduleWorkItemInternal((struct _NDIS_WORK_ITEM *)(FunctionContext + 5616));
}
