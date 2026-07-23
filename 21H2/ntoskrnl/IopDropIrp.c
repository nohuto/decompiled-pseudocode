/*
 * XREFs of IopDropIrp @ 0x14029A794
 * Callers:
 *     IoRemoveIoCompletion @ 0x1402A8D10 (IoRemoveIoCompletion.c)
 *     IopfCompleteRequest @ 0x1402E7D10 (IopfCompleteRequest.c)
 *     IopCopyCompleteReadIrp @ 0x1403F1580 (IopCopyCompleteReadIrp.c)
 *     IopCopyCompleteReadRequest @ 0x1403F1900 (IopCopyCompleteReadRequest.c)
 *     IopFreeCompletionListPackets @ 0x1406AC280 (IopFreeCompletionListPackets.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x14023A834 (ObpDeferObjectDeletion.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     IopInterlockedAdd @ 0x140242EBC (IopInterlockedAdd.c)
 *     IopDequeueIrpFromFileObject @ 0x14029A888 (IopDequeueIrpFromFileObject.c)
 *     IoFreeMdl @ 0x14029A950 (IoFreeMdl.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x1402EE9C0 (ObpTraceObjectDereferenceIfActive.c)
 *     IoFreeIrp @ 0x14035E290 (IoFreeIrp.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
      ObpTraceObjectDereferenceIfActive(BugCheckParameter2 - 48, 1LL, 1953261124LL);
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
  if ( (Irp->Flags & 0x8000) == 0 || !(unsigned int)IopInterlockedAdd((volatile signed __int64 *)&Irp->Overlay, -1) )
    IoFreeIrp(Irp);
}
