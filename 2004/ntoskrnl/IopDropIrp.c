/*
 * XREFs of IopDropIrp @ 0x140267890
 * Callers:
 *     IoRemoveIoCompletion @ 0x14020F000 (IoRemoveIoCompletion.c)
 *     IopfCompleteRequest @ 0x140284EE0 (IopfCompleteRequest.c)
 *     IopFreeCompletionListPackets @ 0x14060EFE8 (IopFreeCompletionListPackets.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140212170 (ObpTraceObjectDereferenceIfActive.c)
 *     IopDequeueIrpFromFileObject @ 0x140267984 (IopDequeueIrpFromFileObject.c)
 *     IoFreeMdl @ 0x140267A50 (IoFreeMdl.c)
 *     IoFreeIrp @ 0x140290A30 (IoFreeIrp.c)
 *     ObpDeferObjectDeletion @ 0x1403494E0 (ObpDeferObjectDeletion.c)
 *     IopInterlockedAdd @ 0x14035301C (IopInterlockedAdd.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall IopDropIrp(PIRP Irp, ULONG_PTR BugCheckParameter2)
{
  PMDL MdlAddress; // rcx
  struct _MDL *Next; // rbx
  struct _DMA_ADAPTER *UserEvent; // rcx
  ULONG_PTR v7; // rbx
  __int64 v8; // rdx
  signed __int64 v9; // rax
  bool v10; // cc
  signed __int64 BugCheckParameter4; // rax

  if ( (Irp->Flags & 0x20) != 0 )
    ExFreePoolWithTag(Irp->AssociatedIrp.MasterIrp, 0);
  MdlAddress = Irp->MdlAddress;
  if ( MdlAddress )
  {
    do
    {
      Next = MdlAddress->Next;
      IoFreeMdl(MdlAddress);
      MdlAddress = Next;
    }
    while ( Next );
  }
  UserEvent = (struct _DMA_ADAPTER *)Irp->UserEvent;
  if ( UserEvent && BugCheckParameter2 && (Irp->Flags & 4) == 0 )
    HalPutDmaAdapter(UserEvent);
  if ( (Irp->Flags & 0x2000) != 0 )
    IopDequeueIrpFromFileObject(Irp, BugCheckParameter2);
  if ( BugCheckParameter2 )
  {
    if ( (Irp->Flags & 0x80u) == 0 )
    {
      v7 = BugCheckParameter2 - 48;
      ObpTraceObjectDereferenceIfActive(BugCheckParameter2 - 48);
      v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 48), 0xFFFFFFFFFFFFFFFFuLL);
      v10 = v9 <= 1;
      BugCheckParameter4 = v9 - 1;
      if ( v10 )
      {
        if ( *(_QWORD *)(v7 + 8) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v7 + 24) ^ (unsigned __int64)BYTE1(v7)],
            BugCheckParameter2,
            6uLL,
            *(_QWORD *)(v7 + 8));
        if ( BugCheckParameter4 < 0 )
          KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 5uLL, BugCheckParameter4);
        ObpDeferObjectDeletion(BugCheckParameter2 - 48, v8);
      }
    }
  }
  if ( (Irp->Flags & 0x8000) == 0 || !(unsigned int)IopInterlockedAdd(&Irp->Overlay, 0xFFFFFFFFLL) )
    IoFreeIrp(Irp);
}
