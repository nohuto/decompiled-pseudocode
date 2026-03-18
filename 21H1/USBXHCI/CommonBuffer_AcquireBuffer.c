/*
 * XREFs of CommonBuffer_AcquireBuffer @ 0x1C000DB70
 * Callers:
 *     TR_AcquireDoubleBuffer @ 0x1C000C9BC (TR_AcquireDoubleBuffer.c)
 *     XilCoreCommand_AllocateResources @ 0x1C001444C (XilCoreCommand_AllocateResources.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C0014BA8 (XilCoreDeviceSlot_AllocateResources.c)
 *     XilCommonBuffer_AcquireBufferEx @ 0x1C0014FB0 (XilCommonBuffer_AcquireBufferEx.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C00163D0 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     Crashdump_CommonBufferAcquire @ 0x1C00495DC (Crashdump_CommonBufferAcquire.c)
 * Callees:
 *     XilCoreCommonBuffer_AcquireBuffer @ 0x1C000DBC0 (XilCoreCommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_QueueWorkItem @ 0x1C0018168 (CommonBuffer_QueueWorkItem.c)
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
