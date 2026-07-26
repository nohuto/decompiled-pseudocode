/*
 * XREFs of NdisAllocateBuffer @ 0x1C00BE8A0
 * Callers:
 *     ?ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C0062820 (-ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C0062C8C (-ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ndisLWM5IndicateReceive @ 0x1C00C44E0 (ndisLWM5IndicateReceive.c)
 *     ndisMIsLoopbackPacket @ 0x1C00C48F0 (ndisMIsLoopbackPacket.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisAllocateBuffer(
        PNDIS_STATUS Status,
        PNDIS_BUFFER *Buffer,
        NDIS_HANDLE PoolHandle,
        PVOID VirtualAddress,
        UINT Length)
{
  PMDL Mdl; // rax

  *Status = -1073741823;
  Mdl = IoAllocateMdl(VirtualAddress, Length, 0, 0, 0LL);
  *Buffer = Mdl;
  if ( Mdl )
  {
    MmBuildMdlForNonPagedPool(Mdl);
    (*Buffer)->Next = 0LL;
    *Status = 0;
  }
}
