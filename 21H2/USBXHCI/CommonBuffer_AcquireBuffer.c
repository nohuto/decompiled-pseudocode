/*
 * XREFs of CommonBuffer_AcquireBuffer @ 0x1C000E440
 * Callers:
 *     TR_AcquireDoubleBuffer @ 0x1C000D28C (TR_AcquireDoubleBuffer.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0015410 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     XilCoreCommand_AllocateResources @ 0x1C0015B4C (XilCoreCommand_AllocateResources.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C00161E8 (XilCoreDeviceSlot_AllocateResources.c)
 *     XilCommonBuffer_AcquireBufferEx @ 0x1C00165F0 (XilCommonBuffer_AcquireBufferEx.c)
 *     Crashdump_CommonBufferAcquire @ 0x1C00494AC (Crashdump_CommonBufferAcquire.c)
 * Callees:
 *     XilCoreCommonBuffer_AcquireBuffer @ 0x1C000E490 (XilCoreCommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_QueueWorkItem @ 0x1C0019468 (CommonBuffer_QueueWorkItem.c)
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
