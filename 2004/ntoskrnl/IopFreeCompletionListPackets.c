/*
 * XREFs of IopFreeCompletionListPackets @ 0x14060EFE8
 * Callers:
 *     IopDeleteIoCompletionInternal @ 0x140338808 (IopDeleteIoCompletionInternal.c)
 * Callees:
 *     IopDropIrp @ 0x140267890 (IopDropIrp.c)
 *     IoFreeIrp @ 0x140290A30 (IoFreeIrp.c)
 *     IopFreeMiniCompletionPacket @ 0x1405F7C10 (IopFreeMiniCompletionPacket.c)
 */

void __fastcall IopFreeCompletionListPackets(_SLIST_ENTRY *P)
{
  _SLIST_ENTRY *v1; // rbx
  _SLIST_ENTRY *v2; // rcx
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
