/*
 * XREFs of IopFreeCompletionListPackets @ 0x1406B7124
 * Callers:
 *     IopDeleteIoCompletionInternal @ 0x14030AF28 (IopDeleteIoCompletionInternal.c)
 * Callees:
 *     IoFreeIrp @ 0x140218F40 (IoFreeIrp.c)
 *     IopDropIrp @ 0x14038D720 (IopDropIrp.c)
 *     IopFreeMiniCompletionPacket @ 0x1405EB920 (IopFreeMiniCompletionPacket.c)
 */

void __fastcall IopFreeCompletionListPackets(_SLIST_ENTRY *P, __int64 a2, __int64 a3)
{
  _SLIST_ENTRY *v3; // rbx
  _SLIST_ENTRY *v4; // rcx
  IRP *v5; // rcx

  if ( P )
  {
    v3 = P;
    do
    {
      v4 = v3;
      v3 = v3->Next;
      if ( LOBYTE(v4[1].Next) )
      {
        IopFreeMiniCompletionPacket(v4, a2, a3);
      }
      else
      {
        v5 = (IRP *)(&v4[-11].Next + 1);
        if ( (v5->Flags & 0x2000) != 0 )
          IopDropIrp(v5, (ULONG_PTR)v5->Tail.Overlay.OriginalFileObject);
        else
          IoFreeIrp(v5);
      }
    }
    while ( v3 );
  }
}
