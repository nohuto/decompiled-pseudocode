/*
 * XREFs of IopFreeCompletionListPackets @ 0x1406AC280
 * Callers:
 *     IopDeleteIoCompletionInternal @ 0x140227CC8 (IopDeleteIoCompletionInternal.c)
 * Callees:
 *     IopDropIrp @ 0x14029A794 (IopDropIrp.c)
 *     IoFreeIrp @ 0x14035E290 (IoFreeIrp.c)
 *     IopFreeMiniCompletionPacket @ 0x1406D3AE0 (IopFreeMiniCompletionPacket.c)
 */

void __fastcall IopFreeCompletionListPackets(_QWORD *P)
{
  _QWORD *v1; // rbx
  _BYTE *v2; // rcx
  _BYTE *v3; // rcx

  if ( P )
  {
    v1 = P;
    do
    {
      v2 = v1;
      v1 = (_QWORD *)*v1;
      if ( v2[16] )
      {
        IopFreeMiniCompletionPacket(v2);
      }
      else
      {
        v3 = v2 - 168;
        if ( (*((_DWORD *)v3 + 4) & 0x2000) != 0 )
          IopDropIrp((PIRP)v3, *((_QWORD *)v3 + 24));
        else
          IoFreeIrp((PIRP)v3);
      }
    }
    while ( v1 );
  }
}
