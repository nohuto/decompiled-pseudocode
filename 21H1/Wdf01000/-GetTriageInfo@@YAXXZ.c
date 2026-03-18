/*
 * XREFs of ?GetTriageInfo@@YAXXZ @ 0x1C0041460
 * Callers:
 *     FxLibraryCommonCommission @ 0x1C0041768 (FxLibraryCommonCommission.c)
 * Callees:
 *     <none>
 */

void GetTriageInfo(void)
{
  WPP_GLOBAL_WDF_Control.DeviceQueue.1 = ($18E3EACC1E717291AA7C720ECCD5C45C)0x800000068LL;
  WPP_GLOBAL_WDF_Control.Dpc.TargetInfoAsUlong = 10;
  *(void **)((char *)&WPP_GLOBAL_WDF_Control.Dpc.DeferredContext + 4) = (void *)8;
  LODWORD(WPP_GLOBAL_WDF_Control.Dpc.SystemArgument2) = 48;
  *((_DWORD *)&WPP_GLOBAL_WDF_Control.Dpc.0 + 1) = 32;
  LODWORD(WPP_GLOBAL_WDF_Control.Dpc.ProcessorHistory) = 64;
  LODWORD(WPP_GLOBAL_WDF_Control.Dpc.DeferredContext) = 64;
  HIDWORD(WPP_GLOBAL_WDF_Control.Dpc.SystemArgument1) = 32;
  *(_DWORD *)&WPP_GLOBAL_WDF_Control.DeviceQueue.Type = 40;
  WPP_GLOBAL_WDF_Control.DeviceQueue.DeviceListHead.Blink = (_LIST_ENTRY *)0x3800000028LL;
  WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceRoutine = (_IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *))40;
  *(_DWORD *)&WPP_GLOBAL_WDF_Control.StackSize = 120;
  WPP_GLOBAL_WDF_Control.Dpc.DpcListEntry.Next = (_SINGLE_LIST_ENTRY *)0x1000000048LL;
  *(_DWORD *)(&WPP_GLOBAL_WDF_Control.DeviceQueue.Size + 1) = 16;
  LODWORD(WPP_GLOBAL_WDF_Control.DeviceQueue.DeviceListHead.Flink) = 8;
  *(_QWORD *)(&WPP_GLOBAL_WDF_Control.Queue.Wcb.NumberOfMapRegisters + 1) = 0xE8000000C0LL;
  *(void **)((char *)&WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceObject + 4) = (void *)0x12000000110LL;
  *(void **)((char *)&WPP_GLOBAL_WDF_Control.Queue.Wcb.CurrentIrp + 4) = (void *)0x16000000080LL;
  LODWORD(WPP_GLOBAL_WDF_Control.DeviceQueue.Lock) = 72;
  LODWORD(WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceContext) = 168;
  *(void **)((char *)&WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceContext + 4) = (void *)0x3A800000090LL;
  WPP_GLOBAL_WDF_Control.DeviceType = 360;
  WPP_GLOBAL_WDF_Control.Queue.ListEntry.Flink = (_LIST_ENTRY *)0x12000000098LL;
  WPP_GLOBAL_WDF_Control.Queue.ListEntry.Blink = (_LIST_ENTRY *)0x7800000130LL;
  WPP_GLOBAL_WDF_Control.Queue.Wcb.WaitQueueEntry.SortKey = 320;
  WPP_GLOBAL_WDF_Control.AlignmentRequirement = 944;
  *(&WPP_GLOBAL_WDF_Control.AlignmentRequirement + 1) = 136;
  WPP_GLOBAL_WDF_Control.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))8;
}
