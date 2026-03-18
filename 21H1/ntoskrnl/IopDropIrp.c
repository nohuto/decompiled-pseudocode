/*
 * XREFs of IopDropIrp @ 0x1402C08C0
 * Callers:
 *     IopfCompleteRequest @ 0x140248740 (IopfCompleteRequest.c)
 *     IoRemoveIoCompletion @ 0x140268050 (IoRemoveIoCompletion.c)
 *     IopFreeCompletionListPackets @ 0x140644218 (IopFreeCompletionListPackets.c)
 * Callees:
 *     IoFreeIrp @ 0x1402541B0 (IoFreeIrp.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x14026B1C0 (ObpTraceObjectDereferenceIfActive.c)
 *     IopDequeueIrpFromFileObject @ 0x1402C09B4 (IopDequeueIrpFromFileObject.c)
 *     IoFreeMdl @ 0x1402C0A80 (IoFreeMdl.c)
 *     ObpDeferObjectDeletion @ 0x14030B7E0 (ObpDeferObjectDeletion.c)
 *     IopInterlockedAdd @ 0x1403152CC (IopInterlockedAdd.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall IopDropIrp(PIRP Irp, ULONG_PTR BugCheckParameter2)
{
  PMDL MdlAddress; // rcx
  struct _MDL *Next; // rbx
  struct _DMA_ADAPTER *UserEvent; // rcx
  ULONG_PTR v7; // rbx
  signed __int64 v8; // rax
  bool v9; // cc
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
      v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 48), 0xFFFFFFFFFFFFFFFFuLL);
      v9 = v8 <= 1;
      BugCheckParameter4 = v8 - 1;
      if ( v9 )
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
        ObpDeferObjectDeletion(BugCheckParameter2 - 48);
      }
    }
  }
  if ( (Irp->Flags & 0x8000) == 0 || !(unsigned int)IopInterlockedAdd(&Irp->Overlay, 0xFFFFFFFFLL) )
    IoFreeIrp(Irp);
}
