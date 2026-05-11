/*
 * XREFs of USBType1AsyncEndpointInitialize @ 0x1C0031E98
 * Callers:
 *     USBType1RenderCreatePin @ 0x1C0032670 (USBType1RenderCreatePin.c)
 * Callees:
 *     memset @ 0x1C00142C0 (memset.c)
 *     USBHwAllocateAndBag @ 0x1C002C45C (USBHwAllocateAndBag.c)
 */

__int64 __fastcall USBType1AsyncEndpointInitialize(__int64 a1)
{
  _QWORD *v1; // rsi
  void *v3; // rbx
  __int64 v4; // r15
  PVOID v5; // r14
  int v6; // ebx
  PIRP Irp; // rax
  IRP *v8; // rdi
  __int64 v9; // r13
  PIO_WORKITEM WorkItem; // rax
  PVOID PoolWithTag; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD **)(a1 + 16);
  v3 = *(void **)(a1 + 8);
  v4 = v1[19];
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0xA4uLL, 0x41627845u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
    v6 = USBHwAllocateAndBag(&PoolWithTag, v3);
  else
    v6 = -1073741670;
  if ( v6 >= 0 )
  {
    Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(v1[2] + 40LL) + 76LL), 0);
    v8 = Irp;
    if ( !Irp )
      return (unsigned int)-1073741670;
    v9 = *(_QWORD *)(v1[18] + 176LL);
    v6 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), Irp, (PFNKSFREE)IoFreeIrp);
    if ( v6 < 0 )
    {
      IoFreeIrp(v8);
      return (unsigned int)v6;
    }
    memset((void *)(v4 + 872), 0, 0x70uLL);
    *(_QWORD *)(v4 + 872) = v8;
    *(_QWORD *)(v4 + 864) = v5;
    *(_QWORD *)(v4 + 880) = v1;
    *(_DWORD *)(v4 + 900) = 1 << *(_BYTE *)(v9 + 7);
    KeInitializeEvent((PRKEVENT)(v4 + 920), SynchronizationEvent, 0);
    KeInitializeEvent((PRKEVENT)(v4 + 944), SynchronizationEvent, 0);
    WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(v1[2] + 40LL));
    *(_QWORD *)(v4 + 968) = WorkItem;
    if ( !WorkItem )
      return (unsigned int)-1073741670;
  }
  return (unsigned int)v6;
}
