/*
 * XREFs of CommonBuffer_AcquireBuffer @ 0x1C000FA9C
 * Callers:
 *     TR_AcquireDoubleBuffer @ 0x1C000EEC4 (TR_AcquireDoubleBuffer.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0015410 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     XilCoreCommand_AllocateResources @ 0x1C0015E9C (XilCoreCommand_AllocateResources.c)
 *     XilCommonBuffer_AcquireBufferEx @ 0x1C0016368 (XilCommonBuffer_AcquireBufferEx.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C00164C4 (XilCoreDeviceSlot_AllocateResources.c)
 *     Crashdump_CommonBufferAcquire @ 0x1C0049F6C (Crashdump_CommonBufferAcquire.c)
 * Callees:
 *     XilCoreCommonBuffer_AcquireBuffer @ 0x1C000FAEC (XilCoreCommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_QueueWorkItem @ 0x1C0018AB8 (CommonBuffer_QueueWorkItem.c)
 */

__int64 __fastcall CommonBuffer_AcquireBuffer(PVOID Context, int a2, int a3, int a4)
{
  __int64 v5; // rdi
  char v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
  v5 = XilCoreCommonBuffer_AcquireBuffer((int)Context + 88, a2, a3, a4, (__int64)&v7);
  if ( v7 == 1 )
    CommonBuffer_QueueWorkItem(Context);
  return v5;
}
