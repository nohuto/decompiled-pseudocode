/*
 * XREFs of QueuePropertyRequest @ 0x1C002B754
 * Callers:
 *     PropertySetFeatureValue @ 0x1C00285F0 (PropertySetFeatureValue.c)
 *     PropertySetBoolean @ 0x1C00287A0 (PropertySetBoolean.c)
 *     PropertySetDbLevel @ 0x1C0028DF0 (PropertySetDbLevel.c)
 *     PropertyGetSetMuxSource @ 0x1C0029B20 (PropertyGetSetMuxSource.c)
 *     PropertySetMixerLevels @ 0x1C0029F50 (PropertySetMixerLevels.c)
 *     PropertyGetSetChannelConfiguration @ 0x1C002A220 (PropertyGetSetChannelConfiguration.c)
 *     PropertySetTopologyNodeEnable @ 0x1C002A450 (PropertySetTopologyNodeEnable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall QueuePropertyRequest(
        PIRP Irp,
        struct _LIST_ENTRY *a2,
        struct _LIST_ENTRY *a3,
        struct _LIST_ENTRY *a4)
{
  PKSFILTER FilterFromIrp; // rax
  PKSDEVICE Device; // rax
  char *Context; // rdi
  struct _LIST_ENTRY *PoolWithTag; // rax

  FilterFromIrp = KsGetFilterFromIrp(Irp);
  if ( !FilterFromIrp )
    return 3221225473LL;
  Device = KsGetDevice(FilterFromIrp);
  if ( !Device )
    return 3221225473LL;
  Context = (char *)Device->Context;
  if ( !Context )
    return 3221225473LL;
  PoolWithTag = (struct _LIST_ENTRY *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x30uLL, 0x41627845u);
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag->Flink = a4;
  PoolWithTag->Blink = a2;
  PoolWithTag[1].Flink = a3;
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  Irp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = PoolWithTag;
  Irp->IoStatus.Information = 0LL;
  Irp->IoStatus.Status = -1073741823;
  IoCsqInsertIrp((PIO_CSQ)(Context + 568), Irp, 0LL);
  return 259LL;
}
