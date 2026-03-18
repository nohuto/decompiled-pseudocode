/*
 * XREFs of sub_1C000AF90 @ 0x1C000AF90
 * Callers:
 *     sub_1C000A690 @ 0x1C000A690 (sub_1C000A690.c)
 *     sub_1C000AE00 @ 0x1C000AE00 (sub_1C000AE00.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C000AF90(int a1, struct _LIST_ENTRY *a2, LIST_ENTRY **a3)
{
  unsigned int v6; // esi
  struct _DEVICE_OBJECT *DeferredRoutine; // rax
  LIST_ENTRY *p_DeviceListHead; // rdx

  v6 = -1073740543;
  if ( a2 )
  {
    ExAcquirePushLockExclusiveEx(&DeviceObject.Dpc.DpcListEntry, 0LL);
    DeviceObject.Dpc.ProcessorHistory = (KAFFINITY)KeGetCurrentThread();
  }
  DeferredRoutine = (struct _DEVICE_OBJECT *)DeviceObject.Dpc.DeferredRoutine;
  if ( (PKDEFERRED_ROUTINE *)DeviceObject.Dpc.DeferredRoutine != &DeviceObject.Dpc.DeferredRoutine )
  {
    while ( 1 )
    {
      p_DeviceListHead = &DeferredRoutine[-1].DeviceQueue.DeviceListHead;
      if ( LODWORD(DeferredRoutine[-1].DeviceObjectExtension) == a1 )
        break;
      DeferredRoutine = *(struct _DEVICE_OBJECT **)&DeferredRoutine->Type;
      if ( DeferredRoutine == (struct _DEVICE_OBJECT *)&DeviceObject.Dpc.DeferredRoutine )
        goto LABEL_6;
    }
    if ( a2 )
    {
      if ( p_DeviceListHead[8].Blink != a2 )
        goto LABEL_6;
      if ( _InterlockedIncrement64((volatile signed __int64 *)&p_DeviceListHead[3]) <= 1 )
        __fastfail(0xEu);
    }
    *a3 = p_DeviceListHead;
    v6 = 0;
  }
LABEL_6:
  if ( a2 )
  {
    DeviceObject.Dpc.ProcessorHistory = 0LL;
    ExReleasePushLockExclusiveEx(&DeviceObject.Dpc.DpcListEntry, 0LL);
  }
  return v6;
}
