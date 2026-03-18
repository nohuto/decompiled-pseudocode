/*
 * XREFs of IopDropIrp @ 0x140234D58
 * Callers:
 *     IopfCompleteRequest @ 0x1402B59D0 (IopfCompleteRequest.c)
 *     IoRemoveIoCompletion @ 0x1402B7BD0 (IoRemoveIoCompletion.c)
 *     IopInsertIrpInCompletionQueue @ 0x140311870 (IopInsertIrpInCompletionQueue.c)
 *     IopCopyCompleteReadIrp @ 0x140417DE0 (IopCopyCompleteReadIrp.c)
 *     IopCopyCompleteReadRequest @ 0x140418160 (IopCopyCompleteReadRequest.c)
 *     IopIoRingCompleteIrp @ 0x140559FA8 (IopIoRingCompleteIrp.c)
 *     IopFreeCompletionListPackets @ 0x1406ACB64 (IopFreeCompletionListPackets.c)
 * Callees:
 *     IopInterlockedAdd @ 0x14022A6A0 (IopInterlockedAdd.c)
 *     ObDereferenceObjectExWithTag @ 0x14028AE58 (ObDereferenceObjectExWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IopDequeueIrpFromFileObject @ 0x1403476D0 (IopDequeueIrpFromFileObject.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall IopDropIrp(PIRP Irp, ULONG_PTR a2)
{
  PMDL MdlAddress; // rcx
  struct _MDL *Next; // rbx
  PKEVENT UserEvent; // rcx
  ULONG Flags; // eax
  ULONG v8; // ecx

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
  UserEvent = Irp->UserEvent;
  if ( UserEvent && a2 && (Irp->Flags & 4) == 0 )
    ObfDereferenceObject(UserEvent);
  Flags = Irp->Flags;
  if ( (Flags & 0x2000) != 0 )
  {
    IopDequeueIrpFromFileObject(Irp, a2);
    Flags = Irp->Flags;
  }
  LOWORD(v8) = Flags;
  if ( a2 && (Flags & 0x80u) == 0 )
  {
    ObDereferenceObjectExWithTag(a2);
    v8 = Irp->Flags;
  }
  if ( (v8 & 0x8000) == 0 || !(unsigned int)IopInterlockedAdd((volatile signed __int64 *)&Irp->Overlay, -1) )
    IoFreeIrp(Irp);
}
