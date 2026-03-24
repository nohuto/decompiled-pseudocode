/*
 * XREFs of ?GetTriageInfo@@YAXXZ @ 0x1C00414E0
 * Callers:
 *     FxLibraryCommonCommission @ 0x1C00417E8 (FxLibraryCommonCommission.c)
 * Callees:
 *     <none>
 */

void GetTriageInfo(void)
{
  WPP_GLOBAL_WDF_Control.Dpc.DpcListEntry.Next = (_SINGLE_LIST_ENTRY *)0x800000068LL;
  WPP_GLOBAL_WDF_Control.Dpc.ProcessorHistory = 0x200000000ALL;
  *(void **)((char *)&WPP_GLOBAL_WDF_Control.Dpc.SystemArgument2 + 4) = (void *)8;
  WPP_GLOBAL_WDF_Control.ActiveThreadCount = 48;
  LODWORD(WPP_GLOBAL_WDF_Control.Dpc.DeferredContext) = 64;
  LODWORD(WPP_GLOBAL_WDF_Control.Dpc.SystemArgument2) = 64;
  HIDWORD(WPP_GLOBAL_WDF_Control.Dpc.DpcData) = 32;
  WPP_GLOBAL_WDF_Control.DeviceQueue.DeviceListHead.Blink = (_LIST_ENTRY *)0x1000000028LL;
  WPP_GLOBAL_WDF_Control.DeviceQueue.1 = ($18E3EACC1E717291AA7C720ECCD5C45C)0x3800000028LL;
  *(_QWORD *)&WPP_GLOBAL_WDF_Control.Queue.Wcb.NumberOfMapRegisters = 40LL;
  WPP_GLOBAL_WDF_Control.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))0x1000000048LL;
  LODWORD(WPP_GLOBAL_WDF_Control.DeviceQueue.Lock) = 8;
  *(void **)((char *)&WPP_GLOBAL_WDF_Control.Queue.Wcb.CurrentIrp + 4) = (void *)0xE8000000C0LL;
  HIDWORD(WPP_GLOBAL_WDF_Control.Queue.Wcb.BufferChainingDpc) = 272;
  WPP_GLOBAL_WDF_Control.AlignmentRequirement = 288;
  *(&WPP_GLOBAL_WDF_Control.AlignmentRequirement + 1) = 128;
  *(_DWORD *)&WPP_GLOBAL_WDF_Control.DeviceQueue.Type = 352;
  WPP_GLOBAL_WDF_Control.Dpc.TargetInfoAsUlong = 72;
  LODWORD(WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceObject) = 168;
  *(void **)((char *)&WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceObject + 4) = (void *)0x3A800000090LL;
  WPP_GLOBAL_WDF_Control.Queue.ListEntry.Blink = (_LIST_ENTRY *)0x7800000168LL;
  *(_QWORD *)&WPP_GLOBAL_WDF_Control.Queue.Wcb.NumberOfChannels = 0x12000000098LL;
  WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceRoutine = (_IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *))0x7800000130LL;
  LODWORD(WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceContext) = 320;
  WPP_GLOBAL_WDF_Control.DeviceQueue.DeviceListHead.Flink = (_LIST_ENTRY *)0x88000003B0LL;
  WPP_GLOBAL_WDF_Control.Dpc.SystemArgument1 = (void *)8;
}
