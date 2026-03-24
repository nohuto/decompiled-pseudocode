/*
 * XREFs of IopFreeCompletionListPackets @ 0x1406D4FA0
 * Callers:
 *     IopDeleteIoCompletionInternal @ 0x1402A9B88 (IopDeleteIoCompletionInternal.c)
 * Callees:
 *     IopDropIrp @ 0x1402E9444 (IopDropIrp.c)
 *     IoFreeIrp @ 0x140353540 (IoFreeIrp.c)
 *     IopFreeMiniCompletionPacket @ 0x1405E4380 (IopFreeMiniCompletionPacket.c)
 */

void __fastcall IopFreeCompletionListPackets(struct _SLIST_ENTRY *P)
{
  struct _SLIST_ENTRY *v1; // rbx
  struct _SLIST_ENTRY *v2; // rcx
  IRP *v3; // rcx

  if ( P )
  {
    v1 = P;
    do
    {
      v2 = v1;
      v1 = v1->Next;
      if ( LOBYTE(v2[1].Next) )
      {
        IopFreeMiniCompletionPacket(v2);
      }
      else
      {
        v3 = (IRP *)(&v2[-11].Next + 1);
        if ( (v3->Flags & 0x2000) != 0 )
          IopDropIrp(v3, (ULONG_PTR)v3->Tail.Overlay.OriginalFileObject);
        else
          IoFreeIrp(v3);
      }
    }
    while ( v1 );
  }
}
