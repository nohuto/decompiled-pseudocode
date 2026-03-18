/*
 * XREFs of CommonBuffer_QueueWorkItem @ 0x1C0018168
 * Callers:
 *     CommonBuffer_AcquireBuffers @ 0x1C00090B4 (CommonBuffer_AcquireBuffers.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C000DB70 (CommonBuffer_AcquireBuffer.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C0014BA8 (XilCoreDeviceSlot_AllocateResources.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0009878 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CommonBuffer_QueueWorkItem(struct _KEVENT *Context)
{
  char v2; // di
  struct _DEVICE_OBJECT *v3; // rax
  int v4; // edx
  struct _IO_WORKITEM *WorkItem; // rsi

  v2 = 0;
  v3 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 248))(
                                  WdfDriverGlobals,
                                  **(_QWORD **)&Context->Header.Lock);
  WorkItem = IoAllocateWorkItem(v3);
  if ( WorkItem )
  {
    KeClearEvent(Context + 1);
    IoQueueWorkItemEx(WorkItem, (PIO_WORKITEM_ROUTINE_EX)CommonBuffer_WorkItem, CriticalWorkQueue, Context);
    return 1;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 3;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)&Context->Header.Lock + 72LL),
      v4,
      8,
      15,
      (__int64)&WPP_d7539c7ae1ee350478bc8f7c9543b560_Traceguids);
  }
  return v2;
}
