/*
 * XREFs of IopFreeCompletionListPackets @ 0x140644218
 * Callers:
 *     IopDeleteIoCompletionInternal @ 0x1402FB7D8 (IopDeleteIoCompletionInternal.c)
 * Callees:
 *     IoFreeIrp @ 0x1402541B0 (IoFreeIrp.c)
 *     IopDropIrp @ 0x1402C08C0 (IopDropIrp.c)
 *     IopFreeMiniCompletionPacket @ 0x14062CC50 (IopFreeMiniCompletionPacket.c)
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
